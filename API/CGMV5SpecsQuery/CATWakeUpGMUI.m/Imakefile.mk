#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATGemUUID \
CATAfrUUID \
CATVisUUID \
GeometricObjectsUUID \
ObjectModelerBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  CATTechTools \
  JS0FM \
  JS0GROUP \
  CATObjectModelerBase \
  DI0PANV2 \
  CATApplicationFrame \
  CATVisualization \
  CATViz \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATGeometricObjectsCGM \
  CATTopologicalObjects \
  CATCioCGMV5Interop \
  CATGeometricOperators \
  CATGMModelInterfaces
#	    

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
