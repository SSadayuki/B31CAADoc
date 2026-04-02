#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GeometricObjectsUUID \
ObjectModelerBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = CGMV5Interop CGMV5InteropItf
#
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  CATObjectModelerBase \
  DataAdmin \
  CATClnBase \
  CATMathematics \
  CATMathStream \
  CATTechTools \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATAxisBody \
  CATGeometricOperators \
  CATGeometricObjectsCGM \
  CATNewTopologicalObjects \
  CATObjectModelerCATIA \
  CATGMOperatorsInterfaces \
  CATGMModelInterfaces \
  CATOmxBase

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATCioCGMV5Interop CATGMModelInterfaces CATGMOperatorsInterfaces
#endif

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

OS = Linux
BUILD = NO
