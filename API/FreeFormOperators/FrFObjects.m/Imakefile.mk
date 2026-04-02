#
BUILT_OBJECT_TYPE=NONE
OS=COMMON
#

LINK_WITH= \
  FrFOpeUtil \
  YP00IMPL \
  YN000MAT \
  YN000FUN \
  JS0ERROR \
  JS0CORBA \
  JS03TRA \
           CO0LSTPV  
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
