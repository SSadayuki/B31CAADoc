#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
INCLUDED_MODULES = Connect EXTCGEOPE Y300IINT Y30A3HGG ConnectInt Data_GeometricOperators Replay_GeometricOperators \
  Y30C1XMM Y30C3XGG Y30E3PMG Y30UIUTI Y3DYNOPE Y30Approx GeoTopo Interfaces GeoNurbsTools GeometricOpeItf FrFGeodesic \
  Clash2D GeoRecognition GeoAdvCurves 
#
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  JS0GROUP CATSysTS \
  CATMathematics \
  CATMathStream CATTechTools \
  CATGeometricObjects \
  CATGMGeometricInterfaces \
  CATGeometricObjects_MProc \
  CATCGMGeoMath \
  CATAdvancedMathematics \
  CATGMModelInterfaces \
  MPROCTools 

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATGeometricOperators CATGMModelInterfaces
#endif
#
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
OS = IRIX
LOCAL_CCFLAGS = -G 0
LOCAL_LDFLAGS = -G 0

OS=AIX
LOCAL_LDFLAGS=-bbigtoc
