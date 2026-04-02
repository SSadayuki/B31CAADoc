_co # COPYRIGHT DASSAULT SYSTEMES 2009
#======================================================================
# Imakefile for module CATUV2MeshRefiner.m
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = SHARED LIBRARY


LINK_WITH = \
  JS0GROUP \
  CATMathematics \
  CATMathStream \
  CATPNTPolyModel \
  CATPolyhedralInterfaces \
  CATPolyhedralMathematics \
  CATPolyhedralObjects \
  CATPolygonalTools \
  CATCGMRefiner \
  CATPolyhedralVisualization

