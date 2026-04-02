# COPYRIGHT DASSAULT SYSTEMES 2006
#======================================================================
# Imakefile for module CATPNTPolyModel.m
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = \
  JS0GROUP \
  CATMathematics \
  CATPolyhedralMathematicsDummy \
  CATCGMRefiner \
  CATViz \
  PolyMODEL \
  PolyImportExport


