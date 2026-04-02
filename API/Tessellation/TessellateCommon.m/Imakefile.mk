# COPYRIGHT DASSAULT SYSTEMES 2010
#======================================================================
# Imakefile for module TessellateCommon.m
#======================================================================
#
# SHARED LIBRARY
#
#ifdef CATIAR417
BUILT_OBJECT_TYPE = NONE
#else
#ifdef CATIAV5R24
BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = \
  CGMV5Tessellator \
  TessellateCache  
  
LINK_WITH = \
  JS0GROUP \
  CATCGMGeoMath \
  CATGeometricObjects \
  CATMathematics \
  CATAdvancedMathematics \
  CATMathStream \
  CATPolyhedralInterfaces \
  CATPolyhedralMathematics \
  CATPolyhedralObjects \
  CATTessellation \
  JS0MT \
  CATSysAllocator YI00IMPL
#endif
#endif

