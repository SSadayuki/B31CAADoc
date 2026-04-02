#
BUILT_OBJECT_TYPE=NONE
OS=COMMON
#
LINK_WITH = JS0ERROR \
            JS0CORBA \
            YP00IMPL \
            YN000FUN \
  YN000MAT \
  Y300IINT \
  CGMObject
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
