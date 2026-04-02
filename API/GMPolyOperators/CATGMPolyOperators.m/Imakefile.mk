#
BUILT_OBJECT_TYPE= SHARED LIBRARY
#
INCLUDED_MODULES = \
  GMPolyTessBody \
  GMPolyBoolean \
  GMPolyOffset \
  GMPolyProject \
  GMPolySimplify \
  GMPolyBasicOper \
  GMPolyShapeOper \
  GMPolyBodyServices \
  GMPolyImportExport \
  Replay_GMPolyOperators \
  GMPolyOperItf

#ifdef CATIAR423
  LINK_WITH_423 = CATFuzzyPolyOper
#else
  LINK_WITH_423 =
#endif

LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  $(LINK_WITH_423) \
  JS0GROUP \
  CATSysTS \
  JS0MT \
  YI00IMPL \
  CATTopologicalObjects \
  CATGeometricObjects \
  CATGMGeometricInterfaces \
  CATGMModelInterfaces \
  GMPolyTopTools \
  CATAdvancedMathematics \
  CATMathematics \
  CATCGMGeoMath \
  CATMathStream \
  CATCGMKernel \
  CATPolyhedralInterfaces \
  CATPolyhedralObjects \
  CATPolyTrimOperators \
  CATPolyhedralOperators \
  PolyhedralUtilities \
  PolyMathContainers \
  TessBodyAdapters \
  PolyMODEL \
  PolyBodyBoolean \
  PolygonalModel \
  CATGMOperatorsInterfaces \
  CATGMPolyUtilities
  
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

