#
# Imakefile for the  module HLRPolyEntity
#
# History :
#
# July 2019  Pierre-Yves PECHARD (H7W)   Creation


#ifdef SPATIAL_SPECIFICATION
BUILD = NO
#endif
#
BUILT_OBJECT_TYPE=NONE
#BUILT_OBJECT_TYPE=SHARED LIBRARY
#

LINK_WITH = \
  PolyMODEL \
  PolyhedralUtilities \
  PolyMathContainers

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
