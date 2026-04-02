#
BUILT_OBJECT_TYPE= NONE
#

#ifdef SPATIAL_SPECIFICATION
BUILD = NO
#endif

LINK_WITH = \
  CO0HTAB \
  CO0LSTPV \
  JS0ERROR \
  JS0CORBA \
  TessDebug \
  YN000FUN \
  YN000MAT \
  YP00IMPL \
  TessAPI \
  TessDiscretize
#  	     CATPolyhedralOperators

#
OS = COMMON

#
OS = AIX

#
OS = IRIX

#
OS = HP-UX

#
OS = SunOS

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

