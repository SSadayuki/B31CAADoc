#
BUILT_OBJECT_TYPE=NONE
OS=COMMON
#

LINK_WITH= \
  AdvTopoUtil \
  FrFOpeSur \
            FrFOpeCrv \
  YP00IMPL \
  YN000MAT \
  YN000FUN \
  Y30C3XGG \
  JS0ERROR \
  JS0CORBA \
  JS03TRA \
  CO0LSTPV \
  Y300IINT \
  Y30UIUTI \
            Connect \
  Primitives \
  TopoOperError \
  TessAPI
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
