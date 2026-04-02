#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GeometricObjectsUUID \
NewTopologicalObjectsUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE= SHARED LIBRARY
#
INCLUDED_MODULES = CXTopSubd SubdCXTop SubdCXOper CXTopology Replay_NewTopologicalObjectsCGM \
                   CATCXTopology  CATSubdOccurence CATSubdOperator

LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  JS0MT \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATAdvancedMathematics \
  CATTopologicalObjects \
  CATGeometricOperators \
  CATGeometricObjectsCGM \
  CATSubdOccurence \
  CATGMModelInterfaces


#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATTopologicalObjectsCGM CATGMModelInterfaces
#endif

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

