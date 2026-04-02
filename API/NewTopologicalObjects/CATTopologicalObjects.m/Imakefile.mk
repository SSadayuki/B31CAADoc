#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GeometricObjectsUUID \
NewTopologicalObjectsUUID \
GMModelInterfacesUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE= SHARED LIBRARY
#
INCLUDED_MODULES = CATNewTopologicalObjects BOOARRAY BOOERROR BOOLEAN BOOPER \
                   DIS Disco3D Disconnect MPROCBoolean \
                   CATLiveBody \
                   CATCGMStreamTopoImpl Data_NewTopologicalObjects Replay_NewTopologicalObjects \
                   CXMODEL Topology YI00IMPL CheckUpTopo CheckOperators PersistentCell NewTopoObjItf \
                   FastUpdate ChainAndReplay MdlExtrRecog \
                   CATCGMProperty

LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP \
  JS0MT \
  CATMathematics \
  CATMathStream \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATAdvancedMathematics \
  MPROCTools \
  CATGeometricObjectsCGM \
  CATGeometricOperators \
  CATGMModelInterfaces \
#ifdef CATIAR211
  CATCDMBaseInterfaces \
#endif
  CATTechTools   

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATTopologicalObjects CATGMModelInterfaces
#endif

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

OS = AIX
LOCAL_LDFLAGS =  -bbigtoc
