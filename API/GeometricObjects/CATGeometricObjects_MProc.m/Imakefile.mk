#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GeometricObjectsUUID \
MathematicsUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  CATMathematics \
  CATTechTools \
  CATMathStream \
  AdvancedMathematics \
  JS0GROUP \
  CATCGMGeoMath \
  CATGeometricObjects \
  CompactFunction \
  MPROCTools
#
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
