/********************************************************************
* gui/guibuilder/src/G__GuiBld.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error gui/guibuilder/src/G__GuiBld.h/C is only for compilation. Abort cint.
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
extern void G__cpp_setup_tagtableG__GuiBld();
extern void G__cpp_setup_inheritanceG__GuiBld();
extern void G__cpp_setup_typetableG__GuiBld();
extern void G__cpp_setup_memvarG__GuiBld();
extern void G__cpp_setup_globalG__GuiBld();
extern void G__cpp_setup_memfuncG__GuiBld();
extern void G__cpp_setup_funcG__GuiBld();
extern void G__set_cpp_environmentG__GuiBld();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "TGuiBldDragManager.h"
#include "TGuiBldEditor.h"
#include "TGuiBldGeometryFrame.h"
#include "TGuiBldHintsButton.h"
#include "TGuiBldHintsEditor.h"
#include "TGuiBldNameFrame.h"
#include "TRootGuiBuilder.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__GuiBldLN_TClass;
extern G__linked_taginfo G__G__GuiBldLN_TBuffer;
extern G__linked_taginfo G__G__GuiBldLN_TMemberInspector;
extern G__linked_taginfo G__G__GuiBldLN_TObject;
extern G__linked_taginfo G__G__GuiBldLN_TString;
extern G__linked_taginfo G__G__GuiBldLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__G__GuiBldLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GuiBldLN_TList;
extern G__linked_taginfo G__G__GuiBldLN_TTimer;
extern G__linked_taginfo G__G__GuiBldLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__G__GuiBldLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GuiBldLN_Event_t;
extern G__linked_taginfo G__G__GuiBldLN_TGObject;
extern G__linked_taginfo G__G__GuiBldLN_TQObject;
extern G__linked_taginfo G__G__GuiBldLN_TGWindow;
extern G__linked_taginfo G__G__GuiBldLN_TGPicture;
extern G__linked_taginfo G__G__GuiBldLN_TGGC;
extern G__linked_taginfo G__G__GuiBldLN_pairlEunsignedsPintcOintgR;
extern G__linked_taginfo G__G__GuiBldLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR;
extern G__linked_taginfo G__G__GuiBldLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GuiBldLN_TGFrame;
extern G__linked_taginfo G__G__GuiBldLN_TGCompositeFrame;
extern G__linked_taginfo G__G__GuiBldLN_TGLayoutHints;
extern G__linked_taginfo G__G__GuiBldLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__G__GuiBldLN_TGTextButton;
extern G__linked_taginfo G__G__GuiBldLN_TGVerticalFrame;
extern G__linked_taginfo G__G__GuiBldLN_TGMainFrame;
extern G__linked_taginfo G__G__GuiBldLN_TGGroupFrame;
extern G__linked_taginfo G__G__GuiBldLN_TVirtualDragManager;
extern G__linked_taginfo G__G__GuiBldLN_TGuiBldDragManagerPimpl;
extern G__linked_taginfo G__G__GuiBldLN_TRootGuiBuilder;
extern G__linked_taginfo G__G__GuiBldLN_TGPopupMenu;
extern G__linked_taginfo G__G__GuiBldLN_TGuiBldEditor;
extern G__linked_taginfo G__G__GuiBldLN_TGColorDialog;
extern G__linked_taginfo G__G__GuiBldLN_TGFontDialog;
extern G__linked_taginfo G__G__GuiBldLN_TGPictureButton;
extern G__linked_taginfo G__G__GuiBldLN_TGCanvas;
extern G__linked_taginfo G__G__GuiBldLN_TGComboBox;
extern G__linked_taginfo G__G__GuiBldLN_TGLabel;
extern G__linked_taginfo G__G__GuiBldLN_TGListBox;
extern G__linked_taginfo G__G__GuiBldLN_TGProgressBar;
extern G__linked_taginfo G__G__GuiBldLN_TGTextEntry;
extern G__linked_taginfo G__G__GuiBldLN_TGIcon;
extern G__linked_taginfo G__G__GuiBldLN_TGuiBldDragManager;
extern G__linked_taginfo G__G__GuiBldLN_TGuiBldGeometryFrame;
extern G__linked_taginfo G__G__GuiBldLN_TGWidget;
extern G__linked_taginfo G__G__GuiBldLN_TGButton;
extern G__linked_taginfo G__G__GuiBldLN_TGCheckButton;
extern G__linked_taginfo G__G__GuiBldLN_TGNumberEntry;
extern G__linked_taginfo G__G__GuiBldLN_TGuiBldHintsEditor;
extern G__linked_taginfo G__G__GuiBldLN_TGuiBldNameFrame;
extern G__linked_taginfo G__G__GuiBldLN_TGuiBldBorderFrame;
extern G__linked_taginfo G__G__GuiBldLN_TGTab;
extern G__linked_taginfo G__G__GuiBldLN_TGuiBldHintsButton;
extern G__linked_taginfo G__G__GuiBldLN_TGuiBldHintsManager;
extern G__linked_taginfo G__G__GuiBldLN_TGListTree;
extern G__linked_taginfo G__G__GuiBldLN_TGListTreeItem;
extern G__linked_taginfo G__G__GuiBldLN_TGuiBldAction;
extern G__linked_taginfo G__G__GuiBldLN_TGuiBuilder;
extern G__linked_taginfo G__G__GuiBldLN_TGShutter;
extern G__linked_taginfo G__G__GuiBldLN_TGMdiMainFrame;
extern G__linked_taginfo G__G__GuiBldLN_TGDockableFrame;
extern G__linked_taginfo G__G__GuiBldLN_TGMdiMenuBar;
extern G__linked_taginfo G__G__GuiBldLN_TGStatusBar;
extern G__linked_taginfo G__G__GuiBldLN_TGToolBar;
extern G__linked_taginfo G__G__GuiBldLN_TGMdiFrame;
extern G__linked_taginfo G__G__GuiBldLN_TImage;

/* STUB derived class for protected member access */
