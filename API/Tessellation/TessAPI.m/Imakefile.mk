#ifdef SPATIAL_SPECIFICATION
BUILD = NO
#endif
#
BUILT_OBJECT_TYPE= NONE
#
LINK_WITH = \
  CO0HTAB \
  CO0LSTPV \
  HLRTools \
  JS0ERROR \
  JS0CORBA \
  TessDebug \
  YI00IMPL \
  YN000FUN \
  YN000MAT \
  YP00IMPL \
  TessGeom \
  TessDiscretize \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces
# CATViz 
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
