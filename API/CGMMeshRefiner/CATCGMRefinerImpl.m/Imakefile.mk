# COPYRIGHT DASSAULT SYSTEMES 2006
#======================================================================
# Imakefile for module CATCGMRefinerImpl.m
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = \
  JS0GROUP \
  CATCGMRefiner \
  CATMathematics \
  CATPNTPolyModel \
  CATPolyhedralMathematics \
  CATViz
            
