 
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GeometricObjectsUUID \
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
INCLUDED_MODULES = Data_GeometricObjectsCGM YP00TRST CATCGMStreamCGMImpl CGMObject \
                   PointCGM CurveCGM SurfaceCGM LawCGM  CGMGeoTopo GeomObjCGMItf 

LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  JS0MT\
  CATMathematics \
  CATMathStream \
  CATTechTools \
  AdvancedMathematics	\
  CATGeometricObjects \
  CATCGMGeoMath  

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
