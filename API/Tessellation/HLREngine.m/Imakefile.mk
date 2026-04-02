#
# Imakefile for the  module HLRCompute
#
# History :
#
# Jan. 98  Jose CHILLAN (jch)   Creation
#
#
#BUILT_OBJECT_TYPE=NONE
BUILT_OBJECT_TYPE=SHARED LIBRARY
#

#
OS = COMMON
LINK_WITH = \
  CATMathematics \
  CATCGMGeoMath \
  CATMathStream \
  CATAdvancedMathematics \
  HLRDebug \
  HLRGeometry \
  HLRModele \
  HLRPolyEntity \
  HLRProject \
  HLRTools \
  HLRTopology \
  HLRTopologyCGM \
  TessPolygon\
  CATTessellation\
  CATSysTS \
  CATPolygonalTools \
  JS0SCBAK \
  JS0CORBA \
  CATTechTools \
  CO0LSTPV \
  CATPolyhedralObjects\
  PolyMathContainers \
  CATPolyhedralInterfaces\
  CATGMModelInterfaces \
  MPROCTools \
  CATGeometricObjects \
  CATGMGeometricInterfaces \
  CATGeometricObjects_MProc
#	    HRV VE0BASE // pour proto HLR_OCCLUSION 

#ifdef SPATIAL_SPECIFICATION
LOCAL_CCFLAGS = $(COMMON_CCFLAGS) -DHLR_COMPONENT
#endif

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
