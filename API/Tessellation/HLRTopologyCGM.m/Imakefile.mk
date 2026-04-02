#
# Imakefile for the  module HLRTopologyCGM
#
# History :
#
# Jan. 98  Jose CHILLAN (jch)   Creation
# Sep. 01  Laurent ALT (lat)    Remplacement de HLRTools par le gros module
#                                        correspondant dans LINK_WITH

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
  HLRGeometryCGM \
  HLRModele \
  CATTesHLRUtilities \
  HLRTopology \
	CATGeometricObjects \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces
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
