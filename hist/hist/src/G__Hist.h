/********************************************************************
* hist/hist/src/G__Hist.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error hist/hist/src/G__Hist.h/C is only for compilation. Abort cint.
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
extern void G__cpp_setup_tagtableG__Hist();
extern void G__cpp_setup_inheritanceG__Hist();
extern void G__cpp_setup_typetableG__Hist();
extern void G__cpp_setup_memvarG__Hist();
extern void G__cpp_setup_globalG__Hist();
extern void G__cpp_setup_memfuncG__Hist();
extern void G__cpp_setup_funcG__Hist();
extern void G__set_cpp_environmentG__Hist();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "Foption.h"
#include "HFitInterface.h"
#include "TAxis.h"
#include "TBackCompFitter.h"
#include "TBinomialEfficiencyFitter.h"
#include "TConfidenceLevel.h"
#include "TEfficiency.h"
#include "TF12.h"
#include "TF1.h"
#include "TF2.h"
#include "TF3.h"
#include "TFitResult.h"
#include "TFitResultPtr.h"
#include "TFormula.h"
#include "TFormulaPrimitive.h"
#include "TFractionFitter.h"
#include "TGraph2DErrors.h"
#include "TGraph2D.h"
#include "TGraphAsymmErrors.h"
#include "TGraphBentErrors.h"
#include "TGraphDelaunay.h"
#include "TGraphErrors.h"
#include "TGraph.h"
#include "TGraphSmooth.h"
#include "TGraphTime.h"
#include "TH1C.h"
#include "TH1D.h"
#include "TH1F.h"
#include "TH1.h"
#include "TH1I.h"
#include "TH1K.h"
#include "TH1S.h"
#include "TH2C.h"
#include "TH2D.h"
#include "TH2F.h"
#include "TH2.h"
#include "TH2I.h"
#include "TH2Poly.h"
#include "TH2S.h"
#include "TH3C.h"
#include "TH3D.h"
#include "TH3F.h"
#include "TH3.h"
#include "TH3I.h"
#include "TH3S.h"
#include "THLimitsFinder.h"
#include "THnBase.h"
#include "THn.h"
#include "THnSparse.h"
#include "THnSparse_Internal.h"
#include "THStack.h"
#include "TKDE.h"
#include "TLimitDataSource.h"
#include "TLimit.h"
#include "TMultiDimFit.h"
#include "TMultiGraph.h"
#include "TNDArray.h"
#include "TPolyMarker.h"
#include "TPrincipal.h"
#include "TProfile2D.h"
#include "TProfile3D.h"
#include "TProfile.h"
#include "TSpline.h"
#include "TSVDUnfold.h"
#include "TUnfold.h"
#include "TUnfoldSys.h"
#include "TVirtualGraphPainter.h"
#include "TVirtualHistPainter.h"
#include "Math/WrappedMultiTF1.h"
#include "Math/WrappedTF1.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__HistLN_TClass;
extern G__linked_taginfo G__G__HistLN_TBuffer;
extern G__linked_taginfo G__G__HistLN_TDirectory;
extern G__linked_taginfo G__G__HistLN_TMemberInspector;
extern G__linked_taginfo G__G__HistLN_TObject;
extern G__linked_taginfo G__G__HistLN_TNamed;
extern G__linked_taginfo G__G__HistLN_TCollection;
extern G__linked_taginfo G__G__HistLN_TFileMergeInfo;
extern G__linked_taginfo G__G__HistLN_TString;
extern G__linked_taginfo G__G__HistLN_ROOT;
extern G__linked_taginfo G__G__HistLN_basic_ostreamlEcharcOchar_traitslEchargRsPgR;
extern G__linked_taginfo G__G__HistLN_string;
extern G__linked_taginfo G__G__HistLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__G__HistLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__HistLN_TList;
extern G__linked_taginfo G__G__HistLN_TBrowser;
extern G__linked_taginfo G__G__HistLN_TObjArray;
extern G__linked_taginfo G__G__HistLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__G__HistLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__HistLN_Foption_t;
extern G__linked_taginfo G__G__HistLN_TH1;
extern G__linked_taginfo G__G__HistLN_THnBase;
extern G__linked_taginfo G__G__HistLN_TF1;
extern G__linked_taginfo G__G__HistLN_TF2;
extern G__linked_taginfo G__G__HistLN_TGraph;
extern G__linked_taginfo G__G__HistLN_TGraphErrors;
extern G__linked_taginfo G__G__HistLN_TGraph2D;
extern G__linked_taginfo G__G__HistLN_TMultiGraph;
extern G__linked_taginfo G__G__HistLN_TFitResult;
extern G__linked_taginfo G__G__HistLN_TFitResultPtr;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMath;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLMinimizerOptions;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLFit;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLFitcLcLFitResult;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLFitcLcLBinData;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLFitcLcLUnBinData;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLFitcLcLSparseData;
extern G__linked_taginfo G__G__HistLN_TAttAxis;
extern G__linked_taginfo G__G__HistLN_TArray;
extern G__linked_taginfo G__G__HistLN_TArrayD;
extern G__linked_taginfo G__G__HistLN_THashList;
extern G__linked_taginfo G__G__HistLN_TAxis;
extern G__linked_taginfo G__G__HistLN_TAxiscLcLdA;
extern G__linked_taginfo G__G__HistLN_TMethodCall;
extern G__linked_taginfo G__G__HistLN_TVirtualFitter;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLIBaseFunctionOneDim;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLIBaseFunctionMultiDim;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLIParametricFunctionOneDim;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLIParametricGradFunctionOneDim;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLIParametricFunctionMultiDim;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLIParametricGradFunctionMultiDim;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLMinimizer;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLFitcLcLFitConfig;
extern G__linked_taginfo G__G__HistLN_vectorlEROOTcLcLFitcLcLParameterSettingscOallocatorlEROOTcLcLFitcLcLParameterSettingsgRsPgR;
extern G__linked_taginfo G__G__HistLN_reverse_iteratorlEvectorlEROOTcLcLFitcLcLParameterSettingscOallocatorlEROOTcLcLFitcLcLParameterSettingsgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__HistLN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR;
extern G__linked_taginfo G__G__HistLN_reverse_iteratorlEvectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__HistLN_vectorlEdoublecOallocatorlEdoublegRsPgR;
extern G__linked_taginfo G__G__HistLN_reverse_iteratorlEvectorlEdoublecOallocatorlEdoublegRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__HistLN_pairlEdoublecOdoublegR;
extern G__linked_taginfo G__G__HistLN_maplEunsignedsPintcOpairlEdoublecOdoublegRcOlesslEunsignedsPintgRcOallocatorlEpairlEconstsPunsignedsPintcOpairlEdoublecOdoublegRsPgRsPgRsPgR;
extern G__linked_taginfo G__G__HistLN_vectorlEstringcOallocatorlEstringgRsPgR;
extern G__linked_taginfo G__G__HistLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimgR;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR;
extern G__linked_taginfo G__G__HistLN_auto_ptrlEROOTcLcLMathcLcLIBaseFunctionMultiDimgR;
extern G__linked_taginfo G__G__HistLN_vectorlEpairlEdoublecOdoublegRcOallocatorlEpairlEdoublecOdoublegRsPgRsPgR;
extern G__linked_taginfo G__G__HistLN_reverse_iteratorlEvectorlEpairlEdoublecOdoublegRcOallocatorlEpairlEdoublecOdoublegRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__HistLN_vectorlEvectorlEpairlEdoublecOdoublegRcOallocatorlEpairlEdoublecOdoublegRsPgRsPgRcOallocatorlEvectorlEpairlEdoublecOdoublegRcOallocatorlEpairlEdoublecOdoublegRsPgRsPgRsPgRsPgR;
extern G__linked_taginfo G__G__HistLN_reverse_iteratorlEvectorlEvectorlEpairlEdoublecOdoublegRcOallocatorlEpairlEdoublecOdoublegRsPgRsPgRcOallocatorlEvectorlEpairlEdoublecOdoublegRcOallocatorlEpairlEdoublecOdoublegRsPgRsPgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLFitcLcLFitData;
extern G__linked_taginfo G__G__HistLN_vectorlEconstsPdoublemUcOallocatorlEconstsPdoublemUgRsPgR;
extern G__linked_taginfo G__G__HistLN_reverse_iteratorlEvectorlEconstsPdoublemUcOallocatorlEconstsPdoublemUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__HistLN_TBackCompFitter;
extern G__linked_taginfo G__G__HistLN_auto_ptrlEROOTcLcLFitcLcLFittergR;
extern G__linked_taginfo G__G__HistLN_auto_ptrlEROOTcLcLFitcLcLFitDatagR;
extern G__linked_taginfo G__G__HistLN_TBackCompFittercLcLdA;
extern G__linked_taginfo G__G__HistLN_TBinomialEfficiencyFitter;
extern G__linked_taginfo G__G__HistLN_TConfidenceLevel;
extern G__linked_taginfo G__G__HistLN_TAttLine;
extern G__linked_taginfo G__G__HistLN_TAttFill;
extern G__linked_taginfo G__G__HistLN_TAttMarker;
extern G__linked_taginfo G__G__HistLN_TGraphAsymmErrors;
extern G__linked_taginfo G__G__HistLN_TH2;
extern G__linked_taginfo G__G__HistLN_TEfficiency;
extern G__linked_taginfo G__G__HistLN_TEfficiencycLcLEStatOption;
extern G__linked_taginfo G__G__HistLN_TEfficiencycLcLdA;
extern G__linked_taginfo G__G__HistLN_TBits;
extern G__linked_taginfo G__G__HistLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__G__HistLN_TFormulaPrimitive;
extern G__linked_taginfo G__G__HistLN_TOperOffset;
extern G__linked_taginfo G__G__HistLN_TFormula;
extern G__linked_taginfo G__G__HistLN_TFormulacLcLdA;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLParamFunctor;
extern G__linked_taginfo G__G__HistLN_TF1cLcLdA;
extern G__linked_taginfo G__G__HistLN_TF12;
extern G__linked_taginfo G__G__HistLN_TF3;
extern G__linked_taginfo G__G__HistLN_TMatrixTBaselEfloatgR;
extern G__linked_taginfo G__G__HistLN_TMatrixTBaselEdoublegR;
extern G__linked_taginfo G__G__HistLN_TVectorTlEfloatgR;
extern G__linked_taginfo G__G__HistLN_TVectorTlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TElementActionTlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TElementPosActionTlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTSymlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTRow_constlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTRowlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTColumn_constlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTDiag_constlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTFlat_constlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTSub_constlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTSparseRow_constlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTSparselEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTSparseDiag_constlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTColumnlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTDiaglEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTFlatlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTSublEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTSparseRowlEdoublegR;
extern G__linked_taginfo G__G__HistLN_TMatrixTSparseDiaglEdoublegR;
extern G__linked_taginfo G__G__HistLN_TFractionFitter;
extern G__linked_taginfo G__G__HistLN_vectorlEintcOallocatorlEintgRsPgR;
extern G__linked_taginfo G__G__HistLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__HistLN_TVirtualHistPainter;
extern G__linked_taginfo G__G__HistLN_TH2D;
extern G__linked_taginfo G__G__HistLN_TGraph2DErrors;
extern G__linked_taginfo G__G__HistLN_TH1F;
extern G__linked_taginfo G__G__HistLN_TSpline;
extern G__linked_taginfo G__G__HistLN_TGraphcLcLdA;
extern G__linked_taginfo G__G__HistLN_TGraphBentErrors;
extern G__linked_taginfo G__G__HistLN_TGraphDelaunay;
extern G__linked_taginfo G__G__HistLN_TGraphSmooth;
extern G__linked_taginfo G__G__HistLN_TGraphTime;
extern G__linked_taginfo G__G__HistLN_TArrayC;
extern G__linked_taginfo G__G__HistLN_TArrayS;
extern G__linked_taginfo G__G__HistLN_TArrayI;
extern G__linked_taginfo G__G__HistLN_TArrayF;
extern G__linked_taginfo G__G__HistLN_TH1D;
extern G__linked_taginfo G__G__HistLN_TVirtualFFT;
extern G__linked_taginfo G__G__HistLN_TH1cLcLEBinErrorOpt;
extern G__linked_taginfo G__G__HistLN_TH1cLcLdA;
extern G__linked_taginfo G__G__HistLN_TH1C;
extern G__linked_taginfo G__G__HistLN_TH1S;
extern G__linked_taginfo G__G__HistLN_TH1I;
extern G__linked_taginfo G__G__HistLN_TH1K;
extern G__linked_taginfo G__G__HistLN_TProfile;
extern G__linked_taginfo G__G__HistLN_TH2C;
extern G__linked_taginfo G__G__HistLN_TH2S;
extern G__linked_taginfo G__G__HistLN_TH2I;
extern G__linked_taginfo G__G__HistLN_TH2F;
extern G__linked_taginfo G__G__HistLN_TH2PolyBin;
extern G__linked_taginfo G__G__HistLN_TH2Poly;
extern G__linked_taginfo G__G__HistLN_TAtt3D;
extern G__linked_taginfo G__G__HistLN_TProfile2D;
extern G__linked_taginfo G__G__HistLN_TH3;
extern G__linked_taginfo G__G__HistLN_TH3C;
extern G__linked_taginfo G__G__HistLN_TH3S;
extern G__linked_taginfo G__G__HistLN_TH3I;
extern G__linked_taginfo G__G__HistLN_TH3F;
extern G__linked_taginfo G__G__HistLN_TH3D;
extern G__linked_taginfo G__G__HistLN_THLimitsFinder;
extern G__linked_taginfo G__G__HistLN_THnIter;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLTHnBaseBinIter;
extern G__linked_taginfo G__G__HistLN_THnBasecLcLdA;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLTHnBaseBrowsable;
extern G__linked_taginfo G__G__HistLN_TNDArray;
extern G__linked_taginfo G__G__HistLN_THnSparse;
extern G__linked_taginfo G__G__HistLN_THn;
extern G__linked_taginfo G__G__HistLN_TNDArrayTlEdoublegR;
extern G__linked_taginfo G__G__HistLN_THnTlEfloatgR;
extern G__linked_taginfo G__G__HistLN_TNDArrayTlEfloatgR;
extern G__linked_taginfo G__G__HistLN_THnTlEdoublegR;
extern G__linked_taginfo G__G__HistLN_THnTlEchargR;
extern G__linked_taginfo G__G__HistLN_TNDArrayTlEchargR;
extern G__linked_taginfo G__G__HistLN_THnTlEshortgR;
extern G__linked_taginfo G__G__HistLN_TNDArrayTlEshortgR;
extern G__linked_taginfo G__G__HistLN_THnTlEintgR;
extern G__linked_taginfo G__G__HistLN_TNDArrayTlEintgR;
extern G__linked_taginfo G__G__HistLN_THnTlElonggR;
extern G__linked_taginfo G__G__HistLN_TNDArrayTlElonggR;
extern G__linked_taginfo G__G__HistLN_THnTlElongsPlonggR;
extern G__linked_taginfo G__G__HistLN_TNDArrayTlElongsPlonggR;
extern G__linked_taginfo G__G__HistLN_TExMap;
extern G__linked_taginfo G__G__HistLN_THnSparseArrayChunk;
extern G__linked_taginfo G__G__HistLN_THnSparseCompactBinCoord;
extern G__linked_taginfo G__G__HistLN_THnSparseTlETArrayDgR;
extern G__linked_taginfo G__G__HistLN_THnSparseTlETArrayFgR;
extern G__linked_taginfo G__G__HistLN_THnSparseTlETArrayLgR;
extern G__linked_taginfo G__G__HistLN_THnSparseTlETArrayIgR;
extern G__linked_taginfo G__G__HistLN_THnSparseTlETArraySgR;
extern G__linked_taginfo G__G__HistLN_THnSparseTlETArrayCgR;
extern G__linked_taginfo G__G__HistLN_THStack;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLIGradientOneDim;
extern G__linked_taginfo G__G__HistLN_TKDE;
extern G__linked_taginfo G__G__HistLN_TKDEcLcLEKernelType;
extern G__linked_taginfo G__G__HistLN_TKDEcLcLEIteration;
extern G__linked_taginfo G__G__HistLN_TKDEcLcLEMirror;
extern G__linked_taginfo G__G__HistLN_TKDEcLcLEBinning;
extern G__linked_taginfo G__G__HistLN_TKDEcLcLTKernel;
extern G__linked_taginfo G__G__HistLN_vectorlEboolcOallocatorlEboolgRsPgR;
extern G__linked_taginfo G__G__HistLN_reverse_iteratorlEvectorlEboolcOallocatorlEboolgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__HistLN_TLimitDataSource;
extern G__linked_taginfo G__G__HistLN_TRandom;
extern G__linked_taginfo G__G__HistLN_TOrdCollection;
extern G__linked_taginfo G__G__HistLN_TLimit;
extern G__linked_taginfo G__G__HistLN_TMultiDimFit;
extern G__linked_taginfo G__G__HistLN_TMultiDimFitcLcLEMDFPolyType;
extern G__linked_taginfo G__G__HistLN_TPolyMarker;
extern G__linked_taginfo G__G__HistLN_TPrincipal;
extern G__linked_taginfo G__G__HistLN_EErrorType;
extern G__linked_taginfo G__G__HistLN_TProfile3D;
extern G__linked_taginfo G__G__HistLN_TSplinePoly;
extern G__linked_taginfo G__G__HistLN_TSplinePoly3;
extern G__linked_taginfo G__G__HistLN_TSplinePoly5;
extern G__linked_taginfo G__G__HistLN_TSpline3;
extern G__linked_taginfo G__G__HistLN_TSpline5;
extern G__linked_taginfo G__G__HistLN_TSVDUnfold;
extern G__linked_taginfo G__G__HistLN_TUnfold;
extern G__linked_taginfo G__G__HistLN_TUnfoldcLcLEConstraint;
extern G__linked_taginfo G__G__HistLN_TUnfoldcLcLERegMode;
extern G__linked_taginfo G__G__HistLN_TUnfoldcLcLEHistMap;
extern G__linked_taginfo G__G__HistLN_TMap;
extern G__linked_taginfo G__G__HistLN_TUnfoldSys;
extern G__linked_taginfo G__G__HistLN_TUnfoldSyscLcLESysErrMode;
extern G__linked_taginfo G__G__HistLN_TVirtualGraphPainter;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLIBaseParam;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLWrappedMultiTF1;
extern G__linked_taginfo G__G__HistLN_ROOTcLcLMathcLcLWrappedTF1;
extern G__linked_taginfo G__G__HistLN_TNDArrayTlEunsignedsPlongsPlonggR;
extern G__linked_taginfo G__G__HistLN_TNDArrayTlEunsignedsPlonggR;
extern G__linked_taginfo G__G__HistLN_TNDArrayTlEunsignedsPintgR;
extern G__linked_taginfo G__G__HistLN_TNDArrayTlEunsignedsPshortgR;
extern G__linked_taginfo G__G__HistLN_TNDArrayReflEfloatgR;
extern G__linked_taginfo G__G__HistLN_TNDArrayReflEdoublegR;
extern G__linked_taginfo G__G__HistLN_TNDArrayReflElongsPlonggR;
extern G__linked_taginfo G__G__HistLN_TNDArrayReflElonggR;
extern G__linked_taginfo G__G__HistLN_TNDArrayReflEintgR;
extern G__linked_taginfo G__G__HistLN_TNDArrayReflEshortgR;
extern G__linked_taginfo G__G__HistLN_TNDArrayReflEchargR;
extern G__linked_taginfo G__G__HistLN_TNDArrayReflEunsignedsPlongsPlonggR;
extern G__linked_taginfo G__G__HistLN_TNDArrayReflEunsignedsPlonggR;
extern G__linked_taginfo G__G__HistLN_TNDArrayReflEunsignedsPintgR;
extern G__linked_taginfo G__G__HistLN_TNDArrayReflEunsignedsPshortgR;
extern G__linked_taginfo G__G__HistLN_THnTlEunsignedsPlongsPlonggR;
extern G__linked_taginfo G__G__HistLN_THnTlEunsignedsPlonggR;
extern G__linked_taginfo G__G__HistLN_THnTlEunsignedsPintgR;
extern G__linked_taginfo G__G__HistLN_THnTlEunsignedsPshortgR;

/* STUB derived class for protected member access */
typedef TNDArrayT<double> G__TNDArrayTlEdoublegR;
typedef THnT<float> G__THnTlEfloatgR;
typedef TNDArrayT<float> G__TNDArrayTlEfloatgR;
typedef THnT<double> G__THnTlEdoublegR;
typedef THnT<char> G__THnTlEchargR;
typedef TNDArrayT<char> G__TNDArrayTlEchargR;
typedef THnT<short> G__THnTlEshortgR;
typedef TNDArrayT<short> G__TNDArrayTlEshortgR;
typedef THnT<int> G__THnTlEintgR;
typedef TNDArrayT<int> G__TNDArrayTlEintgR;
typedef THnT<long> G__THnTlElonggR;
typedef TNDArrayT<long> G__TNDArrayTlElonggR;
typedef THnT<long long> G__THnTlElongsPlonggR;
typedef TNDArrayT<long long> G__TNDArrayTlElongsPlonggR;
typedef THnSparseT<TArrayD> G__THnSparseTlETArrayDgR;
typedef THnSparseT<TArrayF> G__THnSparseTlETArrayFgR;
typedef THnSparseT<TArrayL> G__THnSparseTlETArrayLgR;
typedef THnSparseT<TArrayI> G__THnSparseTlETArrayIgR;
typedef THnSparseT<TArrayS> G__THnSparseTlETArraySgR;
typedef THnSparseT<TArrayC> G__THnSparseTlETArrayCgR;
typedef TNDArrayT<unsigned long long> G__TNDArrayTlEunsignedsPlongsPlonggR;
typedef TNDArrayT<unsigned long> G__TNDArrayTlEunsignedsPlonggR;
typedef TNDArrayT<unsigned int> G__TNDArrayTlEunsignedsPintgR;
typedef TNDArrayT<unsigned short> G__TNDArrayTlEunsignedsPshortgR;
typedef TNDArrayRef<float> G__TNDArrayReflEfloatgR;
typedef TNDArrayRef<double> G__TNDArrayReflEdoublegR;
typedef TNDArrayRef<long long> G__TNDArrayReflElongsPlonggR;
typedef TNDArrayRef<long> G__TNDArrayReflElonggR;
typedef TNDArrayRef<int> G__TNDArrayReflEintgR;
typedef TNDArrayRef<short> G__TNDArrayReflEshortgR;
typedef TNDArrayRef<char> G__TNDArrayReflEchargR;
typedef TNDArrayRef<unsigned long long> G__TNDArrayReflEunsignedsPlongsPlonggR;
typedef TNDArrayRef<unsigned long> G__TNDArrayReflEunsignedsPlonggR;
typedef TNDArrayRef<unsigned int> G__TNDArrayReflEunsignedsPintgR;
typedef TNDArrayRef<unsigned short> G__TNDArrayReflEunsignedsPshortgR;
typedef THnT<unsigned long long> G__THnTlEunsignedsPlongsPlonggR;
typedef THnT<unsigned long> G__THnTlEunsignedsPlonggR;
typedef THnT<unsigned int> G__THnTlEunsignedsPintgR;
typedef THnT<unsigned short> G__THnTlEunsignedsPshortgR;
