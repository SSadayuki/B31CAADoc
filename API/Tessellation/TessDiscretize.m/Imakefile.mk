#
# Imakefile for the  module TessDiscretize.m
#
# History :
#
# Mar. 1998  Jose CHILLAN (jch)   Creation
#

#ifdef SPATIAL_SPECIFICATION
BUILD = NO
#endif
BUILT_OBJECT_TYPE = NONE
#BUILT_OBJECT_TYPE = LOAD MODULE
#BUILT = NO

LINK_WITH = \
  Collections \
  HLRTools \
  Mathematics \
  TessAPI \
  TessDebug \
  TessGeom \
  YN000FUN \
  YP00IMPL \
  YI00IMPL

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

