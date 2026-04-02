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
  Y30E3PMG \
  YI00IMPL \
  FrFAdvancedOpeUtil \
  FrFAdvancedOpeCrv \
  YN000M2D
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#


