#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GeometricObjectsUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
INCLUDED_MODULES = FrFTopologicalOpeLight AdvTopoOpeLightItf
          
LINK_WITH= \
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
  CATTopologicalOperatorsLight \
  CATFreeFormOperators \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces \
  GMPolyShapeOper
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

