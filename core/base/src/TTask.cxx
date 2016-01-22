// @(#)root/base:$Id$
// Author: Rene Brun   02/09/2000

/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

//______________________________________________________________________________
//
// TTask is a base class that can be used to build a complex tree of Tasks.
// Each TTask derived class may contain other TTasks that can be executed
// recursively, such that a complex program can be dynamically built and executed
// by invoking the services of the top level Task or one of its subtasks.
//
// Use the TTask::Add function to add a subtask to an existing TTask.
// To execute a TTask, one calls the ExecuteTask function. ExecuteTask will
// call recursively:
//     - the TTask::Exec function of the derived class
//     - TTask::ExecuteTasks to execute for each task the list of its subtasks.
// If the top level task (see example below) is added to the list of Root
// browsable objects, the tree of tasks can be visualized by the Root browser.
// The browser can be used to start a task, set break points at the beginning
// of a task or when the task has completed. At a breakpoint, data structures
// generated by the execution up this point may be inspected asyncronously
// and then the execution can be resumed by selecting the "Continue" function
// of a task.
//
// A Task may be active or inactive (controlled by TTask::SetActive).
// When a task is not active, its sub tasks are not executed.
//
// A TTask tree may be made persistent, saving the status of all the tasks.
//
// The picture in the Root browser below has been generated by executing
// the following script:
//
//{ //------------------script tasks.C---------------------------
//   TTask *aliroot  = new TTask("aliroot","ALICE reconstruction main task");
//   TTask *geominit = new TTask("geomInit","Initialize ALICE geometry");
//   TTask *matinit  = new TTask("matInit","Initialize ALICE materials");
//   TTask *physinit = new TTask("physInit","Initialize Physics processes");
//   TTask *tracker  = new TTask("tracker","Track reconstruction manager");
//   TTask *tpcrec   = new TTask("tpcrec","TPC reconstruction");
//   TTask *itsrec   = new TTask("itsrec","ITS reconstruction");
//   TTask *muonrec  = new TTask("muonRec","Muon Reconstruction");
//   TTask *phosrec  = new TTask("phosRec","Phos Reconstruction");
//   TTask *richrec  = new TTask("richRec","Rich Reconstruction");
//   TTask *trdrec   = new TTask("trdRec","TRD Reconstruction");
//   TTask *globrec  = new TTask("globRec","Global Track Reconstruction");
//   TTask *pstats   = new TTask("printStats","Print Run Statistics");
//   TTask *run      = new TTask("run","Process one run");
//   TTask *event    = new TTask("event","Process one event");
//   aliroot->Add(geominit);
//   aliroot->Add(matinit);
//   aliroot->Add(physinit);
//   aliroot->Add(run);
//   run->Add(event);
//   event->Add(tracker);
//   event->Add(muonrec);
//   event->Add(phosrec);
//   event->Add(richrec);
//   event->Add(trdrec);
//   event->Add(globrec);
//   tracker->Add(tpcrec);
//   tracker->Add(itsrec);
//   run->Add(pstats);
//
//   gROOT->GetListOfBrowsables()->Add(aliroot,"aliroot");
//   new TBrowser;
//} //-------------------------------------------------------------
//
//Begin_Html
/*
<img src="gif/tasks.gif">
*/
//End_Html

#include "Riostream.h"
#include "TTask.h"
#include "TBrowser.h"
#include "TROOT.h"
#include "TRegexp.h"

TTask *TTask::fgBeginTask  = 0;
TTask *TTask::fgBreakPoint = 0;

ClassImp(TTask)

//______________________________________________________________________________
TTask::TTask()
{
   // Default constructor invoked when reading a TTask object from a file.

   fHasExecuted = kFALSE;
   fActive      = kTRUE;
   fBreakin     = 0;
   fBreakout    = 0;
   fTasks       = 0;
}

//______________________________________________________________________________
TTask::TTask(const char* name, const char *title)
      : TNamed(name,title)
{
   // Standard constructor.

   fHasExecuted = kFALSE;
   fActive      = kTRUE;
   fBreakin     = 0;
   fBreakout    = 0;
   fTasks       = new TList();
}
//______________________________________________________________________________

TTask& TTask::operator=(const TTask& tt)	 
{	 
   //assignment operator (PLEASE DO NOT USE THIS IS WRONG)	 
   if(this!=&tt) {	 
      TNamed::operator=(tt);	 
      fTasks->Delete();
      TIter next(tt.fTasks);
      TTask *task;
      while ((task = (TTask*)next())) {
         fTasks->Add(new TTask(*task));
      }      
      fOption=tt.fOption;	 
      fBreakin=tt.fBreakin;	 
      fBreakout=tt.fBreakout;	 
      fHasExecuted=tt.fHasExecuted;	 
      fActive=tt.fActive;	 
   }	 
   return *this;	 
}	 

//______________________________________________________________________________	 //______________________________________________________________________________
TTask::TTask(const TTask &other) : TNamed(other)	 
{	 
   // Copy constructor. 
   fTasks = new TList();	 
   TIter next(other.fTasks);
   TTask *task;
   while ((task = (TTask*)next())) {
      fTasks->Add(new TTask(*task));
   }
   fOption = other.fOption;
   fBreakin = other.fBreakin;
   fBreakout = other.fBreakout;
   fHasExecuted = kFALSE;
   fActive = other.fActive;   
}	 

//______________________________________________________________________________
TTask::~TTask()
{
   // Delete a task and its subtasks.
   if (!fTasks) return;
   fTasks->Delete();
   delete fTasks;
}

//______________________________________________________________________________
void TTask::Abort()
{
   // Abort current tree of tasks.
   // After this call, the tree of tasks is ready to be executed again.
   // The application must take care of cleaning data structures created
   // by previous executions.

   if (!fgBeginTask) {
      printf(" Nothing to abort: No task currently running\n");
      return;
   }
   CleanTasks();
   fgBeginTask  = 0;
   fgBreakPoint = 0;
}

//______________________________________________________________________________
void TTask::Browse(TBrowser *b)
{
   // Browse the list of tasks.
   // It is recommended to add the top level task to the list of
   // ROOT browsables by:
   //    gROOT->GetListOfBrowsables()->Add(myTopLevelTask)

   fTasks->Browse(b);
}

//______________________________________________________________________________
void TTask::CleanTasks()
{
   // Reset tasks state: breakpoints and execute flags
   // also invokes the Clear function of each task to clear all data
   // structures created by a previous execution of a task.

   if (fBreakin)  fBreakin  = 1;
   if (fBreakout) fBreakout = 1;
   fHasExecuted = kFALSE;
   Clear();
   TIter next(fTasks);
   TTask *task;
   while((task=(TTask*)next())) {
      task->CleanTasks();
   }
}

//______________________________________________________________________________
void TTask::Clear(Option_t *)
{
   // Recursively call the Clear function of this task and its subtasks.
   // The Clear function must be implemented for each derived class
   // to clear all data structures created by a previous execution of a task.
   // This function is automatically called by the CleanTasks function.
}

//______________________________________________________________________________
void TTask::Continue()
{
   // Resume execution at the current break point.

   if (!fgBeginTask) {
      printf(" No task to continue\n");
      return;
   }
   fgBreakPoint = 0;

   fgBeginTask->ExecuteTasks(fOption.Data());

   if (!fgBreakPoint) {
      fgBeginTask->CleanTasks();
      fgBeginTask = 0;
   }
}

//______________________________________________________________________________
void TTask::Exec(Option_t *)
{
   // Dummy Execute.
   // This function must be redefined in the derived classes.
}

//______________________________________________________________________________
void TTask::ExecuteTask(Option_t *option)
{
   // Execute main task and its subtasks.
   // When calling this function, the Exec function of the corresponding class
   // is invoked, then the list of its subtasks is executed calling recursively
   // all the subtasks, etc.
   //
   // The option parameter may be used to select different execution steps
   // within a task. This parameter is passed also to all the subtasks.

   if (fgBeginTask) {
      Error("ExecuteTask","Cannot execute task:%s, already running task: %s",GetName(),fgBeginTask->GetName());
      return;
   }
   if (!IsActive()) return;

   fOption = option;
   fgBeginTask = this;
   fgBreakPoint = 0;

   if (fBreakin) return;
   if (gDebug > 1) {
      TROOT::IndentLevel();
      cout<<"Execute task:"<<GetName()<<" : "<<GetTitle()<<endl;
      TROOT::IncreaseDirLevel();
   }
   Exec(option);

   fHasExecuted = kTRUE;
   ExecuteTasks(option);

   if (gDebug > 1) TROOT::DecreaseDirLevel();
   if (fBreakout) return;

   if (!fgBreakPoint) {
      fgBeginTask->CleanTasks();
      fgBeginTask = 0;
   }
}

//______________________________________________________________________________
void TTask::ExecuteTasks(Option_t *option)
{
   // Execute all the subtasks of a task.

   TIter next(fTasks);
   TTask *task;
   while((task=(TTask*)next())) {
      if (fgBreakPoint) return;
      if (!task->IsActive()) continue;
      if (task->fHasExecuted) {
         task->ExecuteTasks(option);
         continue;
      }
      if (task->fBreakin == 1) {
         printf("Break at entry of task: %s\n",task->GetName());
         fgBreakPoint = this;
         task->fBreakin++;
         return;
      }

      if (gDebug > 1) {
         TROOT::IndentLevel();
         cout<<"Execute task:"<<task->GetName()<<" : "<<task->GetTitle()<<endl;
         TROOT::IncreaseDirLevel();
      }
      task->Exec(option);
      task->fHasExecuted = kTRUE;
      task->ExecuteTasks(option);
      if (gDebug > 1) TROOT::DecreaseDirLevel();
      if (task->fBreakout == 1) {
         printf("Break at exit of task: %s\n",task->GetName());
         fgBreakPoint = this;
         task->fBreakout++;
         return;
      }
   }
}

//______________________________________________________________________________
void TTask::ls(Option_t *option) const
{
   // List the tree of tasks.
   // Indentation is used to identify the task tree.

   TROOT::IndentLevel();
   cout <<GetName()<<"\t"<<GetTitle()<<endl;
   TROOT::IncreaseDirLevel();

   TString opta = option;
   TString opt  = opta.Strip(TString::kBoth);

   TRegexp re(opt, kTRUE);

   TObject *obj;
   TIter nextobj(fTasks);
   while ((obj = (TObject *) nextobj())) {
      TString s = obj->GetName();
      if (s.Index(re) == kNPOS) continue;
      obj->ls(option);
   }
   TROOT::DecreaseDirLevel();
}
