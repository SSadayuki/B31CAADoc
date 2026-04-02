#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GeometricObjectsUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
INCLUDED_MODULES_COMMON = AdvTopoUtil FrFTopologicalOpe PowerTopologicalOpe \
                          AdvThickness AdvTopoOpeError AdvExtrude AdvTopoOpeItf GeometrySizeOptimization \
                          Silhouette TurningProfile Replay_AdvancedTopologicalOpe ShellFlattener CATCGMVolumetricSweepCmp \
						  PrintSetup \ 
						  Hatching

#if defined (CATIAR419)
INCLUDED_MODULES = \
  $(INCLUDED_MODULES_COMMON) \
  AdMfgVolSupportGenerator_CATech 
#else
INCLUDED_MODULES = \
  $(INCLUDED_MODULES_COMMON)
#endif

#if defined (CATIAR423)
INCLUDED_MODULES = \
  $(INCLUDED_MODULES_COMMON) \
  AdMfgVolSupportGenerator_CATech \
  AdditiveSupport
#endif

LINK_WITH_COMMON = \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  JS03TRA \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATCGMGeoMath \
  AdvancedMathematics \
  CATGeometricOperators \
  CATTopologicalObjects \
  CATTopologicalOperators \
  CATTopologicalOperatorsLight \
  CATFreeFormOperators \
  TessAPI \
  TessPolygon \
  BOIMPOPE \
  HLRTools \
  CATTesHLRUtilities \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces \
  CATAdvancedTopologicalOpeLight \
  HLREngine \
  CATTechTools \
  PolygonalBoolean \
  PolygonalHatching \
  PolyhedralModel \
  PolyhedralAttributes \
  PolyMathArithmetic \
  PolyMeshImpl \
  PolyBodyServices \
  GMPolyProject

#if defined(CATIAR420)
LINK_WITH = \
  $(LINK_WITH_COMMON) \
  CATSysTS \
  CATPolyhedralOperators \
#else
LINK_WITH = \
  $(LINK_WITH_COMMON)
#endif


#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATAdvancedTopologicalOpe CATAdvancedTopologicalOpeLight CATGMModelInterfaces CATGMOperatorsInterfaces
#endif

# +++ PR64
# la ligne precedente remplace:
#	  TessAPI   BOIMPOPE
# +++ PR64
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
