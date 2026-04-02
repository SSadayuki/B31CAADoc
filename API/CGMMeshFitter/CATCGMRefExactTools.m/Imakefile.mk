# COPYRIGHT DASSAULT SYSTEMES 2006
#======================================================================
# Imakefile for module CATCGMRefExactTools.m
#======================================================================
#
# SHARED LIBRARY
#

#ifdef CATIAV5R22

BUILT_OBJECT_TYPE = NONE

#else

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = \
  CGMFitterTools

LINK_WITH = \
  JS0GROUP \
  CATMathematics \
  CATPNTPolyModel \
  CATCGMRefiner \
  CATCGMRefinerImpl \
  CATUVMeshBuilder \
  CATViz \
  CATVisualization \
  CATGviGeomVisu \
  TessAPI \
  TessPolygon \
  HLRTools \
  CATGeometricObjects \
  CATNewTopologicalObjects \
  FrFOpeCrv \
  CATGeometricOperators \
  CATTopologicalObjects \
  CATPolyhedralInterfaces \
  CATPolyhedralObjects \
  CATPolyhedralVisualization \
  CATPolyhedralMathematics

#endif
