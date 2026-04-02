# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATSurfacicAdvancedTopoOpe.m
#======================================================================
#
#  Jul 2004  : AMR : Optimisation O2
#  Apr 2003  ; avc ; Correction warning
#  Jul 2002  ; amr ; Add Copyright
#  Mai 2008  ; wtu ; Ajout des module GeoMorph32 et GeoMorph64
#  Mai 2009  ; pmg ; Ajout des Link With : CATPolyhedralObjects et CATPolyhedralInterfaces (R20 et R208)
#  Nov 2009  ; jjc ; Ajout du Link With CATPolyMeshIntersectors (R20 et R208)
#  Nov 2013  ; KTU ; Ajout module AdvParamOper (R23 et R216)

#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#BUILT_OBJECT_TYPE = LOAD MODULE
#
OS = COMMON

#if defined (CATIAR216) || defined(CATIAV5R23)
#if os intel_a
INCLUDED_MODULES = TopoMorph TopoIMLSurface SurfAdvTopoOpeItf \
                   GeoMorph GeoMorph32 SurfaceSimplification \
				   AdvParamOper
(...)
#elif os win_b64
INCLUDED_MODULES = TopoMorph TopoIMLSurface SurfAdvTopoOpeItf \
                   GeoMorph GeoMorph64 SurfaceSimplification \
				   AdvParamOper
#else
INCLUDED_MODULES = TopoMorph TopoIMLSurface SurfAdvTopoOpeItf \
                   GeoMorph SurfaceSimplification \
				   AdvParamOper
#endif

#else 
#if os intel_a
INCLUDED_MODULES = TopoMorph TopoIMLSurface SurfAdvTopoOpeItf \
                   GeoMorph GeoMorph32 SurfaceSimplification
(...)
#elif os win_b64
INCLUDED_MODULES = TopoMorph TopoIMLSurface SurfAdvTopoOpeItf \
                   GeoMorph GeoMorph64 SurfaceSimplification
#else
INCLUDED_MODULES = TopoMorph TopoIMLSurface SurfAdvTopoOpeItf \
                   GeoMorph SurfaceSimplification
#endif
#
#endif 

#KTU20140423 suite a la desactivation build aix_64 par fmt
LINK_WITH_FMT = CATFmtAlgorithmsServices
#if os aix_a64 
LINK_WITH_FMT=
#endif

#if defined(CATIAR216)
LINK_WITH= \
  CATNewTopologicalObjects \
  CATTopologicalOperators \
  CATTopologicalOperatorsLight \
  CATGeometricObjects  \
  CATGMGeometricInterfaces \
  Mathematics \
  CATAdvancedMathematics \
  CATSurfacicMathematics \
  CATSurfacicMathLight \
  JS0GROUP CATSysTS \
  CATSysMultiThreading \
  CATSurfacicGeoOperators \
  CATGeometricOperators \
  CATFreeFormOperators \
  CATAdvancedTopologicalOpe \
  CATSurfacicTopoOperators  \
  TessAPI \
  TessPolygon \
  CATCGMGeoMath \
  CATMathStream \
  CATPolyhedralObjects \
  CATPolyhedralMathematics \
  CATPolyhedralInterfaces \
  CATPolyhedralBodyOperators \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces \
  CATGMAdvancedOperatorsInterfaces \
  CATPolyDecimateOperators \
  CATPolyMeshIntersectors \
  MPROCTools\
  FacRepSur \
  CATGeometricObjects_MProc \
  ${LINK_WITH_FMT}

  
#elif defined(CATIAV5R20) || defined(CATIAR208)
LINK_WITH= \
  CATNewTopologicalObjects \
  CATTopologicalOperators \
  CATTopologicalOperatorsLight \
  CATGeometricObjects  \
  CATGMGeometricInterfaces \
  Mathematics \
  CATAdvancedMathematics \
  CATSurfacicMathematics \
  CATSurfacicMathLight \
  JS0GROUP CATSysTS \
  CATSysMultiThreading \
  CATSurfacicGeoOperators \
  CATGeometricOperators \
  CATFreeFormOperators \
  CATAdvancedTopologicalOpe \
  CATSurfacicTopoOperators  \
  TessAPI \
  TessPolygon \
  CATCGMGeoMath \
  CATMathStream \
  CATPolyhedralObjects \
  CATPolyhedralInterfaces \
  CATGMModelInterfaces \
  CATGMOperatorsInterfaces \
  CATGMAdvancedOperatorsInterfaces \
  CATPolyDecimateOperators \
  CATPolyMeshIntersectors \
  MPROCTools\
  FacRepSur \
  CATGeometricObjects_MProc

  
#else

LINK_WITH= \
  CATNewTopologicalObjects \
  CATTopologicalOperators \
  CATGeometricObjects  \
  Mathematics \
  CATAdvancedMathematics \
  CATSurfacicMathematics \
  JS0GROUP CATSysTS \
  CATSurfacicGeoOperators \
  CATGeometricOperators \
  CATFreeFormOperators \
  CATAdvancedTopologicalOpe \
  CATSurfacicTopoOperators  \
  TessAPI \
  TessPolygon \
  CATCGMGeoMath \
  CATMathStream 
#endif

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATSurfacicAdvancedTopoOpe CATGMModelInterfaces CATGMOperatorsInterfaces CATGMAdvancedOperatorsInterfaces
#endif

#
OS = AIX

#
OS = IRIX

#
OS = HP-UX

#
OS = SunOS

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

