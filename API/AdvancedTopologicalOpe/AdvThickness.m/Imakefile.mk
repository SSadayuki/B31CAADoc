#
BUILT_OBJECT_TYPE = NONE
#
################
OS = COMMON
################
#
LINK_WITH = \
  JS0ERROR \
  JS0CORBA \
  CO0LSTPV \
  CO0HTAB \
  AD0XXBAS \
            Mathematics\
  YP00IMPL \
  YP00TRST \
  Y300IINT \
  Y30C1XMM \
  Y30C3XGG \
  YI00IMPL \
  TopoOperError \
  Topology \
  BOOPER \
  Thick \
  YN000FUN \
  Y30A3HGG
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
