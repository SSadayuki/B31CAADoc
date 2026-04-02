# COPYRIGHT DASSAULT SYSTEMES 2008, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module CATPolyhedralBodyOperators.m
#======================================================================
# December 2008 Creation ndo
#======================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH = \
  CATMathematics \
  CATMathStream \
  CATPolygonalTools \
  CATPolyhedralInterfaces \
  CATPolyhedralMathematics \
  CATPolyhedralObjects \
  CATPolyhedralOperators \
  CATTechTools \
  JS0GROUP \
  CATSysMultiThreading

INCLUDED_MODULES = \
  PolyBodyBoolean \
  PolyBodyBuilders \
  PolyBodyDecimate \
  PolyBodyDistance \
  PolyBodyMeasures \
  PolyBodyRegularize \
  PolyBodyServices

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
