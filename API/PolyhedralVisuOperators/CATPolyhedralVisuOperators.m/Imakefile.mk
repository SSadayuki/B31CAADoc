# COPYRIGHT DASSAULT SYSTEMES 2006, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module CATPolyhedralVisuOperators.m
#======================================================================
#
# November 2006 Creation ndo
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH = \
  CATMathematics \
  CATMathStream \
  CATPolygonalTools \
  CATPolyhedralInterfaces \
  CATPolyhedralMathematics \
  CATPolyhedralObjects \
  CATPolyhedralOperators \
  CATPolyhedralVisualization \
  CATTechTools \
  CATViz \
  JS0GROUP \
#ifdef CATIAV5R23
  CATPolyhedralBodyOperators
#endif

INCLUDED_MODULES = \
  PolyVisuBoolOper \
  PolyVisuBuildOper \
  PolyVisuProjectionOper \
#ifdef CATIAV5R23
  PolyVisuDistiller
#endif

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
