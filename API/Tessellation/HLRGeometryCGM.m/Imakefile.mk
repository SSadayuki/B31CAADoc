#
# Imakefile for the  module HLGeometryCGM
#
# History :
#
# Jan. 98  Jose CHILLAN (jch)   Creation
#

#ifdef SPATIAL_SPECIFICATION
BUILD = NO
#endif
#
BUILT_OBJECT_TYPE=NONE

#BUILT_OBJECT_TYPE=SHARED LIBRARY
#

LINK_WITH = \
  Collections \
  HLRDebug \
  HLRGeometry \
  HLRModele \
  HLRTools \
  CATMathematics \
  CATGeometricObjects

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
