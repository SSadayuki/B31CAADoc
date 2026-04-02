#ifndef CATIAV5R20
BUILT_OBJECT_TYPE=SHARED LIBRARY
BUILD=NO
#else

#
BUILT_OBJECT_TYPE=NONE
OS=COMMON
#
LINK_WITH= \
  FrFObjects \
  FrFOpeCrv \
  YP00IMPL \
  YN000MAT \
  YN000FUN \
  JS0ERROR \
  JS0CORBA \
  FrFOpeUtil \
  JS03TRA \
  CO0LSTPV \
  Y300IINT \
  Y30UIUTI \
  FrFAdvancedOpeUtil \
  FrFAdvancedObjects \
  Y30C3XGG \
  CATGeometricOperators \
  TessAPI 
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

#endif
