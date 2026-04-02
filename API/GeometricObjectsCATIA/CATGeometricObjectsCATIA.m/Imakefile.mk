#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CGMV5InteroperabilityUUID \
GeometricObjectsCATIAUUID \
GeometricObjectsUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = GeometricObjectsCATIA  YP000PR4 YP001PR4 YP002PR4 YP00FACT YP0SOLCR
COMDYN_MODULE = V4SysCOMD                   
#
OS = COMMON
#
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  YP00IMPL \
  JS0CORBA \
  JS03TRA \
  AC0CATPL \
  YN000MAT \
  NS0S3STR \
  AD0XXBAS \
  JS0ERROR \
  CO0LSTPV \
  CATV4Geometry \
  CATGeomOpe \
  CATCdbEntity \
  CATV4epsilon \
  CATV4Maths \
  CATV4Procedural \
  CATV4Topology \
  V4SysB \
  V4SysENV \
  V4SysUTIL \
  AC0XXLNK \
  CATGeomEva \
  YN000M2D \
  YN000FUN \
  JS0SCBAK \
  CATAxisBody \
  CATCGMGeoMath \
  CATMathStream \
  BftierV5
#
OS = HP-UX
#
OS = IRIX
SYS_LIBS =  -lftn
#
OS = SunOS
#
OS = Windows_NT

