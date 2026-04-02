# COPYRIGHT DASSAULT SYSTEMES 2003, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module CATPolyhedralOperators.m
#======================================================================
#
# Sep 2003 Creation ndo
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

ALIASES_ON_IMPORT = CATPolyhedralOperators CATPolyhedralMathematics CATPolygonalTools

LINK_WITH = \
  CATMathematics \
  CATMathStream \
  CATPolygonalTools \
  CATPolyhedralInterfaces \
  CATPolyhedralMathematics \
  CATPolyhedralMathematicsDummy \
  CATPolyhedralObjects \
  CATTechTools \
  JS0GROUP

INCLUDED_MODULES = \
  CATPolyAnalyzeOperators \
  CATPolyBooleanOperators \
  CATPolyConvexHull \
  CATPolyDecimateOperators \
  CATPolyFillHolesOperators \
  CATPolyGriddingTools \
  CATPolyHealOperators \
  CATPolyMeshIntersectors \
  CATPolyMCrv \
  CATPolyMCurveAnalyzeOperators \
  CATPolyMCurveCreateOperators \
  CATPolyMCurveModOperators \
  CATPolyMiscellaneous \
  CATPolyModOperators \
  CATPolyRegularizeOperators \
  CATPolySculptOperators \
  CATPolySmoothingOperators \
  CATPolySegmentOperators \
  CATPolySegmentCommon \  
  CATPolySpatialPartitions \
  CATPolyTextureOperators \
  CATPolyTrimOperators \
  CATPolyDistanceOperators  \
  CATPolyFastMesh \
  CATPolyDeformOperators \
  CATPolyMeshMappingOper  \
  CATPolyMeshWatershedOperators # NUA
  
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
