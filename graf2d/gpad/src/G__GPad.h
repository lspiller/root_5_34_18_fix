/********************************************************************
* graf2d/gpad/src/G__GPad.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error graf2d/gpad/src/G__GPad.h/C is only for compilation. Abort cint.
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
extern void G__cpp_setup_tagtableG__GPad();
extern void G__cpp_setup_inheritanceG__GPad();
extern void G__cpp_setup_typetableG__GPad();
extern void G__cpp_setup_memvarG__GPad();
extern void G__cpp_setup_globalG__GPad();
extern void G__cpp_setup_memfuncG__GPad();
extern void G__cpp_setup_funcG__GPad();
extern void G__set_cpp_environmentG__GPad();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "TAttCanvas.h"
#include "TButton.h"
#include "TCanvas.h"
#include "TClassTree.h"
#include "TColorWheel.h"
#include "TControlBarButton.h"
#include "TControlBar.h"
#include "TCreatePrimitives.h"
#include "TDialogCanvas.h"
#include "TGroupButton.h"
#include "TInspectCanvas.h"
#include "TPad.h"
#include "TPadPainter.h"
#include "TPaveClass.h"
#include "TSliderBox.h"
#include "TSlider.h"
#include "TViewer3DPad.h"
#include "TView.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__GPadLN_TClass;
extern G__linked_taginfo G__G__GPadLN_TBuffer;
extern G__linked_taginfo G__G__GPadLN_TMemberInspector;
extern G__linked_taginfo G__G__GPadLN_TObject;
extern G__linked_taginfo G__G__GPadLN_TNamed;
extern G__linked_taginfo G__G__GPadLN_TString;
extern G__linked_taginfo G__G__GPadLN_basic_ostreamlEcharcOchar_traitslEchargRsPgR;
extern G__linked_taginfo G__G__GPadLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__G__GPadLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GPadLN_TList;
extern G__linked_taginfo G__G__GPadLN_TBrowser;
extern G__linked_taginfo G__G__GPadLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__G__GPadLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GPadLN_TAttCanvas;
extern G__linked_taginfo G__G__GPadLN_TAttPad;
extern G__linked_taginfo G__G__GPadLN_TAttLine;
extern G__linked_taginfo G__G__GPadLN_TAttFill;
extern G__linked_taginfo G__G__GPadLN_TAttText;
extern G__linked_taginfo G__G__GPadLN_ECursor;
extern G__linked_taginfo G__G__GPadLN_pairlEunsignedsPintcOintgR;
extern G__linked_taginfo G__G__GPadLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR;
extern G__linked_taginfo G__G__GPadLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GPadLN_EEventType;
extern G__linked_taginfo G__G__GPadLN_TQObject;
extern G__linked_taginfo G__G__GPadLN_TAxis;
extern G__linked_taginfo G__G__GPadLN_TObjLink;
extern G__linked_taginfo G__G__GPadLN_TView;
extern G__linked_taginfo G__G__GPadLN_TCanvas;
extern G__linked_taginfo G__G__GPadLN_TCanvasImp;
extern G__linked_taginfo G__G__GPadLN_TH1F;
extern G__linked_taginfo G__G__GPadLN_TFrame;
extern G__linked_taginfo G__G__GPadLN_TLegend;
extern G__linked_taginfo G__G__GPadLN_TBox;
extern G__linked_taginfo G__G__GPadLN_TVirtualViewer3D;
extern G__linked_taginfo G__G__GPadLN_TVirtualPadPainter;
extern G__linked_taginfo G__G__GPadLN_TVirtualPad;
extern G__linked_taginfo G__G__GPadLN_TPad;
extern G__linked_taginfo G__G__GPadLN_TPadcLcLdA;
extern G__linked_taginfo G__G__GPadLN_TButton;
extern G__linked_taginfo G__G__GPadLN_TContextMenu;
extern G__linked_taginfo G__G__GPadLN_TControlBar;
extern G__linked_taginfo G__G__GPadLN_TCanvascLcLdA;
extern G__linked_taginfo G__G__GPadLN_TObjString;
extern G__linked_taginfo G__G__GPadLN_TClassTree;
extern G__linked_taginfo G__G__GPadLN_TArc;
extern G__linked_taginfo G__G__GPadLN_TLine;
extern G__linked_taginfo G__G__GPadLN_TText;
extern G__linked_taginfo G__G__GPadLN_TGraph;
extern G__linked_taginfo G__G__GPadLN_TColorWheel;
extern G__linked_taginfo G__G__GPadLN_TControlBarButton;
extern G__linked_taginfo G__G__GPadLN_TControlBarButtoncLcLdA;
extern G__linked_taginfo G__G__GPadLN_TControlBarImp;
extern G__linked_taginfo G__G__GPadLN_TControlBarcLcLdA;
extern G__linked_taginfo G__G__GPadLN_TPave;
extern G__linked_taginfo G__G__GPadLN_TPaveLabel;
extern G__linked_taginfo G__G__GPadLN_TVectorTlEfloatgR;
extern G__linked_taginfo G__G__GPadLN_TVectorTlEdoublegR;
extern G__linked_taginfo G__G__GPadLN_TDialogCanvas;
extern G__linked_taginfo G__G__GPadLN_TGroupButton;
extern G__linked_taginfo G__G__GPadLN_TInspectCanvas;
extern G__linked_taginfo G__G__GPadLN_TVirtualPadPaintercLcLEBoxMode;
extern G__linked_taginfo G__G__GPadLN_TVirtualPadPaintercLcLETextMode;
extern G__linked_taginfo G__G__GPadLN_TPadPainter;
extern G__linked_taginfo G__G__GPadLN_TPaveClass;
extern G__linked_taginfo G__G__GPadLN_TWbox;
extern G__linked_taginfo G__G__GPadLN_TSlider;
extern G__linked_taginfo G__G__GPadLN_TSliderBox;
extern G__linked_taginfo G__G__GPadLN_TBuffer3D;
extern G__linked_taginfo G__G__GPadLN_TViewer3DPad;
extern G__linked_taginfo G__G__GPadLN_TSeqCollection;

/* STUB derived class for protected member access */
