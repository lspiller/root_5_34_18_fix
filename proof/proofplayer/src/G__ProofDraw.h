/********************************************************************
* proof/proofplayer/src/G__ProofDraw.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error proof/proofplayer/src/G__ProofDraw.h/C is only for compilation. Abort cint.
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
extern void G__cpp_setup_tagtableG__ProofDraw();
extern void G__cpp_setup_inheritanceG__ProofDraw();
extern void G__cpp_setup_typetableG__ProofDraw();
extern void G__cpp_setup_memvarG__ProofDraw();
extern void G__cpp_setup_globalG__ProofDraw();
extern void G__cpp_setup_memfuncG__ProofDraw();
extern void G__cpp_setup_funcG__ProofDraw();
extern void G__set_cpp_environmentG__ProofDraw();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "TProofDraw.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__ProofDrawLN_TClass;
extern G__linked_taginfo G__G__ProofDrawLN_TBuffer;
extern G__linked_taginfo G__G__ProofDrawLN_TMemberInspector;
extern G__linked_taginfo G__G__ProofDrawLN_TObject;
extern G__linked_taginfo G__G__ProofDrawLN_TNamed;
extern G__linked_taginfo G__G__ProofDrawLN_TCollection;
extern G__linked_taginfo G__G__ProofDrawLN_TString;
extern G__linked_taginfo G__G__ProofDrawLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__G__ProofDrawLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ProofDrawLN_TList;
extern G__linked_taginfo G__G__ProofDrawLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__G__ProofDrawLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ProofDrawLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__G__ProofDrawLN_TTree;
extern G__linked_taginfo G__G__ProofDrawLN_TSelector;
extern G__linked_taginfo G__G__ProofDrawLN_TTreeDrawArgsParser;
extern G__linked_taginfo G__G__ProofDrawLN_TTreeFormulaManager;
extern G__linked_taginfo G__G__ProofDrawLN_TTreeFormula;
extern G__linked_taginfo G__G__ProofDrawLN_TStatus;
extern G__linked_taginfo G__G__ProofDrawLN_TH1;
extern G__linked_taginfo G__G__ProofDrawLN_TEventList;
extern G__linked_taginfo G__G__ProofDrawLN_TEntryList;
extern G__linked_taginfo G__G__ProofDrawLN_TProfile;
extern G__linked_taginfo G__G__ProofDrawLN_TProfile2D;
extern G__linked_taginfo G__G__ProofDrawLN_TGraph;
extern G__linked_taginfo G__G__ProofDrawLN_TPolyMarker3D;
extern G__linked_taginfo G__G__ProofDrawLN_TProofDraw;
extern G__linked_taginfo G__G__ProofDrawLN_TProofDrawcLcLdA;
extern G__linked_taginfo G__G__ProofDrawLN_TProofDrawHist;
extern G__linked_taginfo G__G__ProofDrawLN_TProofDrawEventList;
extern G__linked_taginfo G__G__ProofDrawLN_TProofDrawEntryList;
extern G__linked_taginfo G__G__ProofDrawLN_TProofDrawProfile;
extern G__linked_taginfo G__G__ProofDrawLN_TProofDrawProfile2D;
extern G__linked_taginfo G__G__ProofDrawLN_TProofDrawGraph;
extern G__linked_taginfo G__G__ProofDrawLN_TProofDrawPolyMarker3D;
extern G__linked_taginfo G__G__ProofDrawLN_TProofDrawListOfGraphs;
extern G__linked_taginfo G__G__ProofDrawLN_TProofDrawListOfGraphscLcLPoint3D_t;
extern G__linked_taginfo G__G__ProofDrawLN_TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR;
extern G__linked_taginfo G__G__ProofDrawLN_vectorlETProofDrawListOfGraphscLcLPoint3D_tcOallocatorlETProofDrawListOfGraphscLcLPoint3D_tgRsPgR;
extern G__linked_taginfo G__G__ProofDrawLN_vectorlETProofDrawListOfGraphscLcLPoint3D_tcOallocatorlETProofDrawListOfGraphscLcLPoint3D_tgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__ProofDrawLN_reverse_iteratorlEvectorlETProofDrawListOfGraphscLcLPoint3D_tcOallocatorlETProofDrawListOfGraphscLcLPoint3D_tgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__ProofDrawLN_TProofDrawListOfPolyMarkers3D;
extern G__linked_taginfo G__G__ProofDrawLN_TProofDrawListOfPolyMarkers3DcLcLPoint4D_t;
extern G__linked_taginfo G__G__ProofDrawLN_TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR;
extern G__linked_taginfo G__G__ProofDrawLN_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tcOallocatorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgRsPgR;
extern G__linked_taginfo G__G__ProofDrawLN_vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tcOallocatorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__ProofDrawLN_reverse_iteratorlEvectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tcOallocatorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgRsPgRcLcLiteratorgR;

/* STUB derived class for protected member access */
typedef TProofVectorContainer<TProofDrawListOfGraphs::Point3D_t> G__TProofVectorContainerlETProofDrawListOfGraphscLcLPoint3D_tgR;
typedef vector<TProofDrawListOfGraphs::Point3D_t,allocator<TProofDrawListOfGraphs::Point3D_t> > G__vectorlETProofDrawListOfGraphscLcLPoint3D_tcOallocatorlETProofDrawListOfGraphscLcLPoint3D_tgRsPgR;
typedef TProofVectorContainer<TProofDrawListOfPolyMarkers3D::Point4D_t> G__TProofVectorContainerlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgR;
typedef vector<TProofDrawListOfPolyMarkers3D::Point4D_t,allocator<TProofDrawListOfPolyMarkers3D::Point4D_t> > G__vectorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tcOallocatorlETProofDrawListOfPolyMarkers3DcLcLPoint4D_tgRsPgR;