# COPYRIGHT DASSAULT SYSTEMES 2006-2007, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module CATPolyhedralMathematics.m
#======================================================================
#
# Nov 2006 Creation ndo
# Do not build this module before R18.
#======================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH = \
  CATPolyhedralMathematicsDummy \
  CATMathematics \
  CATMathStream \
  CATSysAllocator \
  CATSysMultiThreading \
  JS0GROUP

INCLUDED_MODULES = \
  BVHObjects \
  PolyMathArithmetic \
  PolyMathBV \
  PolyMathContainers \
  PolyMathCurves \
  PolyMathIntersectors \
  PolyMathSurfaces \
  PolyMathRay \
  PolyMathUtils \
  PolyMultiThreading

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
