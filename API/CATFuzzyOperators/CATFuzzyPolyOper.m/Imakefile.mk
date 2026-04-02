# COPYRIGHT DASSAULT SYSTEMES 2006, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for macro-module CATFuzzyPolyOper.m
#======================================================================
#
# July 2006 Creation dps
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH_COMMON = \
  CATMathematics \
  CATMathStream \
  CATTechTools \
  JS0GROUP \
  JS0MT \
  CATPolyhedralInterfaces \
  PolyMeshImpl

#if defined (CATIAV5R28) || defined (CATIAR420)
  LINK_WITH = \
	$(LINK_WITH_COMMON) \
        CATPolyhedralMathematics \
	CATPolyhedralOperators
#else
  LINK_WITH = \
	$(LINK_WITH_COMMON)
#endif

INCLUDED_MODULES = \
  PolyOctree \
  VRepGen \
  PolyDual 

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
