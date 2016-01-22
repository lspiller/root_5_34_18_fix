/********************************************************************
* graf3d/gl/src/G__GL.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error graf3d/gl/src/G__GL.h/C is only for compilation. Abort cint.
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
extern void G__cpp_setup_tagtableG__GL();
extern void G__cpp_setup_inheritanceG__GL();
extern void G__cpp_setup_typetableG__GL();
extern void G__cpp_setup_memvarG__GL();
extern void G__cpp_setup_globalG__GL();
extern void G__cpp_setup_memfuncG__GL();
extern void G__cpp_setup_funcG__GL();
extern void G__set_cpp_environmentG__GL();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "TArcBall.h"
#include "TF2GL.h"
#include "TGL5DDataSetEditor.h"
#include "TGL5D.h"
#include "TGLAdapter.h"
#include "TGLAnnotation.h"
#include "TGLAutoRotator.h"
#include "TGLAxis.h"
#include "TGLAxisPainter.h"
#include "TGLBoundingBox.h"
#include "TGLBoxPainter.h"
#include "TGLCameraGuide.h"
#include "TGLCamera.h"
#include "TGLCameraOverlay.h"
#include "TGLClip.h"
#include "TGLClipSetEditor.h"
#include "TGLContext.h"
#include "TGLCylinder.h"
#include "TGLEmbeddedViewer.h"
#include "TGLEventHandler.h"
#include "TGLFaceSet.h"
#include "TGLFBO.h"
#include "TGLFontManager.h"
#include "TGLFormat.h"
#include "TGLH2PolyPainter.h"
#include "TGLHistPainter.h"
#include "TGLLegoPainter.h"
#include "TGLLightSetEditor.h"
#include "TGLLightSet.h"
#include "TGLLockable.h"
#include "TGLLogicalShape.h"
#include "TGLManip.h"
#include "TGLManipSet.h"
#include "TGLObject.h"
#include "TGLOrthoCamera.h"
#include "TGLOutput.h"
#include "TGLOverlayButton.h"
#include "TGLOverlay.h"
#include "TGLPadPainter.h"
#include "TGLPadUtils.h"
#include "TGLParametricEquationGL.h"
#include "TGLParametric.h"
#include "TGLPerspectiveCamera.h"
#include "TGLPhysicalShape.h"
#include "TGLPlot3D.h"
#include "TGLPlotBox.h"
#include "TGLPlotCamera.h"
#include "TGLPlotPainter.h"
#include "TGLPolyLine.h"
#include "TGLPolyMarker.h"
#include "TGLPShapeObjEditor.h"
#include "TGLPShapeObj.h"
#include "TGLPShapeRef.h"
#include "TGLQuadric.h"
#include "TGLRnrCtx.h"
#include "TGLRotateManip.h"
#include "TGLSAFrame.h"
#include "TGLSAViewer.h"
#include "TGLScaleManip.h"
#include "TGLSceneBase.h"
#include "TGLScene.h"
#include "TGLSceneInfo.h"
#include "TGLScenePad.h"
#include "TGLSelectBuffer.h"
#include "TGLSelectRecord.h"
#include "TGLSphere.h"
#include "TGLStopwatch.h"
#include "TGLSurfacePainter.h"
#include "TGLText.h"
#include "TGLTF3Painter.h"
#include "TGLTH3Composition.h"
#include "TGLTransManip.h"
#include "TGLUtil.h"
#include "TGLViewerBase.h"
#include "TGLViewerEditor.h"
#include "TGLViewer.h"
#include "TGLVoxelPainter.h"
#include "TGLWidget.h"
#include "TH2GL.h"
#include "TH3GL.h"
#include "TPointSet3DGL.h"
#include "TX11GL.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__GLLN_TClass;
extern G__linked_taginfo G__G__GLLN_TBuffer;
extern G__linked_taginfo G__G__GLLN_TMemberInspector;
extern G__linked_taginfo G__G__GLLN_TObject;
extern G__linked_taginfo G__G__GLLN_TNamed;
extern G__linked_taginfo G__G__GLLN_TString;
extern G__linked_taginfo G__G__GLLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TList;
extern G__linked_taginfo G__G__GLLN_TObjArray;
extern G__linked_taginfo G__G__GLLN_TTimer;
extern G__linked_taginfo G__G__GLLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TPoint;
extern G__linked_taginfo G__G__GLLN_TArcBall;
extern G__linked_taginfo G__G__GLLN_TGLBoundingBox;
extern G__linked_taginfo G__G__GLLN_TGLCamera;
extern G__linked_taginfo G__G__GLLN_TAttMarker;
extern G__linked_taginfo G__G__GLLN_TAttLine;
extern G__linked_taginfo G__G__GLLN_GLUtesselator;
extern G__linked_taginfo G__G__GLLN_Rgl;
extern G__linked_taginfo G__G__GLLN_RglcLcLEOverlap;
extern G__linked_taginfo G__G__GLLN_EGLCoordType;
extern G__linked_taginfo G__G__GLLN_EGLPlotType;
extern G__linked_taginfo G__G__GLLN_TGLVector3;
extern G__linked_taginfo G__G__GLLN_TGLVertex3;
extern G__linked_taginfo G__G__GLLN_TGLLine3;
extern G__linked_taginfo G__G__GLLN_TGLRect;
extern G__linked_taginfo G__G__GLLN_TGLPlane;
extern G__linked_taginfo G__G__GLLN_vectorlETGLPlanecOallocatorlETGLPlanegRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlETGLPlanecOallocatorlETGLPlanegRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_pairlEboolcOTGLLine3gR;
extern G__linked_taginfo G__G__GLLN_pairlEboolcOTGLVertex3gR;
extern G__linked_taginfo G__G__GLLN_TGLMatrix;
extern G__linked_taginfo G__G__GLLN_TGLColor;
extern G__linked_taginfo G__G__GLLN_TGLColorSet;
extern G__linked_taginfo G__G__GLLN_TGLUtil;
extern G__linked_taginfo G__G__GLLN_TGLUtilcLcLTColorLocker;
extern G__linked_taginfo G__G__GLLN_TGLUtilcLcLTDrawQualityModifier;
extern G__linked_taginfo G__G__GLLN_TGLUtilcLcLTDrawQualityScaler;
extern G__linked_taginfo G__G__GLLN_TGLUtilcLcLELineHeadShape;
extern G__linked_taginfo G__G__GLLN_TGLUtilcLcLEAxesType;
extern G__linked_taginfo G__G__GLLN_vectorlEdoublecOallocatorlEdoublegRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEdoublecOallocatorlEdoublegRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGLSelectionBuffer;
extern G__linked_taginfo G__G__GLLN_vectorlEunsignedsPcharcOallocatorlEunsignedsPchargRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEunsignedsPcharcOallocatorlEunsignedsPchargRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGLPlotCoordinates;
extern G__linked_taginfo G__G__GLLN_TGLQuadric;
extern G__linked_taginfo G__G__GLLN_TAxis;
extern G__linked_taginfo G__G__GLLN_pairlEintcOintgR;
extern G__linked_taginfo G__G__GLLN_pairlEdoublecOdoublegR;
extern G__linked_taginfo G__G__GLLN_TGLLevelPalette;
extern G__linked_taginfo G__G__GLLN_TGLBoundingBoxcLcLEFace;
extern G__linked_taginfo G__G__GLLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TBuffer3D;
extern G__linked_taginfo G__G__GLLN_TContextMenu;
extern G__linked_taginfo G__G__GLLN_TGLPhysicalShape;
extern G__linked_taginfo G__G__GLLN_TGLRnrCtx;
extern G__linked_taginfo G__G__GLLN_TGLSelectRecord;
extern G__linked_taginfo G__G__GLLN_TGLViewer;
extern G__linked_taginfo G__G__GLLN_TGLSceneBase;
extern G__linked_taginfo G__G__GLLN_TGLScene;
extern G__linked_taginfo G__G__GLLN_TGLLogicalShape;
extern G__linked_taginfo G__G__GLLN_TGLLogicalShapecLcLELODAxes;
extern G__linked_taginfo G__G__GLLN_TMap;
extern G__linked_taginfo G__G__GLLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__G__GLLN_TGLObject;
extern G__linked_taginfo G__G__GLLN_Event_t;
extern G__linked_taginfo G__G__GLLN_TVirtualViewer3D;
extern G__linked_taginfo G__G__GLLN_TGLManip;
extern G__linked_taginfo G__G__GLLN_TVirtualGLPainter;
extern G__linked_taginfo G__G__GLLN_TVirtualGLManip;
extern G__linked_taginfo G__G__GLLN_TGLManager;
extern G__linked_taginfo G__G__GLLN_RglcLcLEFormatOptions;
extern G__linked_taginfo G__G__GLLN_TGLContext;
extern G__linked_taginfo G__G__GLLN_TGLFormat;
extern G__linked_taginfo G__G__GLLN_TGLPaintDevice;
extern G__linked_taginfo G__G__GLLN_TColor;
extern G__linked_taginfo G__G__GLLN_TGLPlotBox;
extern G__linked_taginfo G__G__GLLN_TGLPlotCamera;
extern G__linked_taginfo G__G__GLLN_TGL5DDataSet;
extern G__linked_taginfo G__G__GLLN_TH1;
extern G__linked_taginfo G__G__GLLN_TH3;
extern G__linked_taginfo G__G__GLLN_TF3;
extern G__linked_taginfo G__G__GLLN_TGLBoxCut;
extern G__linked_taginfo G__G__GLLN_TGLTH3Slice;
extern G__linked_taginfo G__G__GLLN_TGLTH3SlicecLcLESliceAxis;
extern G__linked_taginfo G__G__GLLN_TGL2DArraylEdoublegR;
extern G__linked_taginfo G__G__GLLN_TGLPlotPainter;
extern G__linked_taginfo G__G__GLLN_TGLPlotPaintercLcLESelectionBase;
extern G__linked_taginfo G__G__GLLN_TGLPlotPaintercLcLECutAxisID;
extern G__linked_taginfo G__G__GLLN_TH2Poly;
extern G__linked_taginfo G__G__GLLN_TVirtualPad;
extern G__linked_taginfo G__G__GLLN_TPolyMarker3D;
extern G__linked_taginfo G__G__GLLN_TGLPlot3D;
extern G__linked_taginfo G__G__GLLN_TF2;
extern G__linked_taginfo G__G__GLLN_TH2;
extern G__linked_taginfo G__G__GLLN_TF2GL;
extern G__linked_taginfo G__G__GLLN_TGObject;
extern G__linked_taginfo G__G__GLLN_TQObject;
extern G__linked_taginfo G__G__GLLN_TGWindow;
extern G__linked_taginfo G__G__GLLN_TAttFill;
extern G__linked_taginfo G__G__GLLN_TAttText;
extern G__linked_taginfo G__G__GLLN_pairlEunsignedsPintcOintgR;
extern G__linked_taginfo G__G__GLLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGFrame;
extern G__linked_taginfo G__G__GLLN_TGCompositeFrame;
extern G__linked_taginfo G__G__GLLN_TGLayoutHints;
extern G__linked_taginfo G__G__GLLN_TGTextButton;
extern G__linked_taginfo G__G__GLLN_TGVerticalFrame;
extern G__linked_taginfo G__G__GLLN_TGMainFrame;
extern G__linked_taginfo G__G__GLLN_TGGroupFrame;
extern G__linked_taginfo G__G__GLLN_TGToolTip;
extern G__linked_taginfo G__G__GLLN_TGedEditor;
extern G__linked_taginfo G__G__GLLN_TGedFrame;
extern G__linked_taginfo G__G__GLLN_TGNumberEntryField;
extern G__linked_taginfo G__G__GLLN_TGDoubleHSlider;
extern G__linked_taginfo G__G__GLLN_TGNumberEntry;
extern G__linked_taginfo G__G__GLLN_TGCheckButton;
extern G__linked_taginfo G__G__GLLN_TGColorSelect;
extern G__linked_taginfo G__G__GLLN_TGL5DPainter;
extern G__linked_taginfo G__G__GLLN_TGListBox;
extern G__linked_taginfo G__G__GLLN_TGHSlider;
extern G__linked_taginfo G__G__GLLN_TGL5DDataSetEditor;
extern G__linked_taginfo G__G__GLLN_TGL5DDataSetEditorcLcLTGL5DEditorPrivate;
extern G__linked_taginfo G__G__GLLN_TF1;
extern G__linked_taginfo G__G__GLLN_TVirtualHistPainter;
extern G__linked_taginfo G__G__GLLN_TGLParametricEquation;
extern G__linked_taginfo G__G__GLLN_TGLTH3Composition;
extern G__linked_taginfo G__G__GLLN_TGLHistPainter;
extern G__linked_taginfo G__G__GLLN_auto_ptrlETVirtualHistPaintergR;
extern G__linked_taginfo G__G__GLLN_auto_ptrlETGLPlotPaintergR;
extern G__linked_taginfo G__G__GLLN_TGLHistPaintercLcLPlotOption_t;
extern G__linked_taginfo G__G__GLLN_TAttAxis;
extern G__linked_taginfo G__G__GLLN_TArray;
extern G__linked_taginfo G__G__GLLN_TTree;
extern G__linked_taginfo G__G__GLLN_TGL5DDataSetcLcLEdefaults;
extern G__linked_taginfo G__G__GLLN_auto_ptrlETGLHistPaintergR;
extern G__linked_taginfo G__G__GLLN_TGLAdapter;
extern G__linked_taginfo G__G__GLLN_TGLOvlSelectRecord;
extern G__linked_taginfo G__G__GLLN_TGLOverlayElement;
extern G__linked_taginfo G__G__GLLN_TGLOverlayElementcLcLERole;
extern G__linked_taginfo G__G__GLLN_TGLOverlayElementcLcLEState;
extern G__linked_taginfo G__G__GLLN_TGLOverlayList;
extern G__linked_taginfo G__G__GLLN_listlETGLOverlayElementmUcOallocatorlETGLOverlayElementmUgRsPgR;
extern G__linked_taginfo G__G__GLLN_FTFont;
extern G__linked_taginfo G__G__GLLN_TGLFontManager;
extern G__linked_taginfo G__G__GLLN_TGLFont;
extern G__linked_taginfo G__G__GLLN_TGLFontcLcLEMode;
extern G__linked_taginfo G__G__GLLN_TGLFontcLcLETextAlignH_e;
extern G__linked_taginfo G__G__GLLN_TGLFontcLcLETextAlignV_e;
extern G__linked_taginfo G__G__GLLN_vectorlEintcOallocatorlEintgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_maplETGLFontcOintcOlesslETGLFontgRcOallocatorlEpairlEconstsPTGLFontcOintgRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_maplETGLFontcOintcOlesslETGLFontgRcOallocatorlEpairlEconstsPTGLFontcOintgRsPgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_listlEconstsPTGLFontmUcOallocatorlEconstsPTGLFontmUgRsPgR;
extern G__linked_taginfo G__G__GLLN_listlEconstsPTGLFontmUcOallocatorlEconstsPTGLFontmUgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_TGLViewerBase;
extern G__linked_taginfo G__G__GLLN_TGTextEdit;
extern G__linked_taginfo G__G__GLLN_TGLAnnotation;
extern G__linked_taginfo G__G__GLLN_TGLAnnotationcLcLEDrag;
extern G__linked_taginfo G__G__GLLN_TGLAnnotationcLcLENameStack;
extern G__linked_taginfo G__G__GLLN_TStopwatch;
extern G__linked_taginfo G__G__GLLN_TGLAutoRotator;
extern G__linked_taginfo G__G__GLLN_TGLText;
extern G__linked_taginfo G__G__GLLN_TGLAxis;
extern G__linked_taginfo G__G__GLLN_TPMERegexp;
extern G__linked_taginfo G__G__GLLN_TGLAxisPainter;
extern G__linked_taginfo G__G__GLLN_pairlEfloatcOfloatgR;
extern G__linked_taginfo G__G__GLLN_vectorlEpairlEfloatcOfloatgRcOallocatorlEpairlEfloatcOfloatgRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEpairlEfloatcOfloatgRcOallocatorlEpairlEfloatcOfloatgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_pairlEfloatcOintgR;
extern G__linked_taginfo G__G__GLLN_vectorlEpairlEfloatcOintgRcOallocatorlEpairlEfloatcOintgRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEpairlEfloatcOintgRcOallocatorlEpairlEfloatcOintgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGLAxisPainterBox;
extern G__linked_taginfo G__G__GLLN_GLUquadric;
extern G__linked_taginfo G__G__GLLN_TGLBoxPainter;
extern G__linked_taginfo G__G__GLLN_TGLBoxPaintercLcLEBoxType;
extern G__linked_taginfo G__G__GLLN_TGLCameraGuide;
extern G__linked_taginfo G__G__GLLN_TGLCameracLcLEFrustumPlane;
extern G__linked_taginfo G__G__GLLN_TGLCameraOverlay;
extern G__linked_taginfo G__G__GLLN_TGLCameraOverlaycLcLEMode;
extern G__linked_taginfo G__G__GLLN_TGLPShapeRef;
extern G__linked_taginfo G__G__GLLN_TGLPhysicalShapecLcLEManip;
extern G__linked_taginfo G__G__GLLN_TGLManipSet;
extern G__linked_taginfo G__G__GLLN_TGLClip;
extern G__linked_taginfo G__G__GLLN_TGLClipcLcLEMode;
extern G__linked_taginfo G__G__GLLN_TGLClipcLcLEType;
extern G__linked_taginfo G__G__GLLN_TGLClipPlane;
extern G__linked_taginfo G__G__GLLN_TGLClipBox;
extern G__linked_taginfo G__G__GLLN_TGLClipSet;
extern G__linked_taginfo G__G__GLLN_TGButton;
extern G__linked_taginfo G__G__GLLN_TGButtonGroup;
extern G__linked_taginfo G__G__GLLN_TGLClipSetSubEditor;
extern G__linked_taginfo G__G__GLLN_TGLClipSetEditor;
extern G__linked_taginfo G__G__GLLN_TGLContextIdentity;
extern G__linked_taginfo G__G__GLLN_TGLContextPrivate;
extern G__linked_taginfo G__G__GLLN_TGLWidget;
extern G__linked_taginfo G__G__GLLN_listlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_listlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_listlETGLContextmUcOallocatorlETGLContextmUgRsPgR;
extern G__linked_taginfo G__G__GLLN_TBuffer3DTube;
extern G__linked_taginfo G__G__GLLN_TGLCylinder;
extern G__linked_taginfo G__G__GLLN_TGLLockable;
extern G__linked_taginfo G__G__GLLN_TGLLockablecLcLELock;
extern G__linked_taginfo G__G__GLLN_TGLSceneInfo;
extern G__linked_taginfo G__G__GLLN_listlETGLSceneInfomUcOallocatorlETGLSceneInfomUgRsPgR;
extern G__linked_taginfo G__G__GLLN_listlETGLSceneInfomUcOallocatorlETGLSceneInfomUgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_vectorlETGLSceneInfomUcOallocatorlETGLSceneInfomUgRsPgR;
extern G__linked_taginfo G__G__GLLN_vectorlETGLSceneInfomUcOallocatorlETGLSceneInfomUgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlETGLSceneInfomUcOallocatorlETGLSceneInfomUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_vectorlETGLOverlayElementmUcOallocatorlETGLOverlayElementmUgRsPgR;
extern G__linked_taginfo G__G__GLLN_vectorlETGLOverlayElementmUcOallocatorlETGLOverlayElementmUgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlETGLOverlayElementmUcOallocatorlETGLOverlayElementmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGLStopwatch;
extern G__linked_taginfo G__G__GLLN_TGLSelectBuffer;
extern G__linked_taginfo G__G__GLLN_TGLRnrCtxcLcLEStyle;
extern G__linked_taginfo G__G__GLLN_TGLRnrCtxcLcLEPass;
extern G__linked_taginfo G__G__GLLN_TGLRnrCtxcLcLELODPresets;
extern G__linked_taginfo G__G__GLLN_TGLRnrCtxcLcLEShapeSelectionLevel;
extern G__linked_taginfo G__G__GLLN_TGLRnrCtxcLcLESelectabilityOfTransparents;
extern G__linked_taginfo G__G__GLLN_listlETGLColorSetmUcOallocatorlETGLColorSetmUgRsPgR;
extern G__linked_taginfo G__G__GLLN_TGLSelectRecordBase;
extern G__linked_taginfo G__G__GLLN_TGLSelectRecordcLcLESecSelResult;
extern G__linked_taginfo G__G__GLLN_TBuffer3DSphere;
extern G__linked_taginfo G__G__GLLN_TGLPerspectiveCamera;
extern G__linked_taginfo G__G__GLLN_TGLOrthoCamera;
extern G__linked_taginfo G__G__GLLN_TGLOrthoCameracLcLEType;
extern G__linked_taginfo G__G__GLLN_TGEventHandler;
extern G__linked_taginfo G__G__GLLN_TGLRedrawTimer;
extern G__linked_taginfo G__G__GLLN_TGLViewerEditor;
extern G__linked_taginfo G__G__GLLN_TGLLightSet;
extern G__linked_taginfo G__G__GLLN_TGLPShapeObj;
extern G__linked_taginfo G__G__GLLN_TGLOutput;
extern G__linked_taginfo G__G__GLLN_TGLEventHandler;
extern G__linked_taginfo G__G__GLLN_TGLViewercLcLECameraType;
extern G__linked_taginfo G__G__GLLN_TGLViewercLcLESecSelType;
extern G__linked_taginfo G__G__GLLN_TGLViewercLcLEPushAction;
extern G__linked_taginfo G__G__GLLN_TGLViewercLcLEDragAction;
extern G__linked_taginfo G__G__GLLN_TGLFaderHelper;
extern G__linked_taginfo G__G__GLLN_TGLEmbeddedViewer;
extern G__linked_taginfo G__G__GLLN_RootCsg;
extern G__linked_taginfo G__G__GLLN_RootCsgcLcLTBaseMesh;
extern G__linked_taginfo G__G__GLLN_TGLFaceSet;
extern G__linked_taginfo G__G__GLLN_TGLFBO;
extern G__linked_taginfo G__G__GLLN_TGLPadPainter;
extern G__linked_taginfo G__G__GLLN_RglcLcLPad;
extern G__linked_taginfo G__G__GLLN_RglcLcLPadcLcLPolygonStippleSet;
extern G__linked_taginfo G__G__GLLN_RglcLcLPadcLcLMarkerPainter;
extern G__linked_taginfo G__G__GLLN_vectorlETPointcOallocatorlETPointgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlETPointcOallocatorlETPointgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_listlERglcLcLPadcLcLMeshPatch_tcOallocatorlERglcLcLPadcLcLMeshPatch_tgRsPgR;
extern G__linked_taginfo G__G__GLLN_RglcLcLPadcLcLTesselator;
extern G__linked_taginfo G__G__GLLN_RglcLcLPadcLcLGLLimits;
extern G__linked_taginfo G__G__GLLN_TMultiGraph;
extern G__linked_taginfo G__G__GLLN_TGraph;
extern G__linked_taginfo G__G__GLLN_TGLH2PolyPainter;
extern G__linked_taginfo G__G__GLLN_listlElistlERglcLcLPadcLcLMeshPatch_tcOallocatorlERglcLcLPadcLcLMeshPatch_tgRsPgRcOallocatorlElistlERglcLcLPadcLcLMeshPatch_tcOallocatorlERglcLcLPadcLcLMeshPatch_tgRsPgRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_listlElistlERglcLcLPadcLcLMeshPatch_tcOallocatorlERglcLcLPadcLcLMeshPatch_tgRsPgRcOallocatorlElistlERglcLcLPadcLcLMeshPatch_tcOallocatorlERglcLcLPadcLcLMeshPatch_tgRsPgRsPgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_TGLLegoPainter;
extern G__linked_taginfo G__G__GLLN_TGLLegoPaintercLcLELegoType;
extern G__linked_taginfo G__G__GLLN_vectorlEpairlEdoublecOdoublegRcOallocatorlEpairlEdoublecOdoublegRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEpairlEdoublecOdoublegRcOallocatorlEpairlEdoublecOdoublegRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGLLightSetSubEditor;
extern G__linked_taginfo G__G__GLLN_TGLLightSetEditor;
extern G__linked_taginfo G__G__GLLN_TGLLightSetcLcLELight;
extern G__linked_taginfo G__G__GLLN_TGLManipSetcLcLEManip;
extern G__linked_taginfo G__G__GLLN_TGLOutputcLcLEFormat;
extern G__linked_taginfo G__G__GLLN_TGLOverlayButton;
extern G__linked_taginfo G__G__GLLN_TVirtualPadPainter;
extern G__linked_taginfo G__G__GLLN_TVirtualPadPaintercLcLEBoxMode;
extern G__linked_taginfo G__G__GLLN_TVirtualPadPaintercLcLETextMode;
extern G__linked_taginfo G__G__GLLN_TGLParametricEquationGL;
extern G__linked_taginfo G__G__GLLN_auto_ptrlETF2gR;
extern G__linked_taginfo G__G__GLLN_TGLParametricPlot;
extern G__linked_taginfo G__G__GLLN_TGLParametricPlotcLcLEMeshSize;
extern G__linked_taginfo G__G__GLLN_TGL2DArraylETGLParametricPlotcLcLVertex_tgR;
extern G__linked_taginfo G__G__GLLN_vectorlETGLParametricPlotcLcLVertex_tcOallocatorlETGLParametricPlotcLcLVertex_tgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlETGLParametricPlotcLcLVertex_tcOallocatorlETGLParametricPlotcLcLVertex_tgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGLPolyLine;
extern G__linked_taginfo G__G__GLLN_TGLPolyMarker;
extern G__linked_taginfo G__G__GLLN_TGRadioButton;
extern G__linked_taginfo G__G__GLLN_TGLPShapeObjEditor;
extern G__linked_taginfo G__G__GLLN_TGLPShapeObjEditorcLcLELightMode;
extern G__linked_taginfo G__G__GLLN_TGLRotateManip;
extern G__linked_taginfo G__G__GLLN_TGLSAViewer;
extern G__linked_taginfo G__G__GLLN_TGLSAFrame;
extern G__linked_taginfo G__G__GLLN_TGPopupMenu;
extern G__linked_taginfo G__G__GLLN_TGMenuBar;
extern G__linked_taginfo G__G__GLLN_TGLSAViewercLcLEGLSACommands;
extern G__linked_taginfo G__G__GLLN_TGLScaleManip;
extern G__linked_taginfo G__G__GLLN_listlETGLViewerBasemUcOallocatorlETGLViewerBasemUgRsPgR;
extern G__linked_taginfo G__G__GLLN_listlETGLViewerBasemUcOallocatorlETGLViewerBasemUgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_TGLSceneInfocLcLEClipTest;
extern G__linked_taginfo G__G__GLLN_maplETObjectmUcOTGLLogicalShapemUcOlesslETObjectmUgRcOallocatorlEpairlETObjectmUsPconstcOTGLLogicalShapemUgRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_pairlETObjectmUcOTGLLogicalShapemUgR;
extern G__linked_taginfo G__G__GLLN_maplETObjectmUcOTGLLogicalShapemUcOlesslETObjectmUgRcOallocatorlEpairlETObjectmUsPconstcOTGLLogicalShapemUgRsPgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_maplEunsignedsPintcOTGLPhysicalShapemUcOlesslEunsignedsPintgRcOallocatorlEpairlEconstsPunsignedsPintcOTGLPhysicalShapemUgRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_pairlEunsignedsPintcOTGLPhysicalShapemUgR;
extern G__linked_taginfo G__G__GLLN_maplEunsignedsPintcOTGLPhysicalShapemUcOlesslEunsignedsPintgRcOallocatorlEpairlEconstsPunsignedsPintcOTGLPhysicalShapemUgRsPgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_TGLScenecLcLDrawElement_t;
extern G__linked_taginfo G__G__GLLN_vectorlETGLScenecLcLDrawElement_tcOallocatorlETGLScenecLcLDrawElement_tgRsPgR;
extern G__linked_taginfo G__G__GLLN_vectorlETGLScenecLcLDrawElement_tcOallocatorlETGLScenecLcLDrawElement_tgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlETGLScenecLcLDrawElement_tcOallocatorlETGLScenecLcLDrawElement_tgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_vectorlETGLScenecLcLDrawElement_tmUcOallocatorlETGLScenecLcLDrawElement_tmUgRsPgR;
extern G__linked_taginfo G__G__GLLN_vectorlETGLScenecLcLDrawElement_tmUcOallocatorlETGLScenecLcLDrawElement_tmUgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlETGLScenecLcLDrawElement_tmUcOallocatorlETGLScenecLcLDrawElement_tmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_vectorlEconstsPTGLPhysicalShapemUcOallocatorlEconstsPTGLPhysicalShapemUgRsPgR;
extern G__linked_taginfo G__G__GLLN_vectorlEconstsPTGLPhysicalShapemUcOallocatorlEconstsPTGLPhysicalShapemUgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEconstsPTGLPhysicalShapemUcOallocatorlEconstsPTGLPhysicalShapemUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGLScenecLcLTSceneInfo;
extern G__linked_taginfo G__G__GLLN_maplETClassmUcOunsignedsPintcOlesslETClassmUgRcOallocatorlEpairlETClassmUsPconstcOunsignedsPintgRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_TGLScenePad;
extern G__linked_taginfo G__G__GLLN_pairlEunsignedsPintcORootCsgcLcLTBaseMeshmUgR;
extern G__linked_taginfo G__G__GLLN_vectorlEpairlEunsignedsPintcORootCsgcLcLTBaseMeshmUgRcOallocatorlEpairlEunsignedsPintcORootCsgcLcLTBaseMeshmUgRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcORootCsgcLcLTBaseMeshmUgRcOallocatorlEpairlEunsignedsPintcORootCsgcLcLTBaseMeshmUgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_pairlEunsignedsPintcOunsignedsPintmUgR;
extern G__linked_taginfo G__G__GLLN_vectorlEpairlEunsignedsPintcOunsignedsPintmUgRcOallocatorlEpairlEunsignedsPintcOunsignedsPintmUgRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOunsignedsPintmUgRcOallocatorlEpairlEunsignedsPintcOunsignedsPintmUgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGLSphere;
extern G__linked_taginfo G__G__GLLN_TRandom;
extern G__linked_taginfo G__G__GLLN_TGLSurfacePainter;
extern G__linked_taginfo G__G__GLLN_TGLSurfacePaintercLcLESurfaceType;
extern G__linked_taginfo G__G__GLLN_TGL2DArraylETGLVertex3gR;
extern G__linked_taginfo G__G__GLLN_vectorlETGLVertex3cOallocatorlETGLVertex3gRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlETGLVertex3cOallocatorlETGLVertex3gRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGL2DArraylEpairlETGLVector3cOTGLVector3gRsPgR;
extern G__linked_taginfo G__G__GLLN_vectorlEpairlETGLVector3cOTGLVector3gRcOallocatorlEpairlETGLVector3cOTGLVector3gRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEpairlETGLVector3cOTGLVector3gRcOallocatorlEpairlETGLVector3cOTGLVector3gRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGL2DArraylETGLVector3gR;
extern G__linked_taginfo G__G__GLLN_vectorlETGLVector3cOallocatorlETGLVector3gRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlETGLVector3cOallocatorlETGLVector3gRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGLSurfacePaintercLcLProjection_t;
extern G__linked_taginfo G__G__GLLN_listlETGLSurfacePaintercLcLProjection_tcOallocatorlETGLSurfacePaintercLcLProjection_tgRsPgR;
extern G__linked_taginfo G__G__GLLN_RglcLcLMc;
extern G__linked_taginfo G__G__GLLN_vectorlEfloatcOallocatorlEfloatgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEfloatcOallocatorlEfloatgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGLTF3Painter;
extern G__linked_taginfo G__G__GLLN_TGLTF3PaintercLcLETF3Style;
extern G__linked_taginfo G__G__GLLN_RglcLcLMccLcLTIsoMeshlEdoublegR;
extern G__linked_taginfo G__G__GLLN_TGLIsoPainter;
extern G__linked_taginfo G__G__GLLN_RglcLcLMccLcLTIsoMeshlEfloatgR;
extern G__linked_taginfo G__G__GLLN_listlERglcLcLMccLcLTIsoMeshlEfloatgRcOallocatorlERglcLcLMccLcLTIsoMeshlEfloatgRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_listlERglcLcLMccLcLTIsoMeshlEfloatgRcOallocatorlERglcLcLMccLcLTIsoMeshlEfloatgRsPgRsPgRcLcLiterator;
extern G__linked_taginfo G__G__GLLN_TArrayC;
extern G__linked_taginfo G__G__GLLN_TVectorTlEfloatgR;
extern G__linked_taginfo G__G__GLLN_TVectorTlEdoublegR;
extern G__linked_taginfo G__G__GLLN_TAtt3D;
extern G__linked_taginfo G__G__GLLN_TH3C;
extern G__linked_taginfo G__G__GLLN_TGLTH3CompositionPainter;
extern G__linked_taginfo G__G__GLLN_TGLTH3CompositioncLcLETH3BinShape;
extern G__linked_taginfo G__G__GLLN_pairlEconstsPTH3mUcOTGLTH3CompositioncLcLETH3BinShapegR;
extern G__linked_taginfo G__G__GLLN_vectorlEpairlEconstsPTH3mUcOTGLTH3CompositioncLcLETH3BinShapegRcOallocatorlEpairlEconstsPTH3mUcOTGLTH3CompositioncLcLETH3BinShapegRsPgRsPgR;
extern G__linked_taginfo G__G__GLLN_reverse_iteratorlEvectorlEpairlEconstsPTH3mUcOTGLTH3CompositioncLcLETH3BinShapegRcOallocatorlEpairlEconstsPTH3mUcOTGLTH3CompositioncLcLETH3BinShapegRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__GLLN_TGLTransManip;
extern G__linked_taginfo G__G__GLLN_TGComboBox;
extern G__linked_taginfo G__G__GLLN_TGTextEntry;
extern G__linked_taginfo G__G__GLLN_TGLVoxelPainter;
extern G__linked_taginfo G__G__GLLN_pairlEvoidmUcOvoidmUgR;
extern G__linked_taginfo G__G__GLLN_setlETGLContextmUcOlesslETGLContextmUgRcOallocatorlETGLContextmUgRsPgR;
extern G__linked_taginfo G__G__GLLN_TH2GL;
extern G__linked_taginfo G__G__GLLN_TH3GL;
extern G__linked_taginfo G__G__GLLN_TPointSet3DGL;
extern G__linked_taginfo G__G__GLLN_TX11GLManager;
extern G__linked_taginfo G__G__GLLN_TX11GLManagercLcLTX11GLImpl;
extern G__linked_taginfo G__G__GLLN_TX11GLManagercLcLTGLContext_t;

/* STUB derived class for protected member access */