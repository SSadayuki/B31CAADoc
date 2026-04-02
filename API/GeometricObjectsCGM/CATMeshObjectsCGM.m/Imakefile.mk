 
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
PolyhedralObjectsUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
INCLUDED_MODULES = Data_MeshObjectsCGM  SubdivisionsCGM PolyCGM CloudCGM 

LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  JS0MT\
  CATMathematics \
  CATMathStream \
  CATTechTools \
  CATGeometricObjects \
  CATCGMGeoMath \
  AdvancedMathematics	\
  CATGeometricObjectsCGM \
  CATSubdivisionObjects \
  CATPolyhedralMathematicsDummy \
  CATPolyhedralObjects \
  CATPolyhedralInterfaces \
  CATSubdivisionApproximation \ 
  PolyMODEL

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
