#
# Imakefile for the  module HLRModele
#
# History :
#
# Jul. 2000 HKL Externalisation du BuilderEntity de Bodies CGM
#

#
#ifdef SPATIAL_SPECIFICATION
BUILT = NO
#endif
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
INCLUDED_MODULES = HLRGeometryCGM HLRTopologyCGM HLRPolyEntity 


LINK_WITH = Collections \
  CATTessellationHLR \
  CATTesHLRUtilities \
  CATTesHLRUtilitiesMisc \
  CATMathematics \
  CATCGMGeoMath \
  CATMathStream \
  CATAdvancedMathematics \
  CATGeometricObjects \
  CATGeometricOperators \
  CATNewTopologicalObjects \
  CATGMModelInterfaces \
  PolyMODEL \
  PolyhedralUtilities \
  PolyMathContainers
#     CATNewTopologicalObjects CATTopologicalOperators

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
