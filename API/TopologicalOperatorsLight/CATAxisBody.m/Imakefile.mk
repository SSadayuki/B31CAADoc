#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GMOperatorsInterfacesUUID \
GeometricObjectsUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = CATAxisBodyItf
#
OS = COMMON

LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces \
  CATTopologicalObjects 

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATAxisBody CATGMModelInterfaces CATGMOperatorsInterfaces
#endif

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

