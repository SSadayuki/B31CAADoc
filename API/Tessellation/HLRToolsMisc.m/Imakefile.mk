#
# Imakefile for the  module HLRToolsMisc
#
# History :
#
# Jul. 2001  Laurent ALT   Creation a partir de HLRTools
#

#ifdef SPATIAL_SPECIFICATION
BUILT = NO
#endif
BUILT_OBJECT_TYPE = NONE
#BUILT_OBJECT_TYPE = LOAD MODULE

LINK_WITH = \
  JS0CORBA \
  JS0MT

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
