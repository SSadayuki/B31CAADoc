# COPYRIGHT DASSAULT SYSTEMES 2005, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module CATFuzzySurfaceOffset.m
#======================================================================
#
# November 2005  Creation: ndo
#======================================================================

#ifdef CATIAV5R22
BUILT_OBJECT_TYPE = NONE
#else
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH = JS0GROUP \
			CATMathematics \
  CATMathStream \
  CATTopologicalObjects \
  CATGeometricObjects \
  CATCGMGeoMath \
  CATGMModelInterfaces \
  CATBasicTopologicalOpe \
  CATSurfacicTopoOperators \
  CATTessellation \
  HLRTools \
  CATPolyhedralObjects \
  CATPolyhedralInterfaces \
  CATPolyhedralOperators \
  CATFuzzyPolyOper \
  CATFuzzyOperators \
			TessPolygon \ 
  CATBasicTopologicalOpe \
  CATTopologicalOperatorsLight \
                        BOHYBOPE
#endif
