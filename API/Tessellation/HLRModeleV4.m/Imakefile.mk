#
# Imakefile for the  module HLRModeleV4
#
# History :
#
# Jul. 2001 LAT Creation a partir des fichiers specifiques V4 de HLRModele 
#

#
BUILT_OBJECT_TYPE=NONE
#BUILT_OBJECT_TYPE=SHARED LIBRARY
#ifdef SPATIAL_SPECIFICATION
BUILD = NO
#endif
#

LINK_WITH = Collections \
  HLRDebug \
  HLRGeometry \
  HLRProject \
  HLRTools \
  HLRTopology \
  HLRTopologyCGM \
  HLRTopologyRep \
  CATMathematics \
  CATAdvancedMathematics \
  CATGeometricObjects \
  CATGeometricObjectsCGM \
  CATGMModelInterfaces
#ifdef SPATIAL_SPECIFICATION
#LOCAL_CCFLAGS = $(COMMON_CCFLAGS) -DHLR_COMPONENT
#endif

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
