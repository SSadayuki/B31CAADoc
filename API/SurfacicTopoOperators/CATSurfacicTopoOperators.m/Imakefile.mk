# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATSurfacicTopoOperators.m
#======================================================================
#
#  nov 2010  : amr : ajout PolygonalOperators,	PolyMathArithmetic en R211
#  oct 2006  : mps : ajout CATSurfacicMathGeomFeLight en R18
#  Jul 2004  : amr : Optimisation O2
#  Apr 2003  ; avc ; Correction warning
#  Jul 2002  ; amr ; Add Copyright
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#BUILT_OBJECT_TYPE = LOAD MODULE
#
OS = COMMON
INCLUDED_MODULES = Healing TopoPlate TopoDeformation AutoFill Polygon2Surface SurfTopoOpeItf TopSurfaceSimplification InfraMorph


#if defined (CATIAR208)
LINK_WITH= \
	CATNewTopologicalObjects \
	CATTopologicalOperators \
	CATGeometricObjects \
    CATGeometricObjects_MProc \
	CATAdvancedTopologicalOpe \
	CATAdvancedTopologicalOpeLight \
	Mathematics \
	CATAdvancedMathematics \
	CATSurfacicMathematics \
	CATSurfacicMathLight \
	CATSurfacicMathGeomFeLight \
	JS0GROUP \
	CATSurfacicGeoOperators \
	CATGeometricOperators \
	CATFreeFormOperators \
	CATCGMGeoMath \
	CATMathStream \
	CATCloudBasicResources \
	MPROCTools \
	CATGMModelInterfaces \
	CATGMOperatorsInterfaces \
	CATSGMOperatorsInterfaces \
	CATTopologicalOperatorsLight \
	PolyhedralModel \
	CATPolySpatialPartitions \
	CATPolyAnalyzeOperators \
	PolygonalOperators \
	PolyMathArithmetic \
	TessAPI TessPolygon CATPolyhedralObjects

#elif defined (CATIAV5R20) 
LINK_WITH= \
	CATNewTopologicalObjects \
	CATTopologicalOperators \
	CATGeometricObjects \
	CATAdvancedTopologicalOpe \
	CATAdvancedTopologicalOpeLight \
	Mathematics \
	CATAdvancedMathematics \
	CATSurfacicMathematics \
	CATSurfacicMathLight \
	CATSurfacicMathGeomFeLight \
	JS0GROUP \
	CATSurfacicGeoOperators \
	CATSurfacicInfrastructure \
	CATGeometricOperators \
	CATFreeFormOperators  \
	CATCGMGeoMath         \
	CATMathStream \
	CATCloudBasicResources \
	MPROCTools \
	CATGMModelInterfaces \
	CATGMOperatorsInterfaces \
	CATGMAdvancedOperatorsInterfaces \
	CATSGMOperatorsInterfaces \
	CATTopologicalOperatorsLight \
	PolyhedralModel \
	CATPolySpatialPartitions \
	CATPolyAnalyzeOperators \
	PolygonalOperators \
	TessAPI TessPolygon CATPolyhedralObjects

#elif defined(CATIAR203)
LINK_WITH= \
	CATNewTopologicalObjects \
	CATTopologicalOperators \
	CATGeometricObjects \
	CATAdvancedTopologicalOpe \
	CATAdvancedTopologicalOpeLight \
	Mathematics \
	CATAdvancedMathematics \
	CATSurfacicMathematics \
	CATSurfacicMathGeomFeLight \
	JS0GROUP \
	CATSurfacicGeoOperators \
	CATGeometricOperators \
	CATFreeFormOperators \
	CATCGMGeoMath \
	CATMathStream \
	CATCloudBasicResources \
	MPROCTools \
	CATGMModelInterfaces \
	CATGMOperatorsInterfaces \
	CATGMAdvancedOperatorsInterfaces \
	CATSGMOperatorsInterfaces \
	CATTopologicalOperatorsLight

#elif defined(CATIAV5R18)
LINK_WITH= \
	CATNewTopologicalObjects \
	CATTopologicalOperators \
	CATGeometricObjects \
	CATAdvancedTopologicalOpe \
	CATAdvancedTopologicalOpeLight \
	Mathematics \
	CATAdvancedMathematics \
	CATSurfacicMathematics \
	CATSurfacicMathGeomFeLight \
	JS0GROUP \
	CATSurfacicGeoOperators \
	CATGeometricOperators \
	CATFreeFormOperators \
	CATCGMGeoMath \
	CATMathStream \
	CATCloudBasicResources \
	MPROCTools \
	CATGMModelInterfaces \
	CATGMOperatorsInterfaces \
	CATGMAdvancedOperatorsInterfaces \
	CATSGMOperatorsInterfaces \
	CATTopologicalOperatorsLight
	

#elif defined(CATIAV5R16) || defined(CATIAR201)
LINK_WITH= \
	CATNewTopologicalObjects \
	CATTopologicalOperators \
	CATGeometricObjects \
	CATAdvancedTopologicalOpe \
	Mathematics \
	CATAdvancedMathematics \
	CATSurfacicMathematics \
	JS0GROUP \
	CATSurfacicGeoOperators \
	CATSurfacicInfrastructure \
	CATGeometricOperators \
	CATFreeFormOperators  \
	CATCGMGeoMath         \
	CATMathStream \
	CATCloudBasicResources
                   
#else 
LINK_WITH= \
	CATNewTopologicalObjects \
	CATTopologicalOperators \
	CATGeometricObjects \
	CATAdvancedTopologicalOpe \
	Mathematics \
	CATAdvancedMathematics \
	CATSurfacicMathematics \
	JS0GROUP \
	CATSurfacicGeoOperators \
	CATSurfacicInfrastructure \
	CATGeometricOperators \
	CATFreeFormOperators  \
	CATCGMGeoMath         \
	CATMathStream
#endif 

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATSurfacicTopoOperators CATGMModelInterfaces CATGMOperatorsInterfaces CATGMAdvancedOperatorsInterfaces
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

