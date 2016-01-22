//
// File generated by core/utils/src/rootcint_tmp at Tue Jan 19 10:25:02 2016

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME coredImetautilsdIsrcdIG__MetaUtils
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "G__MetaUtils.h"

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

namespace TClassEdit {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static void TClassEdit_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TClassEdit", 0 /*version*/, "include/TClassEdit.h", 36,
                     ::ROOT::DefineBehavior((void*)0,(void*)0),
                     &TClassEdit_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static void TClassEdit_Dictionary() {
         GenerateInitInstance()->GetClass();
      }

   }
}

/********************************************************
* core/metautils/src/G__MetaUtils.cxx
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

extern "C" void G__cpp_reset_tagtableG__MetaUtils();

extern "C" void G__set_cpp_environmentG__MetaUtils() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("ESTLType.h");
  G__add_compiledheader("RConversionRuleParser.h");
  G__add_compiledheader("TClassEdit.h");
  G__add_compiledheader("TSchemaRuleProcessor.h");
  G__add_compiledheader("TSchemaType.h");
  G__cpp_reset_tagtableG__MetaUtils();
}
#include <new>
extern "C" int G__cpp_dllrevG__MetaUtils() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TClassEdit */
static int G__G__MetaUtils_108_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 3:
      {
         string* pobj;
         string xobj = TClassEdit::CleanType((const char*) G__int(libp->para[0]), (int) G__int(libp->para[1])
, (const char**) G__int(libp->para[2]));
         pobj = new string(xobj);
         result7->obj.i = (long) ((void*) pobj);
         result7->ref = result7->obj.i;
         G__store_tempobject(*result7);
      }
      break;
   case 2:
      {
         string* pobj;
         string xobj = TClassEdit::CleanType((const char*) G__int(libp->para[0]), (int) G__int(libp->para[1]));
         pobj = new string(xobj);
         result7->obj.i = (long) ((void*) pobj);
         result7->ref = result7->obj.i;
         G__store_tempobject(*result7);
      }
      break;
   case 1:
      {
         string* pobj;
         string xobj = TClassEdit::CleanType((const char*) G__int(libp->para[0]));
         pobj = new string(xobj);
         result7->obj.i = (long) ((void*) pobj);
         result7->ref = result7->obj.i;
         G__store_tempobject(*result7);
      }
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 103, (long) TClassEdit::IsDefAlloc((const char*) G__int(libp->para[0]), (const char*) G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 103, (long) TClassEdit::IsDefAlloc((const char*) G__int(libp->para[0]), (const char*) G__int(libp->para[1])
, (const char*) G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 103, (long) TClassEdit::IsDefComp((const char*) G__int(libp->para[0]), (const char*) G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 103, (long) TClassEdit::IsSTLBitset((const char*) G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 2:
      G__letint(result7, 105, (long) TClassEdit::IsSTLCont((const char*) G__int(libp->para[0]), (int) G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7, 105, (long) TClassEdit::IsSTLCont((const char*) G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 103, (long) TClassEdit::IsStdClass((const char*) G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_8(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 103, (long) TClassEdit::IsVectorBool((const char*) G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_9(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      {
         string* pobj;
         string xobj = TClassEdit::GetLong64_Name((const char*) G__int(libp->para[0]));
         pobj = new string(xobj);
         result7->obj.i = (long) ((void*) pobj);
         result7->ref = result7->obj.i;
         G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_10(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      {
         string* pobj;
         string xobj = TClassEdit::GetLong64_Name(*(string*) libp->para[0].ref);
         pobj = new string(xobj);
         result7->obj.i = (long) ((void*) pobj);
         result7->ref = result7->obj.i;
         G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_11(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 4:
      G__letint(result7, 105, (long) TClassEdit::GetSplit((const char*) G__int(libp->para[0]), *(vector<std::string>*) libp->para[1].ref
, *(int*) G__Intref(&libp->para[2]), (TClassEdit::EModType) G__int(libp->para[3])));
      break;
   case 3:
      G__letint(result7, 105, (long) TClassEdit::GetSplit((const char*) G__int(libp->para[0]), *(vector<std::string>*) libp->para[1].ref
, *(int*) G__Intref(&libp->para[2])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_12(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) TClassEdit::STLKind((const char*) G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_13(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) TClassEdit::STLArgs((int) G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_14(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 2:
      {
         string* pobj;
         string xobj = TClassEdit::ResolveTypedef((const char*) G__int(libp->para[0]), (bool) G__int(libp->para[1]));
         pobj = new string(xobj);
         result7->obj.i = (long) ((void*) pobj);
         result7->ref = result7->obj.i;
         G__store_tempobject(*result7);
      }
      break;
   case 1:
      {
         string* pobj;
         string xobj = TClassEdit::ResolveTypedef((const char*) G__int(libp->para[0]));
         pobj = new string(xobj);
         result7->obj.i = (long) ((void*) pobj);
         result7->ref = result7->obj.i;
         G__store_tempobject(*result7);
      }
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      {
         string* pobj;
         string xobj = TClassEdit::ShortType((const char*) G__int(libp->para[0]), (int) G__int(libp->para[1]));
         pobj = new string(xobj);
         result7->obj.i = (long) ((void*) pobj);
         result7->ref = result7->obj.i;
         G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__G__MetaUtils_108_0_16(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      {
         string* pobj;
         string xobj = TClassEdit::InsertStd((const char*) G__int(libp->para[0]));
         pobj = new string(xobj);
         result7->obj.i = (long) ((void*) pobj);
         result7->ref = result7->obj.i;
         G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* TClassEdit */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__MetaUtils {
 public:
  G__Sizep2memfuncG__MetaUtils(): p(&G__Sizep2memfuncG__MetaUtils::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__MetaUtils::*p)();
};

size_t G__get_sizep2memfuncG__MetaUtils()
{
  G__Sizep2memfuncG__MetaUtils a;
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
extern "C" void G__cpp_setup_inheritanceG__MetaUtils() {

   /* Setting up class inheritance */
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__MetaUtils() {

   /* Setting up typedef entry */
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__G__MetaUtilsLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__G__MetaUtilsLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__G__MetaUtilsLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__G__MetaUtilsLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__G__MetaUtilsLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__G__MetaUtilsLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__G__MetaUtilsLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__G__MetaUtilsLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__G__MetaUtilsLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__G__MetaUtilsLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<std::string>",117,G__get_linked_tagnum(&G__G__MetaUtilsLN_vectorlEstringcOallocatorlEstringgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<string>",117,G__get_linked_tagnum(&G__G__MetaUtilsLN_vectorlEstringcOallocatorlEstringgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__G__MetaUtilsLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__G__MetaUtilsLN_vectorlEstringcOallocatorlEstringgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__G__MetaUtilsLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__G__MetaUtilsLN_vectorlEstringcOallocatorlEstringgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<string>",117,G__get_linked_tagnum(&G__G__MetaUtilsLN_vectorlEstringcOallocatorlEstringgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TClassEdit */
static void G__setup_memvarTClassEdit(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEdit));
   {
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLEModType),-1,-2,1,G__FastAllocString(2048).Format("kNone=%lldLL",(long long)TClassEdit::kNone).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLEModType),-1,-2,1,G__FastAllocString(2048).Format("kDropTrailStar=%lldLL",(long long)TClassEdit::kDropTrailStar).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLEModType),-1,-2,1,G__FastAllocString(2048).Format("kDropDefaultAlloc=%lldLL",(long long)TClassEdit::kDropDefaultAlloc).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLEModType),-1,-2,1,G__FastAllocString(2048).Format("kDropAlloc=%lldLL",(long long)TClassEdit::kDropAlloc).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLEModType),-1,-2,1,G__FastAllocString(2048).Format("kInnerClass=%lldLL",(long long)TClassEdit::kInnerClass).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLEModType),-1,-2,1,G__FastAllocString(2048).Format("kInnedMostClass=%lldLL",(long long)TClassEdit::kInnedMostClass).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLEModType),-1,-2,1,G__FastAllocString(2048).Format("kDropStlDefault=%lldLL",(long long)TClassEdit::kDropStlDefault).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLEModType),-1,-2,1,G__FastAllocString(2048).Format("kDropComparator=%lldLL",(long long)TClassEdit::kDropComparator).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLEModType),-1,-2,1,G__FastAllocString(2048).Format("kDropAllDefault=%lldLL",(long long)TClassEdit::kDropAllDefault).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLEModType),-1,-2,1,G__FastAllocString(2048).Format("kLong64=%lldLL",(long long)TClassEdit::kLong64).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLEModType),-1,-2,1,G__FastAllocString(2048).Format("kDropStd=%lldLL",(long long)TClassEdit::kDropStd).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLESTLType),-1,-2,1,G__FastAllocString(2048).Format("kNotSTL=%lldLL",(long long)TClassEdit::kNotSTL).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLESTLType),-1,-2,1,G__FastAllocString(2048).Format("kVector=%lldLL",(long long)TClassEdit::kVector).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLESTLType),-1,-2,1,G__FastAllocString(2048).Format("kList=%lldLL",(long long)TClassEdit::kList).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLESTLType),-1,-2,1,G__FastAllocString(2048).Format("kDeque=%lldLL",(long long)TClassEdit::kDeque).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLESTLType),-1,-2,1,G__FastAllocString(2048).Format("kMap=%lldLL",(long long)TClassEdit::kMap).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLESTLType),-1,-2,1,G__FastAllocString(2048).Format("kMultiMap=%lldLL",(long long)TClassEdit::kMultiMap).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLESTLType),-1,-2,1,G__FastAllocString(2048).Format("kSet=%lldLL",(long long)TClassEdit::kSet).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLESTLType),-1,-2,1,G__FastAllocString(2048).Format("kMultiSet=%lldLL",(long long)TClassEdit::kMultiSet).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLESTLType),-1,-2,1,G__FastAllocString(2048).Format("kBitSet=%lldLL",(long long)TClassEdit::kBitSet).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEditcLcLESTLType),-1,-2,1,G__FastAllocString(2048).Format("kEnd=%lldLL",(long long)TClassEdit::kEnd).data(),0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__MetaUtils() {
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
static void G__setup_memfuncTClassEdit(void) {
   /* TClassEdit */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__MetaUtilsLN_TClassEdit));
   G__memfunc_setup("CleanType",901,G__G__MetaUtils_108_0_1, 117, G__get_linked_tagnum(&G__G__MetaUtilsLN_string), -1, 0, 3, 1, 1, 0, 
"C - - 10 - typeDesc i - - 0 '0' mode "
"C - - 12 '0' tail", (char*)NULL, (void*) G__func2void( (string (*)(const char*, int, const char**))(&TClassEdit::CleanType) ), 0);
   G__memfunc_setup("IsDefAlloc",950,G__G__MetaUtils_108_0_2, 103, -1, -1, 0, 2, 1, 1, 0, 
"C - - 10 - alloc C - - 10 - classname", (char*)NULL, (void*) G__func2void( (bool (*)(const char*, const char*))(&TClassEdit::IsDefAlloc) ), 0);
   G__memfunc_setup("IsDefAlloc",950,G__G__MetaUtils_108_0_3, 103, -1, -1, 0, 3, 1, 1, 0, 
"C - - 10 - alloc C - - 10 - keyclassname "
"C - - 10 - valueclassname", (char*)NULL, (void*) G__func2void( (bool (*)(const char*, const char*, const char*))(&TClassEdit::IsDefAlloc) ), 0);
   G__memfunc_setup("IsDefComp",858,G__G__MetaUtils_108_0_4, 103, -1, -1, 0, 2, 1, 1, 0, 
"C - - 10 - comp C - - 10 - classname", (char*)NULL, (void*) G__func2void( (bool (*)(const char*, const char*))(&TClassEdit::IsDefComp) ), 0);
   G__memfunc_setup("IsSTLBitset",1050,G__G__MetaUtils_108_0_5, 103, -1, -1, 0, 1, 1, 1, 0, "C - - 10 - type", (char*)NULL, (void*) G__func2void( (bool (*)(const char*))(&TClassEdit::IsSTLBitset) ), 0);
   G__memfunc_setup("IsSTLCont",835,G__G__MetaUtils_108_0_6, 105, -1, -1, 0, 2, 1, 1, 0, 
"C - - 10 - type i - - 0 '0' testAlloc", (char*)NULL, (void*) G__func2void( (int (*)(const char*, int))(&TClassEdit::IsSTLCont) ), 0);
   G__memfunc_setup("IsStdClass",989,G__G__MetaUtils_108_0_7, 103, -1, -1, 0, 1, 1, 1, 0, "C - - 10 - type", (char*)NULL, (void*) G__func2void( (bool (*)(const char*))(&TClassEdit::IsStdClass) ), 0);
   G__memfunc_setup("IsVectorBool",1211,G__G__MetaUtils_108_0_8, 103, -1, -1, 0, 1, 1, 1, 0, "C - - 10 - name", (char*)NULL, (void*) G__func2void( (bool (*)(const char*))(&TClassEdit::IsVectorBool) ), 0);
   G__memfunc_setup("GetLong64_Name",1274,G__G__MetaUtils_108_0_9, 117, G__get_linked_tagnum(&G__G__MetaUtilsLN_string), -1, 0, 1, 1, 1, 0, "C - - 10 - original", (char*)NULL, (void*) G__func2void( (string (*)(const char*))(&TClassEdit::GetLong64_Name) ), 0);
   G__memfunc_setup("GetLong64_Name",1274,G__G__MetaUtils_108_0_10, 117, G__get_linked_tagnum(&G__G__MetaUtilsLN_string), -1, 0, 1, 1, 1, 0, "u 'string' - 11 - original", (char*)NULL, (void*) G__func2void( (string (*)(const string&))(&TClassEdit::GetLong64_Name) ), 0);
   G__memfunc_setup("GetSplit",812,G__G__MetaUtils_108_0_11, 105, -1, -1, 0, 4, 1, 1, 0, 
"C - - 10 - type u 'vector<string,allocator<string> >' 'vector<std::string>' 1 - output "
"i - - 1 - nestedLoc i 'TClassEdit::EModType' - 0 'TClassEdit::kNone' mode", (char*)NULL, (void*) G__func2void( (int (*)(const char*, vector<std::string>&, int&, TClassEdit::EModType))(&TClassEdit::GetSplit) ), 0);
   G__memfunc_setup("STLKind",633,G__G__MetaUtils_108_0_12, 105, -1, -1, 0, 1, 1, 1, 0, "C - - 10 - type", "Kind of stl container", (void*) G__func2void( (int (*)(const char*))(&TClassEdit::STLKind) ), 0);
   G__memfunc_setup("STLArgs",640,G__G__MetaUtils_108_0_13, 105, -1, -1, 0, 1, 1, 1, 0, "i - - 0 - kind", "Min number of arguments without allocator", (void*) G__func2void( (int (*)(int))(&TClassEdit::STLArgs) ), 0);
   G__memfunc_setup("ResolveTypedef",1457,G__G__MetaUtils_108_0_14, 117, G__get_linked_tagnum(&G__G__MetaUtilsLN_string), -1, 0, 2, 1, 1, 0, 
"C - - 10 - tname g - - 0 'false' resolveAll", (char*)NULL, (void*) G__func2void( (string (*)(const char*, bool))(&TClassEdit::ResolveTypedef) ), 0);
   G__memfunc_setup("ShortType",946,G__G__MetaUtils_108_0_15, 117, G__get_linked_tagnum(&G__G__MetaUtilsLN_string), -1, 0, 2, 1, 1, 0, 
"C - - 10 - typeDesc i - - 0 - mode", (char*)NULL, (void*) G__func2void( (string (*)(const char*, int))(&TClassEdit::ShortType) ), 0);
   G__memfunc_setup("InsertStd",928,G__G__MetaUtils_108_0_16, 117, G__get_linked_tagnum(&G__G__MetaUtilsLN_string), -1, 0, 1, 1, 1, 0, "C - - 10 - tname", (char*)NULL, (void*) G__func2void( (string (*)(const char*))(&TClassEdit::InsertStd) ), 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__MetaUtils() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalG__MetaUtils() {
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
}

static void G__cpp_setup_func3() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcG__MetaUtils() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__MetaUtilsLN_string = { "string" , 99 , -1 };
G__linked_taginfo G__G__MetaUtilsLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__G__MetaUtilsLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__G__MetaUtilsLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__G__MetaUtilsLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__G__MetaUtilsLN_TClassEdit = { "TClassEdit" , 110 , -1 };
G__linked_taginfo G__G__MetaUtilsLN_TClassEditcLcLEModType = { "TClassEdit::EModType" , 101 , -1 };
G__linked_taginfo G__G__MetaUtilsLN_TClassEditcLcLESTLType = { "TClassEdit::ESTLType" , 101 , -1 };
G__linked_taginfo G__G__MetaUtilsLN_vectorlEstringcOallocatorlEstringgRsPgR = { "vector<string,allocator<string> >" , 99 , -1 };
G__linked_taginfo G__G__MetaUtilsLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<string,allocator<string> >::iterator>" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableG__MetaUtils() {
  G__G__MetaUtilsLN_string.tagnum = -1 ;
  G__G__MetaUtilsLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__G__MetaUtilsLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__G__MetaUtilsLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__G__MetaUtilsLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__G__MetaUtilsLN_TClassEdit.tagnum = -1 ;
  G__G__MetaUtilsLN_TClassEditcLcLEModType.tagnum = -1 ;
  G__G__MetaUtilsLN_TClassEditcLcLESTLType.tagnum = -1 ;
  G__G__MetaUtilsLN_vectorlEstringcOallocatorlEstringgRsPgR.tagnum = -1 ;
  G__G__MetaUtilsLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableG__MetaUtils() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__G__MetaUtilsLN_string);
   G__get_linked_tagnum_fwd(&G__G__MetaUtilsLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__G__MetaUtilsLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__G__MetaUtilsLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__G__MetaUtilsLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__G__MetaUtilsLN_TClassEdit),0,-1,0,(char*)NULL,G__setup_memvarTClassEdit,G__setup_memfuncTClassEdit);
   G__get_linked_tagnum_fwd(&G__G__MetaUtilsLN_TClassEditcLcLEModType);
   G__get_linked_tagnum_fwd(&G__G__MetaUtilsLN_TClassEditcLcLESTLType);
   G__get_linked_tagnum_fwd(&G__G__MetaUtilsLN_vectorlEstringcOallocatorlEstringgRsPgR);
   G__get_linked_tagnum_fwd(&G__G__MetaUtilsLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR);
}
extern "C" void G__cpp_setupG__MetaUtils(void) {
  G__check_setup_version(30051515,"G__cpp_setupG__MetaUtils()");
  G__set_cpp_environmentG__MetaUtils();
  G__cpp_setup_tagtableG__MetaUtils();

  G__cpp_setup_inheritanceG__MetaUtils();

  G__cpp_setup_typetableG__MetaUtils();

  G__cpp_setup_memvarG__MetaUtils();

  G__cpp_setup_memfuncG__MetaUtils();
  G__cpp_setup_globalG__MetaUtils();
  G__cpp_setup_funcG__MetaUtils();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__MetaUtils();
  return;
}
class G__cpp_setup_initG__MetaUtils {
  public:
    G__cpp_setup_initG__MetaUtils() { G__add_setup_func("G__MetaUtils",(G__incsetup)(&G__cpp_setupG__MetaUtils)); G__call_setup_funcs(); }
   ~G__cpp_setup_initG__MetaUtils() { G__remove_setup_func("G__MetaUtils"); }
};
G__cpp_setup_initG__MetaUtils G__cpp_setup_initializerG__MetaUtils;

