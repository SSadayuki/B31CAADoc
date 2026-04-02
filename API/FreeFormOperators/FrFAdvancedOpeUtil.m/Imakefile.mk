#
BUILT_OBJECT_TYPE=NONE
OS=COMMON
#
LINK_WITH = \
  Y300IINT \
  YP00IMPL \
  FrFAdvancedObjects \
  YN000MAT \
  FrFOpeUtil \
  YI00IMPL \
  CO0LSTPV \
  FrFAdvancedOpeCrv \
  FrFOpeCrv \
  FrFObjects
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
