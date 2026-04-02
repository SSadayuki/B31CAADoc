# COPYRIGHT DASSAULT SYSTEMES 2006-2007, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module CATPolygonalTools.m
#======================================================================
#
# Nov 2006 Creation ndo
# jan 2012 Update   dps : adding PolygonalHatching
#======================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH = \
  CATMathematics \
  CATMathStream \
  CATPolyhedralMathematics \
  JS0GROUP CATSysTS CATSysMultiThreading

INCLUDED_MODULES = \
  PolygonalBoolean \
  PolygonalLayers \
  PolygonalModel \
  PolygonalOperators \
  PolygonalPartitions \
  PolygonalSerializers \
  PolygonalHatching

#LOCAL_CCFLAGS = -DPOLYGONALTOOLS_WITH_CGMOUTPUT

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
