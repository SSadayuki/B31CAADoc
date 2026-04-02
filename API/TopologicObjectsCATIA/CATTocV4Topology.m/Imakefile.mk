#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GeometricObjectsCATIAUUID \
NewTopologicalObjectsUUID \
ObjectModelerBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = YITOPOV4
#
OS = COMMON

LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  AC0XXLNK \
  YP000PR4 \
  JS0SCBAK \
  AC0CATPL \
  CO0LSTPV \
  CO0RCINT \
  JS0CORBA \
  JS0ERROR \
  AD0XXBAS \
  NS0S3STR \
  CATV4Maths \
  CATV4gUtilities \
  CATV4Topology \
  CATTopoloServices \
  CATV4Procedural \
  CATV4Geometry \
            CATGeomEva \
  YN000MAT \
  BftierV5 \
  CSGUtilities \
  JS03TRA \
  CATCdbEntity \
  CO0RCDBL \
  V4SysENV \
  V4SysMEM \
  YI00IMPL \
  YP00IMPL \
  V42CNext \
  BOOERROR \
  CATCGMGeoMath \
  CATMathStream \
  CATVisualization \
  CATViz

