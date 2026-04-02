#
BUILT_OBJECT_TYPE= SHARED LIBRARY
#
 
LINK_WITH= \
  JS0GROUP \
  JS0MT \
  CATCXDebug \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATGeometricObjectsCGM \
  CATTopologicalObjects \
  CATGeometricOperators \
  CATObjectModelerBase \
  CATClnBase \
  CATCioCGMV5Interop \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces \
  CATTechTools \
  CATCGMV5SpecsQuery 
#
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

