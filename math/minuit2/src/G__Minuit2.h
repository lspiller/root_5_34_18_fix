/********************************************************************
* math/minuit2/src/G__Minuit2.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error math/minuit2/src/G__Minuit2.h/C is only for compilation. Abort cint.
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
extern void G__cpp_setup_tagtableG__Minuit2();
extern void G__cpp_setup_inheritanceG__Minuit2();
extern void G__cpp_setup_typetableG__Minuit2();
extern void G__cpp_setup_memvarG__Minuit2();
extern void G__cpp_setup_globalG__Minuit2();
extern void G__cpp_setup_memfuncG__Minuit2();
extern void G__cpp_setup_funcG__Minuit2();
extern void G__set_cpp_environmentG__Minuit2();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "TBinLikelihoodFCN.h"
#include "TChi2ExtendedFCN.h"
#include "TChi2ExtendedFitData.h"
#include "TChi2FCN.h"
#include "TChi2FitData.h"
#include "TFcnAdapter.h"
#include "TFitterFumili.h"
#include "TFitterMinuit.h"
#include "TFumiliFCN.h"
#include "Minuit2/ABObj.h"
#include "Minuit2/ABProd.h"
#include "Minuit2/ABSum.h"
#include "Minuit2/ABTypes.h"
#include "Minuit2/AnalyticalGradientCalculator.h"
#include "Minuit2/BasicFunctionGradient.h"
#include "Minuit2/BasicFunctionMinimum.h"
#include "Minuit2/BasicMinimumError.h"
#include "Minuit2/BasicMinimumParameters.h"
#include "Minuit2/BasicMinimumSeed.h"
#include "Minuit2/BasicMinimumState.h"
#include "Minuit2/CombinedMinimizer.h"
#include "Minuit2/CombinedMinimumBuilder.h"
#include "Minuit2/ContoursError.h"
#include "Minuit2/DavidonErrorUpdator.h"
#include "Minuit2/FCNAdapter.h"
#include "Minuit2/FCNBase.h"
#include "Minuit2/FCNGradAdapter.h"
#include "Minuit2/FCNGradientBase.h"
#include "Minuit2/FumiliBuilder.h"
#include "Minuit2/FumiliChi2FCN.h"
#include "Minuit2/FumiliErrorUpdator.h"
#include "Minuit2/FumiliFCNAdapter.h"
#include "Minuit2/FumiliFCNBase.h"
#include "Minuit2/FumiliGradientCalculator.h"
#include "Minuit2/FumiliMaximumLikelihoodFCN.h"
#include "Minuit2/FumiliMinimizer.h"
#include "Minuit2/FumiliStandardChi2FCN.h"
#include "Minuit2/FumiliStandardMaximumLikelihoodFCN.h"
#include "Minuit2/FunctionGradient.h"
#include "Minuit2/FunctionMinimizer.h"
#include "Minuit2/FunctionMinimum.h"
#include "Minuit2/GenericFunction.h"
#include "Minuit2/GradientCalculator.h"
#include "Minuit2/HessianGradientCalculator.h"
#include "Minuit2/InitialGradientCalculator.h"
#include "Minuit2/LaInverse.h"
#include "Minuit2/LaOuterProduct.h"
#include "Minuit2/LaProd.h"
#include "Minuit2/LaSum.h"
#include "Minuit2/LASymMatrix.h"
#include "Minuit2/LAVector.h"
#include "Minuit2/MatrixInverse.h"
#include "Minuit2/MinimumBuilder.h"
#include "Minuit2/MinimumError.h"
#include "Minuit2/MinimumErrorUpdator.h"
#include "Minuit2/MinimumParameters.h"
#include "Minuit2/MinimumSeedGenerator.h"
#include "Minuit2/MinimumSeed.h"
#include "Minuit2/MinimumState.h"
#include "Minuit2/MinosError.h"
#include "Minuit2/Minuit2Minimizer.h"
#include "Minuit2/MinuitParameter.h"
#include "Minuit2/MnApplication.h"
#include "Minuit2/MnConfig.h"
#include "Minuit2/MnContours.h"
#include "Minuit2/MnCovarianceSqueeze.h"
#include "Minuit2/MnCross.h"
#include "Minuit2/MnEigen.h"
#include "Minuit2/MnFcn.h"
#include "Minuit2/MnFumiliMinimize.h"
#include "Minuit2/MnFunctionCross.h"
#include "Minuit2/MnGlobalCorrelationCoeff.h"
#include "Minuit2/MnHesse.h"
#include "Minuit2/MnLineSearch.h"
#include "Minuit2/MnMachinePrecision.h"
#include "Minuit2/MnMatrix.h"
#include "Minuit2/MnMigrad.h"
#include "Minuit2/MnMinimize.h"
#include "Minuit2/MnMinos.h"
#include "Minuit2/MnParabolaFactory.h"
#include "Minuit2/MnParabola.h"
#include "Minuit2/MnParabolaPoint.h"
#include "Minuit2/MnParameterScan.h"
#include "Minuit2/MnPlot.h"
#include "Minuit2/MnPosDef.h"
#include "Minuit2/MnPrint.h"
#include "Minuit2/MnRefCountedPointer.h"
#include "Minuit2/MnReferenceCounter.h"
#include "Minuit2/MnScan.h"
#include "Minuit2/MnSeedGenerator.h"
#include "Minuit2/MnSimplex.h"
#include "Minuit2/MnStrategy.h"
#include "Minuit2/MnTiny.h"
#include "Minuit2/MnUserCovariance.h"
#include "Minuit2/MnUserFcn.h"
#include "Minuit2/MnUserParameters.h"
#include "Minuit2/MnUserParameterState.h"
#include "Minuit2/MnUserTransformation.h"
#include "Minuit2/MnVectorTransform.h"
#include "Minuit2/ModularFunctionMinimizer.h"
#include "Minuit2/MPIProcess.h"
#include "Minuit2/NegativeG2LineSearch.h"
#include "Minuit2/Numerical2PGradientCalculator.h"
#include "Minuit2/ParametricFunction.h"
#include "Minuit2/ScanBuilder.h"
#include "Minuit2/ScanMinimizer.h"
#include "Minuit2/SimplexBuilder.h"
#include "Minuit2/SimplexMinimizer.h"
#include "Minuit2/SimplexParameters.h"
#include "Minuit2/SimplexSeedGenerator.h"
#include "Minuit2/SinParameterTransformation.h"
#include "Minuit2/SqrtLowParameterTransformation.h"
#include "Minuit2/SqrtUpParameterTransformation.h"
#include "Minuit2/StackAllocator.h"
#include "Minuit2/VariableMetricBuilder.h"
#include "Minuit2/VariableMetricEDMEstimator.h"
#include "Minuit2/VariableMetricMinimizer.h"
#include "Minuit2/VectorOuterProduct.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__Minuit2LN_TClass;
extern G__linked_taginfo G__G__Minuit2LN_TBuffer;
extern G__linked_taginfo G__G__Minuit2LN_TMemberInspector;
extern G__linked_taginfo G__G__Minuit2LN_TObject;
extern G__linked_taginfo G__G__Minuit2LN_TNamed;
extern G__linked_taginfo G__G__Minuit2LN_ROOT;
extern G__linked_taginfo G__G__Minuit2LN_string;
extern G__linked_taginfo G__G__Minuit2LN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__G__Minuit2LN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__Minuit2LN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__G__Minuit2LN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLGenericFunction;
extern G__linked_taginfo G__G__Minuit2LN_vectorlEdoublecOallocatorlEdoublegRsPgR;
extern G__linked_taginfo G__G__Minuit2LN_reverse_iteratorlEvectorlEdoublecOallocatorlEdoublegRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLFCNBase;
extern G__linked_taginfo G__G__Minuit2LN_TVirtualFitter;
extern G__linked_taginfo G__G__Minuit2LN_vectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgR;
extern G__linked_taginfo G__G__Minuit2LN_reverse_iteratorlEvectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLFCNGradientBase;
extern G__linked_taginfo G__G__Minuit2LN_TFcnAdapter;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLVectorOuterProductlEROOTcLcLMinuit2cLcLABObjlEveccOLAVectorcOdoublegRcOdoublegR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLABObjlEROOTcLcLMinuit2cLcLsymcOROOTcLcLMinuit2cLcLVectorOuterProductlEROOTcLcLMinuit2cLcLABObjlEveccOLAVectorcOdoublegRcOdoublegRcOdoublegR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMatrixInverselEROOTcLcLMinuit2cLcLsymcOROOTcLcLMinuit2cLcLABObjlEsymcOLASymMatrixcOdoublegRcOdoublegR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLABObjlEROOTcLcLMinuit2cLcLsymcOROOTcLcLMinuit2cLcLMatrixInverselEROOTcLcLMinuit2cLcLsymcOROOTcLcLMinuit2cLcLABObjlEsymcOLASymMatrixcOdoublegRcOdoublegRcOdoublegR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMinuitParameter;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnMachinePrecision;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnUserCovariance;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnUserTransformation;
extern G__linked_taginfo G__G__Minuit2LN_vectorlEROOTcLcLMinuit2cLcLMinuitParametercOallocatorlEROOTcLcLMinuit2cLcLMinuitParametergRsPgR;
extern G__linked_taginfo G__G__Minuit2LN_vectorlEROOTcLcLMinuit2cLcLMinuitParametercOallocatorlEROOTcLcLMinuit2cLcLMinuitParametergRsPgRcLcLiterator;
extern G__linked_taginfo G__G__Minuit2LN_reverse_iteratorlEvectorlEROOTcLcLMinuit2cLcLMinuitParametercOallocatorlEROOTcLcLMinuit2cLcLMinuitParametergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__Minuit2LN_vectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgR;
extern G__linked_taginfo G__G__Minuit2LN_reverse_iteratorlEvectorlEunsignedsPintcOallocatorlEunsignedsPintgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnUserParameters;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnGlobalCorrelationCoeff;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMinimumState;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnUserParameterState;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnCross;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMinosError;
extern G__linked_taginfo G__G__Minuit2LN_pairlEdoublecOdoublegR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLFunctionMinimum;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLFunctionMinimizer;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMinimumSeedGenerator;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMinimumBuilder;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMinimumSeed;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnFcn;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLGradientCalculator;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnStrategy;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLFumiliFCNBase;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLModularFunctionMinimizer;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnSeedGenerator;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLFunctionGradient;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMinimumError;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMinimumParameters;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLABSumlEROOTcLcLMinuit2cLcLABObjlEveccOLAVectorcOdoublegRcOROOTcLcLMinuit2cLcLABObjlEveccOLAVectorcOdoublegRsPgR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLABObjlEROOTcLcLMinuit2cLcLveccOROOTcLcLMinuit2cLcLABSumlEROOTcLcLMinuit2cLcLABObjlEveccOLAVectorcOdoublegRcOROOTcLcLMinuit2cLcLABObjlEveccOLAVectorcOdoublegRsPgRcOdoublegR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLABSumlEROOTcLcLMinuit2cLcLABObjlEsymcOLASymMatrixcOdoublegRcOROOTcLcLMinuit2cLcLABObjlEsymcOLASymMatrixcOdoublegRsPgR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLABObjlEROOTcLcLMinuit2cLcLsymcOROOTcLcLMinuit2cLcLABSumlEROOTcLcLMinuit2cLcLABObjlEsymcOLASymMatrixcOdoublegRcOROOTcLcLMinuit2cLcLABObjlEsymcOLASymMatrixcOdoublegRsPgRcOdoublegR;
extern G__linked_taginfo G__G__Minuit2LN_vectorlEROOTcLcLMinuit2cLcLMinimumStatecOallocatorlEROOTcLcLMinuit2cLcLMinimumStategRsPgR;
extern G__linked_taginfo G__G__Minuit2LN_reverse_iteratorlEvectorlEROOTcLcLMinuit2cLcLMinimumStatecOallocatorlEROOTcLcLMinuit2cLcLMinimumStategRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLFunctionMinimumcLcLMnReachedCallLimit;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLFunctionMinimumcLcLMnAboveMaxEdm;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnRefCountedPointerlEROOTcLcLMinuit2cLcLBasicFunctionMinimumgR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLFumiliBuilder;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLFumiliMinimizer;
extern G__linked_taginfo G__G__Minuit2LN_TFitterMinuit;
extern G__linked_taginfo G__G__Minuit2LN_TFitterMinuitcLcLEMinimizerType;
extern G__linked_taginfo G__G__Minuit2LN_vectorlEROOTcLcLMinuit2cLcLMinosErrorcOallocatorlEROOTcLcLMinuit2cLcLMinosErrorgRsPgR;
extern G__linked_taginfo G__G__Minuit2LN_reverse_iteratorlEvectorlEROOTcLcLMinuit2cLcLMinosErrorcOallocatorlEROOTcLcLMinuit2cLcLMinosErrorgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__Minuit2LN_TFitterFumili;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLVariableMetricBuilder;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLVariableMetricMinimizer;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLSimplexBuilder;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLSimplexSeedGenerator;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLSimplexMinimizer;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLCombinedMinimumBuilder;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLCombinedMinimizer;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLContoursError;
extern G__linked_taginfo G__G__Minuit2LN_vectorlEpairlEdoublecOdoublegRcOallocatorlEpairlEdoublecOdoublegRsPgRsPgR;
extern G__linked_taginfo G__G__Minuit2LN_reverse_iteratorlEvectorlEpairlEdoublecOdoublegRcOallocatorlEpairlEdoublecOdoublegRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMath;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMathcLcLIBaseFunctionMultiDim;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMathcLcLIGradientFunctionMultiDim;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIBaseFunctionMultiDimgR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMathcLcLBasicFitMethodFunctionlEROOTcLcLMathcLcLIGradientFunctionMultiDimgR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLABProdlEROOTcLcLMinuit2cLcLABObjlEsymcOLASymMatrixcOdoublegRcOROOTcLcLMinuit2cLcLABObjlEveccOLAVectorcOdoublegRsPgR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLABObjlEROOTcLcLMinuit2cLcLveccOROOTcLcLMinuit2cLcLABProdlEROOTcLcLMinuit2cLcLABObjlEsymcOLASymMatrixcOdoublegRcOROOTcLcLMinuit2cLcLABObjlEveccOLAVectorcOdoublegRsPgRcOdoublegR;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMathcLcLMinimizer;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLEMinimizerType;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMinuit2Minimizer;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnApplication;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnContours;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnFumiliMinimize;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnHesse;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnMigrad;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnMinimize;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnMinos;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnPlot;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLScanBuilder;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLScanMinimizer;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnScan;
extern G__linked_taginfo G__G__Minuit2LN_ROOTcLcLMinuit2cLcLMnSimplex;
extern G__linked_taginfo G__G__Minuit2LN_vectorlEpairlEdoublecOROOTcLcLMinuit2cLcLLAVectorgRcOallocatorlEpairlEdoublecOROOTcLcLMinuit2cLcLLAVectorgRsPgRsPgR;
extern G__linked_taginfo G__G__Minuit2LN_reverse_iteratorlEvectorlEpairlEdoublecOROOTcLcLMinuit2cLcLLAVectorgRcOallocatorlEpairlEdoublecOROOTcLcLMinuit2cLcLLAVectorgRsPgRsPgRcLcLiteratorgR;

/* STUB derived class for protected member access */
typedef vector<ROOT::Minuit2::MinuitParameter,allocator<ROOT::Minuit2::MinuitParameter> > G__vectorlEROOTcLcLMinuit2cLcLMinuitParametercOallocatorlEROOTcLcLMinuit2cLcLMinuitParametergRsPgR;
