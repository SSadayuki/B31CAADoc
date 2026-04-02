# COPYRIGHT DASSAULT SYSTEMES 2006
#======================================================================
# Imakefile for module CATCGMRefiner.m
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = \
  CGMRefinerTools

#if defined (CATIAV5R18) 

LINK_WITH = \
  JS0GROUP \
  CATMathematics \
  CATPNTPolyModel \
  CATViz \
  CATPolygonalTools \
  CATPolyhedralInterfaces \
  CATPolyhedralMathematics \
  CATPolyhedralMathematicsDummy \
  CATPolyhedralObjects \
  PolyImportExport

#else

LINK_WITH = \
  JS0GROUP \
  CATMathematics \
  CATPNTPolyModel \
  CATViz \
  CATPolygonalTools \
  CATPolyhedralInterfaces \
  CATPolyhedralMathematics \
  CATPolyhedralObjects \
  PolyImportExport

#endif
