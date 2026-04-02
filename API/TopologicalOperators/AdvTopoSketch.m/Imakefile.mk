#
BUILT_OBJECT_TYPE=NONE
OS=COMMON
#
LINK_WITH= \
  YI00IMPL \
  YP00IMPL \
  YP00TRST \
  JS0CORBA \
  YN000MAT \
  YN000FUN \
  CO0LSTPV \
  Y30UIUTI \
  AdvTopoUtil \
  FrFGeodesic \
  Primitives \
  BOOPER
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#


