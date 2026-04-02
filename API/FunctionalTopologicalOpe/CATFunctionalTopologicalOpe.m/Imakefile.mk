# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module CATFunctionalTopologicalOpe.m
#======================================================================
#
#  Feb 2006  Creation: JHG
#  Feb 2013  PMG ajout de CATMidSurfaceOpe
#======================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 

INCLUDED_MODULES = AutoBase AutoDraft AutoFillet AutoMidSurface WallThicknessAnalysis FuncTopoOpeItf \
  AutoParallel CATHybridVariableOffset CATUnFoldedAero FrFShellUnfold FuncTopology \
  CATFuzzySurfaceOffset CATMidSurfaceOpe CATMultipleSkinOffset

LINK_WITH_WITH_COMMON= \
  JS0GROUP \
  JS03TRA \
  JS0SCBAK \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATAdvancedMathematics \
  CATGeometricOperators \
  CATTopologicalObjects \
  CATTopologicalOperators \
  CATFDGImpl \
  CATAdvancedTopologicalOpe \
  CATTopologicalOperatorsLight \
  TessAPI \
  TessPolygon \
  HLRTools \
  CATSurfacicTopoOperators \
  CATCurveBasedTopoOperators \
  CATPolyhedralObjects \
  CATPolyhedralInterfaces \
  CATPolyhedralMathematics \
  CATPolyhedralOperators \
  CATPolyhedralBodyOperators \
  CATBasicTopologicalOpe \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces \
  CATGMAdvancedOperatorsInterfaces \
  CATPolyhedralMathematicsDummy \
  CATFreeFormOperators \
  CATFuzzyPolyOper \
  CATFuzzyOperators \
  MathMeshParam \
  GeoPlate

#ifdef CATIAR420
LINK_WITH=$(LINK_WITH_WITH_COMMON) \
		  CDSDynamicsCATIA
#else
LINK_WITH=$(LINK_WITH_WITH_COMMON)
#endif

ALIASES_ON_IMPORT=CATFunctionalTopologicalOpe CATGMModelInterfaces CATGMOperatorsInterfaces CATGMAdvancedOperatorsInterfaces

# System dependant variables
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

