# COPYRIGHT DASSAULT SYSTEMES 2012, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module CATPolyhedralVisuOperators.m
#======================================================================
#
# November 2012 Creation zfi
#======================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 

#ifndef CATIAV5R23
BUILD = NO
#endif


LINK_WITH = \
  CATMathematics \
  CATMathStream \
  JS0GROUP \
  CATPolygonalTools \
  CATPolyhedralInterfaces \
  CATPolyhedralMathematics \
  CATPolyhedralMathematicsDummy \
  CATPolyhedralObjects \
  CATPolyhedralOperators \
  CATPolyhedralVisualization \
  CATViz \
  CATPolyhedralBodyOperators \
  CATTechTools \
  CATPolyhedralVisuOperators
  
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
