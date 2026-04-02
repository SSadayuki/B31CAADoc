# COPYRIGHT DASSAULT SYSTEMES 2006
#======================================================================
# Imakefile for module CATUVMeshBuilder.m
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = \
  CGMFitterTools \
  CATCGMRefExactTools

#ifdef CATIAR417
DUMMY_LINK_WITH = \
  CATMathStream \
  CATVisFoundation \
  CATCGMGeoMath \
  CATTessellation \
  CATGMModelInterfaces \
  CATPolyhedralVisualization \
  CATVisController \
  CATGeomVisuBase \
  CATVisItf
#else
#ifdef CATIAV5R24
DUMMY_LINK_WITH = \
  CATCGMRefExactTools \
  CATVisualization \
  CATGeometricOperators \
  CATFreeFormOperators \
  PolyVizRefiners \
  TessellateCommon \
  CATGviGeomVisu
#endif
#endif

LINK_WITH = \
  $(DUMMY_LINK_WITH) \
  JS0GROUP \
  CATMathematics \
  CATPNTPolyModel \
  CATCGMRefiner \
  CGMUVTessellator\
  CATGeometricObjects \
  YN000FUN \
  TessAPI \
  TessPolygon \
  HLRTools \
  CATGMOperatorsInterfaces \
  PolyMODEL \
  CATPolyhedralInterfaces \
  PolyMathSurfaces \
  CATUV2MeshRefiner \
  CATCGMRefinerImpl
