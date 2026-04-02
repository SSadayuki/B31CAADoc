# COPYRIGHT DASSAULT SYSTEMES 2010
#======================================================================
# Imakefile for module CGMUVTessellator.m
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

#ifdef CATIAR417
DUMMY_LINK_WITH = \
  CATGMModelInterfaces \
  JS0FM \
  CATVisFoundation \
  CATSysTS
#else
#ifdef CATIAV5R24
DUMMY_LINK_WITH = \
  CATFreeFormOperators \
  CATVizBase \
  TessellateCommon
#endif
#endif

INCLUDED_MODULES = \
  CGMUVTessBuilder \
  CGMUVTessCommon \
  CGMUVCache \
  CGMUVVisuBuilder
  
LINK_WITH = \
  $(DUMMY_LINK_WITH) \
  CATCGMGeoMath \
  CATGeometricObjects \
  CATMathematics \
  CATAdvancedMathematics \
  CATMathStream \
  CATPNTPolyModel \
  CATPolygonalTools \
  CATPolyhedralInterfaces \
  CATPolyhedralMathematics \
  CATPolyhedralObjects \
  CATPolyhedralVisualization \
  CATTechTools \
  CATTessellation \
  CGMFitterTools \
  JS0GROUP \
  JS0MT \
  CATGMOperatorsInterfaces \
  CATUV2MeshRefiner\
  CATCGMRefiner \
  MPROCTools\
  CATGeometricObjects_MProc \
  CATUVMeshBuilder \
  CATSysAllocator
  #FrFTopologicalOpe \
  #PrimitivesLight
  
  
# System dependant variables
OS = AIX
BUILD = YES
#
OS = HP-UX
BUILD = YES
#
OS = IRIX
BUILD = YES
#
OS = SunOS
BUILD = YES
#
OS = Windows_NT
BUILD = YES
#
OS = Darwin
BUILD = YES
