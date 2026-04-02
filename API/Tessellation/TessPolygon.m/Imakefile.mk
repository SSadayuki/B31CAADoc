# Imakefile of the object TessPolygon
#
BUILT_OBJECT_TYPE= SHARED LIBRARY
#

#ifdef SPATIAL_SPECIFICATION
BUILD = NO
#endif

#ifdef CATIAR417
DUMMY_LINK_WITH = \
  CATTessellation \
  CATPolyhedralMathematics \
  CATGMModelInterfaces \
  CATSysTS
#else
#ifdef CATIAV5R24
DUMMY_LINK_WITH = \
  CATTessellation \
  TessellateCommon \
  CATTopologicalObjects \
  CATPolyhedralMathematicsDummy \
  CATGeometricOperators
#endif
#endif

LINK_WITH = \
  $(DUMMY_LINK_WITH) \
  CO0HTAB \
  CO0LSTPV \
  JS0ERROR \
  JS0CORBA \
  CATCGMGeoMath \
  CATMathStream \
  CATTechTools \
  YN000FUN \
  YN000MAT \
  YP00IMPL \
  TessAPI \
  HLRTools \
  CATGeometricObjects \
  CATPolyhedralObjects \
  CATPolyhedralInterfaces
             
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

