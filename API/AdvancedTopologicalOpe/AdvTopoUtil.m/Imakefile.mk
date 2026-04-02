#
BUILT_OBJECT_TYPE=NONE
OS=COMMON
#
LINK_WITH = \
  JS0ERROR \
  JS0CORBA \
  YI00IMPL \
  CO0LSTPV \
  YN000FUN \
  YN000MAT \
  Y300IINT \
  YP00IMPL \
  YN000MAT \
  Primitives \
  HybBoolean \
  FrFAdvancedObjects \
  FrFAdvancedOpeCrv
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
