/********************************************************************
* proof/proof/src/G__Proof.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error proof/proof/src/G__Proof.h/C is only for compilation. Abort cint.
#endif
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define G__ANSIHEADER
#define G__DICTIONARY
#define G__PRIVATE_GVALUE
#include "G__ci.h"
#include "FastAllocString.h"
extern "C" {
extern void G__cpp_setup_tagtableG__Proof();
extern void G__cpp_setup_inheritanceG__Proof();
extern void G__cpp_setup_typetableG__Proof();
extern void G__cpp_setup_memvarG__Proof();
extern void G__cpp_setup_globalG__Proof();
extern void G__cpp_setup_memfuncG__Proof();
extern void G__cpp_setup_funcG__Proof();
extern void G__set_cpp_environmentG__Proof();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "TCondor.h"
#include "TDataSetManagerAliEn.h"
#include "TDataSetManagerFile.h"
#include "TDataSetManager.h"
#include "TDSet.h"
#include "TDSetProxy.h"
#include "TProofChain.h"
#include "TProofCondor.h"
#include "TProofDebug.h"
#include "TProof.h"
#include "TProofLite.h"
#include "TProofLog.h"
#include "TProofMgr.h"
#include "TProofMgrLite.h"
#include "TProofNodeInfo.h"
#include "TProofOutputFile.h"
#include "TProofOutputList.h"
#include "TProofProgressStatus.h"
#include "TProofQueryResult.h"
#include "TProofResources.h"
#include "TProofResourcesStatic.h"
#include "TProofServ.h"
#include "TProofServLite.h"
#include "TProofSuperMaster.h"
#include "TQueryResultManager.h"
#include "TSelVerifyDataSet.h"
#include "TSlave.h"
#include "TSlaveLite.h"
#include "TVirtualProofPlayer.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__ProofLN_TClass;
extern G__linked_taginfo G__G__ProofLN_TBuffer;
extern G__linked_taginfo G__G__ProofLN_TDirectory;
extern G__linked_taginfo G__G__ProofLN_TMemberInspector;
extern G__linked_taginfo G__G__ProofLN_TObject;
extern G__linked_taginfo G__G__ProofLN_TNamed;
extern G__linked_taginfo G__G__ProofLN_TCollection;
extern G__linked_taginfo G__G__ProofLN_TString;
extern G__linked_taginfo G__G__ProofLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__G__ProofLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ProofLN_va_list;
extern G__linked_taginfo G__G__ProofLN_TList;
extern G__linked_taginfo G__G__ProofLN_TBrowser;
extern G__linked_taginfo G__G__ProofLN_TObjArray;
extern G__linked_taginfo G__G__ProofLN_TTimer;
extern G__linked_taginfo G__G__ProofLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__G__ProofLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ProofLN_TPRegexp;
extern G__linked_taginfo G__G__ProofLN_TVirtualMutex;
extern G__linked_taginfo G__G__ProofLN_TCondorSlave;
extern G__linked_taginfo G__G__ProofLN_TCondor;
extern G__linked_taginfo G__G__ProofLN_TCondorcLcLEState;
extern G__linked_taginfo G__G__ProofLN_TIter;
extern G__linked_taginfo G__G__ProofLN_TMap;
extern G__linked_taginfo G__G__ProofLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__G__ProofLN_TUri;
extern G__linked_taginfo G__G__ProofLN_TFileCollection;
extern G__linked_taginfo G__G__ProofLN_TFileInfo;
extern G__linked_taginfo G__G__ProofLN_TMD5;
extern G__linked_taginfo G__G__ProofLN_TUrl;
extern G__linked_taginfo G__G__ProofLN_TVirtualMonitoringWriter;
extern G__linked_taginfo G__G__ProofLN_TFileStager;
extern G__linked_taginfo G__G__ProofLN_TDataSetManager;
extern G__linked_taginfo G__G__ProofLN_TDataSetManagercLcLEDataSetStatusBits;
extern G__linked_taginfo G__G__ProofLN_TDataSetManagercLcLEDataSetWorkOpts;
extern G__linked_taginfo G__G__ProofLN_TDataSetManagerFile;
extern G__linked_taginfo G__G__ProofLN_TPMERegexp;
extern G__linked_taginfo G__G__ProofLN_TObjString;
extern G__linked_taginfo G__G__ProofLN_TSeqCollection;
extern G__linked_taginfo G__G__ProofLN_THashList;
extern G__linked_taginfo G__G__ProofLN_TFile;
extern G__linked_taginfo G__G__ProofLN_TDatime;
extern G__linked_taginfo G__G__ProofLN_TEntryList;
extern G__linked_taginfo G__G__ProofLN_TSocket;
extern G__linked_taginfo G__G__ProofLN_TServerSocket;
extern G__linked_taginfo G__G__ProofLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR;
extern G__linked_taginfo G__G__ProofLN_reverse_iteratorlEvectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ProofLN_vectorlETStringcOallocatorlETStringgRsPgR;
extern G__linked_taginfo G__G__ProofLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ProofLN_TQObject;
extern G__linked_taginfo G__G__ProofLN_TFileHandler;
extern G__linked_taginfo G__G__ProofLN_TSignalHandler;
extern G__linked_taginfo G__G__ProofLN_FileStat_t;
extern G__linked_taginfo G__G__ProofLN_SysInfo_t;
extern G__linked_taginfo G__G__ProofLN_vectorlEintcOallocatorlEintgRsPgR;
extern G__linked_taginfo G__G__ProofLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ProofLN_TChain;
extern G__linked_taginfo G__G__ProofLN_TCut;
extern G__linked_taginfo G__G__ProofLN_TDSet;
extern G__linked_taginfo G__G__ProofLN_TEventList;
extern G__linked_taginfo G__G__ProofLN_TProof;
extern G__linked_taginfo G__G__ProofLN_TProofChain;
extern G__linked_taginfo G__G__ProofLN_TSelector;
extern G__linked_taginfo G__G__ProofLN_TTree;
extern G__linked_taginfo G__G__ProofLN_TDSetElement;
extern G__linked_taginfo G__G__ProofLN_pairlETDSetElementmUcOTStringgR;
extern G__linked_taginfo G__G__ProofLN_allocatorlEpairlETDSetElementmUcOTStringgRsPgR;
extern G__linked_taginfo G__G__ProofLN_listlEpairlETDSetElementmUcOTStringgRcOallocatorlEpairlETDSetElementmUcOTStringgRsPgRsPgR;
extern G__linked_taginfo G__G__ProofLN_listlEpairlETDSetElementmUcOTStringgRcOallocatorlEpairlETDSetElementmUcOTStringgRsPgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__ProofLN_listlEpairlETDSetElementmUcOTStringgRcOallocatorlEpairlETDSetElementmUcOTStringgRsPgRsPgRcLcLreverse_iterator;
extern G__linked_taginfo G__G__ProofLN_TDSetElementcLcLEStatusBits;
extern G__linked_taginfo G__G__ProofLN_TDSetcLcLEStatusBits;
extern G__linked_taginfo G__G__ProofLN_TProofServ;
extern G__linked_taginfo G__G__ProofLN_TDSetProxy;
extern G__linked_taginfo G__G__ProofLN_TAttFill;
extern G__linked_taginfo G__G__ProofLN_TLeaf;
extern G__linked_taginfo G__G__ProofLN_TBranch;
extern G__linked_taginfo G__G__ProofLN_TAttLine;
extern G__linked_taginfo G__G__ProofLN_TAttMarker;
extern G__linked_taginfo G__G__ProofLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR;
extern G__linked_taginfo G__G__ProofLN_TVirtualTreePlayer;
extern G__linked_taginfo G__G__ProofLN_TProofChaincLcLdA;
extern G__linked_taginfo G__G__ProofLN_TProofDesc;
extern G__linked_taginfo G__G__ProofLN_TProofLog;
extern G__linked_taginfo G__G__ProofLN_TProofMgr;
extern G__linked_taginfo G__G__ProofLN_TProofMgrcLcLEServType;
extern G__linked_taginfo G__G__ProofLN_TProofDesccLcLEStatus;
extern G__linked_taginfo G__G__ProofLN_TProofDebug;
extern G__linked_taginfo G__G__ProofLN_TProofDebugcLcLEProofDebugMask;
extern G__linked_taginfo G__G__ProofLN_TMacro;
extern G__linked_taginfo G__G__ProofLN_TMutex;
extern G__linked_taginfo G__G__ProofLN_TProofOutputList;
extern G__linked_taginfo G__G__ProofLN_TDrawFeedback;
extern G__linked_taginfo G__G__ProofLN_TMessage;
extern G__linked_taginfo G__G__ProofLN_TMonitor;
extern G__linked_taginfo G__G__ProofLN_TPluginHandler;
extern G__linked_taginfo G__G__ProofLN_TProofLockPath;
extern G__linked_taginfo G__G__ProofLN_TVirtualProofPlayer;
extern G__linked_taginfo G__G__ProofLN_TQueryResult;
extern G__linked_taginfo G__G__ProofLN_TSlave;
extern G__linked_taginfo G__G__ProofLN_TSemaphore;
extern G__linked_taginfo G__G__ProofLN_TProofProgressInfo;
extern G__linked_taginfo G__G__ProofLN_TSlaveInfo;
extern G__linked_taginfo G__G__ProofLN_TSlaveInfocLcLESlaveStatus;
extern G__linked_taginfo G__G__ProofLN_TMergerInfo;
extern G__linked_taginfo G__G__ProofLN_TProofMergePrg;
extern G__linked_taginfo G__G__ProofLN_TProofLite;
extern G__linked_taginfo G__G__ProofLN_TSlaveLite;
extern G__linked_taginfo G__G__ProofLN_TVirtualPacketizer;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLEStatusBits;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLEQueryMode;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLEUploadOpt;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLERegisterOpt;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLEUploadDataSetAnswer;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLEUploadPackageOpt;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLERunStatus;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLESubMerger;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLEProofClearData;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLEUrgent;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLEProofCacheCommands;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLEProofDataSetCommands;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLESendFileOpt;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLEProofWrkListAction;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLEBuildPackageOpt;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLEParCheckVersionOpt;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLEProofShowQuotaOpt;
extern G__linked_taginfo G__G__ProofLN_maplETStringcOTProofcLcLMD5Mod_tcOlesslETStringgRcOallocatorlEpairlEconstsPTStringcOTProofcLcLMD5Mod_tgRsPgRsPgR;
extern G__linked_taginfo G__G__ProofLN_TProofcLcLESlaves;
extern G__linked_taginfo G__G__ProofLN_TProofCondor;
extern G__linked_taginfo G__G__ProofLN_TQueryResultManager;
extern G__linked_taginfo G__G__ProofLN_TProofQueryResult;
extern G__linked_taginfo G__G__ProofLN_TProofLogElem;
extern G__linked_taginfo G__G__ProofLN_TProofMgrLite;
extern G__linked_taginfo G__G__ProofLN_TProofLogcLcLELogLocationBit;
extern G__linked_taginfo G__G__ProofLN_TProofLogcLcLERetrieveOpt;
extern G__linked_taginfo G__G__ProofLN_TProofResourcesStatic;
extern G__linked_taginfo G__G__ProofLN_TProofNodeInfo;
extern G__linked_taginfo G__G__ProofLN_TProofNodeInfocLcLENodeType;
extern G__linked_taginfo G__G__ProofLN_TFileMerger;
extern G__linked_taginfo G__G__ProofLN_TProofOutputFile;
extern G__linked_taginfo G__G__ProofLN_TProofOutputFilecLcLERunType;
extern G__linked_taginfo G__G__ProofLN_TProofOutputFilecLcLETypeOpt;
extern G__linked_taginfo G__G__ProofLN_TProofOutputFilecLcLEStatusBits;
extern G__linked_taginfo G__G__ProofLN_TProofProgressStatus;
extern G__linked_taginfo G__G__ProofLN_TProofProgressStatuscLcLEStatusBits;
extern G__linked_taginfo G__G__ProofLN_TQueryResultcLcLEQueryStatus;
extern G__linked_taginfo G__G__ProofLN_TProofResources;
extern G__linked_taginfo G__G__ProofLN_TProofResourcesStaticcLcLEInfoType;
extern G__linked_taginfo G__G__ProofLN_TApplication;
extern G__linked_taginfo G__G__ProofLN_TStopwatch;
extern G__linked_taginfo G__G__ProofLN_TIdleTOTimer;
extern G__linked_taginfo G__G__ProofLN_TReaperTimer;
extern G__linked_taginfo G__G__ProofLN_TShutdownTimer;
extern G__linked_taginfo G__G__ProofLN_TProofServLite;
extern G__linked_taginfo G__G__ProofLN_TProofServcLcLEStatusBits;
extern G__linked_taginfo G__G__ProofLN_TProofServcLcLEQueryAction;
extern G__linked_taginfo G__G__ProofLN_TProofServLiteInterruptHandler;
extern G__linked_taginfo G__G__ProofLN_TProofSuperMaster;
extern G__linked_taginfo G__G__ProofLN_TSelVerifyDataSet;
extern G__linked_taginfo G__G__ProofLN_TSlavecLcLESlaveType;
extern G__linked_taginfo G__G__ProofLN_TSlavecLcLESlaveStatus;
extern G__linked_taginfo G__G__ProofLN_TSlavecLcLEStatusBits;
extern G__linked_taginfo G__G__ProofLN_TVirtualProofPlayercLcLEStatusBits;
extern G__linked_taginfo G__G__ProofLN_TVirtualProofPlayercLcLEExitStatus;

/* STUB derived class for protected member access */
typedef pair<TDSetElement*,TString> G__pairlETDSetElementmUcOTStringgR;
typedef list<pair<TDSetElement*,TString>,allocator<pair<TDSetElement*,TString> > > G__listlEpairlETDSetElementmUcOTStringgRcOallocatorlEpairlETDSetElementmUcOTStringgRsPgRsPgR;
