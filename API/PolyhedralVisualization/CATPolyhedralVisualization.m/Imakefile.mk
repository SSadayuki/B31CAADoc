# COPYRIGHT DASSAULT SYSTEMES 2006, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module CATPolyhedralVisualization.m
#======================================================================
#
# dec 2006 Creation CHU
#======================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY 

# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = \
JS0FM JS0GROUP 
# END WIZARD EDITION ZONE

LINK_WITH = $(WIZARD_LINK_MODULES) \
  CATPolyhedralInterfaces \
  CATPolyhedralMathematics \
  CATPolyhedralObjects \
  CATSysMultiThreading \
  CATTechTools \
  CATVizIteratorsImpl \
  JS0CORBA \
  JS0LIB0 \
  VE0LOD \
  YN000MAT \
  YN000MFL

#Module a rajouter apres le changement de CI
#  CATPolyhedralOperators
#  CATPolyCanonicOperators

INCLUDED_MODULES = \
  PolyImportExport \
  PolyModelConverters \
  PolyVizAdapters \
  PolyVizLayers \
  PolyVizRefiners \
  PolyVizUtils

# System dependant variables
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
