/********************************************************************
* cint/reflex/src/G__Reflex.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error cint/reflex/src/G__Reflex.h/C is only for compilation. Abort cint.
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
extern void G__cpp_setup_tagtableG__Reflex();
extern void G__cpp_setup_inheritanceG__Reflex();
extern void G__cpp_setup_typetableG__Reflex();
extern void G__cpp_setup_memvarG__Reflex();
extern void G__cpp_setup_globalG__Reflex();
extern void G__cpp_setup_memfuncG__Reflex();
extern void G__cpp_setup_funcG__Reflex();
extern void G__set_cpp_environmentG__Reflex();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "Reflex/Any.h"
#include "Reflex/Base.h"
#include "Reflex/Callback.h"
#include "Reflex/Kernel.h"
#include "Reflex/Member.h"
#include "Reflex/MemberTemplate.h"
#include "Reflex/Object.h"
#include "Reflex/PluginService.h"
#include "Reflex/PropertyList.h"
#include "Reflex/Scope.h"
#include "Reflex/Tools.h"
#include "Reflex/Type.h"
#include "Reflex/TypeTemplate.h"
#include "Reflex/ValueObject.h"
#include "Reflex/Builder/ClassBuilder.h"
#include "Reflex/Builder/CollectionProxy.h"
#include "Reflex/Builder/DictSelection.h"
#include "Reflex/Builder/EnumBuilder.h"
#include "Reflex/Builder/FunctionBuilder.h"
#include "Reflex/Builder/GenreflexMemberBuilder.h"
#include "Reflex/Builder/NamespaceBuilder.h"
#include "Reflex/Builder/NewDelFunctions.h"
#include "Reflex/Builder/OnDemandBuilderForScope.h"
#include "Reflex/Builder/OnDemandBuilder.h"
#include "Reflex/Builder/TypeBuilder.h"
#include "Reflex/Builder/TypedefBuilder.h"
#include "Reflex/Builder/UnionBuilder.h"
#include "Reflex/Builder/VariableBuilder.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__ReflexLN_type_info;
extern G__linked_taginfo G__G__ReflexLN_basic_ostreamlEcharcOchar_traitslEchargRsPgR;
extern G__linked_taginfo G__G__ReflexLN_string;
extern G__linked_taginfo G__G__ReflexLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_exception;
extern G__linked_taginfo G__G__ReflexLN_Reflex;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLAny;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLType;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLBase;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLScope;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLObject;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLMember;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLPropertyList;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLTypeTemplate;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLMemberTemplate;
extern G__linked_taginfo G__G__ReflexLN_vectorlEstringcOallocatorlEstringgRsPgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEstringcOallocatorlEstringgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLTypecOallocatorlEReflexcLcLTypegRsPgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLTypecOallocatorlEReflexcLcLTypegRsPgRcLcLiterator;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEReflexcLcLTypecOallocatorlEReflexcLcLTypegRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLBasecOallocatorlEReflexcLcLBasegRsPgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLBasecOallocatorlEReflexcLcLBasegRsPgRcLcLiterator;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEReflexcLcLBasecOallocatorlEReflexcLcLBasegRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLScopecOallocatorlEReflexcLcLScopegRsPgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLScopecOallocatorlEReflexcLcLScopegRsPgRcLcLiterator;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEReflexcLcLScopecOallocatorlEReflexcLcLScopegRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLObjectcOallocatorlEReflexcLcLObjectgRsPgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLObjectcOallocatorlEReflexcLcLObjectgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEReflexcLcLObjectcOallocatorlEReflexcLcLObjectgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLMembercOallocatorlEReflexcLcLMembergRsPgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLMembercOallocatorlEReflexcLcLMembergRsPgRcLcLiterator;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEReflexcLcLMembercOallocatorlEReflexcLcLMembergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLTypeTemplatecOallocatorlEReflexcLcLTypeTemplategRsPgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLTypeTemplatecOallocatorlEReflexcLcLTypeTemplategRsPgRcLcLiterator;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEReflexcLcLTypeTemplatecOallocatorlEReflexcLcLTypeTemplategRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLMemberTemplatecOallocatorlEReflexcLcLMemberTemplategRsPgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLMemberTemplatecOallocatorlEReflexcLcLMemberTemplategRsPgRcLcLiterator;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEReflexcLcLMemberTemplatecOallocatorlEReflexcLcLMemberTemplategRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLDummy;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLInstance;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLInstancecLcLEState;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLENTITY_DESCRIPTION;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLENTITY_HANDLING;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLTYPE;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLREPRESTYPE;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLEMEMBERQUERY;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLEDELAYEDLOADSETTING;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLNullType;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLUnknownType;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLProtectedClass;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLProtectedEnum;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLProtectedStruct;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLProtectedUnion;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLPrivateClass;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLPrivateEnum;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLPrivateStruct;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLPrivateUnion;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLUnnamedClass;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLUnnamedEnum;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLUnnamedNamespace;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLUnnamedStruct;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLUnnamedUnion;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLRuntimeError;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLAnycLcLPlaceholder;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLTypeBase;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLTypeName;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLDictionaryGenerator;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLTypecLcLTYPE_MODIFICATION;
extern G__linked_taginfo G__G__ReflexLN_vectorlEvoidmUcOallocatorlEvoidmUgRsPgR;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEvoidmUcOallocatorlEvoidmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLScopeBase;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLScopeName;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLPropertyListImpl;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLAnycOallocatorlEReflexcLcLAnygRsPgR;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEReflexcLcLAnycOallocatorlEReflexcLcLAnygRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLClass;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLOwnedMembercOallocatorlEReflexcLcLOwnedMembergRsPgR;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEReflexcLcLOwnedMembercOallocatorlEReflexcLcLOwnedMembergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLOwnedMemberTemplatecOallocatorlEReflexcLcLOwnedMemberTemplategRsPgR;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEReflexcLcLOwnedMemberTemplatecOallocatorlEReflexcLcLOwnedMemberTemplategRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLTypeTemplateName;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLICallback;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLMemberBase;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLEFUNDAMENTALTYPE;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLTools;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLMemberTemplateName;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLNamespaceBuilder;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLLiteral;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLFunctionBuilder;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLFunctionBuilderImpl;
extern G__linked_taginfo G__G__ReflexLN_vectorlEReflexcLcLValueObjectcOallocatorlEReflexcLcLValueObjectgRsPgR;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEReflexcLcLValueObjectcOallocatorlEReflexcLcLValueObjectgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLClassBuilder;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLOnDemandBuilderForScope;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLClassBuilderImpl;
extern G__linked_taginfo G__G__ReflexLN_vectorlEboolcOallocatorlEboolgRsPgR;
extern G__linked_taginfo G__G__ReflexLN_reverse_iteratorlEvectorlEboolcOallocatorlEboolgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLCollFuncTable;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLSelection;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLSelectioncLcLNO_SELF_AUTOSELECT;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLSelectioncLcLTRANSIENT;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLSelectioncLcLAUTOSELECT;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLSelectioncLcLNODEFAULT;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLEnum;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLEnumBuilder;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLNewDelFunctions;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLTypedefBuilderImpl;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLUnion;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLUnionBuilderImpl;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLVariableBuilder;
extern G__linked_taginfo G__G__ReflexLN_ReflexcLcLVariableBuilderImpl;

/* STUB derived class for protected member access */
