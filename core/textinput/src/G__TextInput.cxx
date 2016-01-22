//
// File generated by core/utils/src/rootcint_tmp at Tue Jan 19 10:25:03 2016

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME coredItextinputdIsrcdIG__TextInput
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "G__TextInput.h"

#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"

// Direct notice to TROOT of the dictionary's loading.
namespace {
   static struct DictInit {
      DictInit() {
         ROOT::RegisterModule();
      }
   } __TheDictionaryInitializer;
}

// START OF SHADOWS

namespace ROOT {
   namespace Shadow {
   } // of namespace Shadow
} // of namespace ROOT
// END OF SHADOWS

/********************************************************
* core/textinput/src/G__TextInput.cxx
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtableG__TextInput();

extern "C" void G__set_cpp_environmentG__TextInput() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("Getline.h");
  G__cpp_reset_tagtableG__TextInput();
}
#include <new>
extern "C" int G__cpp_dllrevG__TextInput() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* Setting up global function */
static int G__G__TextInput__0_289(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) Getline((const char*) G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__TextInput__0_290(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) Getlinem((EGetLineMode) G__int(libp->para[0]), (const char*) G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__TextInput__0_296(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      Gl_histadd((const char*) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/*********************************************************
* Member function Stub
*********************************************************/

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__TextInput {
 public:
  G__Sizep2memfuncG__TextInput(): p(&G__Sizep2memfuncG__TextInput::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__TextInput::*p)();
};

size_t G__get_sizep2memfuncG__TextInput()
{
  G__Sizep2memfuncG__TextInput a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceG__TextInput() {

   /* Setting up class inheritance */
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__TextInput() {

   /* Setting up typedef entry */
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__G__TextInputLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__G__TextInputLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__G__TextInputLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__G__TextInputLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__G__TextInputLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__G__TextInputLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__G__TextInputLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__G__TextInputLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__G__TextInputLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__G__TextInputLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("EGetLineMode",117,G__get_linked_tagnum(&G__G__TextInputLN_EGetLineMode),0,-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */
extern "C" void G__cpp_setup_memvarG__TextInput() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/

/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__TextInput() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__TextInputLN_EGetLineMode),-1,-1,1,"kInit=-1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__TextInputLN_EGetLineMode),-1,-1,1,"kLine1=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__TextInputLN_EGetLineMode),-1,-1,1,"kOneChar=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__TextInputLN_EGetLineMode),-1,-1,1,"kCleanUp=2",0,(char*)NULL);

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalG__TextInput() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
   G__memfunc_setup("Getline", 712, G__G__TextInput__0_289, 67, -1, -1, 0, 1, 1, 1, 1, "C - - 10 - prompt", (char*) NULL
, (void*) NULL, 0);
   G__memfunc_setup("Getlinem", 821, G__G__TextInput__0_290, 67, -1, -1, 0, 2, 1, 1, 1, 
"u 'EGetLineMode' 'EGetLineMode' 0 - mode C - - 10 - prompt", (char*) NULL
, (void*) NULL, 0);
   G__memfunc_setup("Gl_histadd", 1011, G__G__TextInput__0_296, 121, -1, -1, 0, 1, 1, 1, 0, "C - - 10 - buf", (char*) NULL
, (void*) NULL, 0);

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcG__TextInput() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__TextInputLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__G__TextInputLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__G__TextInputLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__G__TextInputLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__G__TextInputLN_EGetLineMode = { "EGetLineMode" , 101 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableG__TextInput() {
  G__G__TextInputLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__G__TextInputLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__G__TextInputLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__G__TextInputLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__G__TextInputLN_EGetLineMode.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableG__TextInput() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__G__TextInputLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__G__TextInputLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__G__TextInputLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__G__TextInputLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__G__TextInputLN_EGetLineMode),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
}
extern "C" void G__cpp_setupG__TextInput(void) {
  G__check_setup_version(30051515,"G__cpp_setupG__TextInput()");
  G__set_cpp_environmentG__TextInput();
  G__cpp_setup_tagtableG__TextInput();

  G__cpp_setup_inheritanceG__TextInput();

  G__cpp_setup_typetableG__TextInput();

  G__cpp_setup_memvarG__TextInput();

  G__cpp_setup_memfuncG__TextInput();
  G__cpp_setup_globalG__TextInput();
  G__cpp_setup_funcG__TextInput();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__TextInput();
  return;
}
class G__cpp_setup_initG__TextInput {
  public:
    G__cpp_setup_initG__TextInput() { G__add_setup_func("G__TextInput",(G__incsetup)(&G__cpp_setupG__TextInput)); G__call_setup_funcs(); }
   ~G__cpp_setup_initG__TextInput() { G__remove_setup_func("G__TextInput"); }
};
G__cpp_setup_initG__TextInput G__cpp_setup_initializerG__TextInput;
