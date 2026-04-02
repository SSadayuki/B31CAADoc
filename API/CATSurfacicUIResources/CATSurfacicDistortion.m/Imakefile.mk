#@ autoformat 10:11:17
# COPYRIGHT DASSAULT SYSTEMES 2006
#======================================================================
# Imakefile for module CATSurfacicDistortion.m
#======================================================================
#
#  Aug 2006              Creation: COR
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

# Command creation
#

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
	CATSurfacicDumpController	   \ # CATSurfacicUIResources	      CATSurfacicDumpController
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATCGMGeoMath
    CATMathematics                 \ # Mathematics                    CATMathematics
    MF0GEOM                        \ # MechanicalModeler              CATMechanicalModeler
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    NS0S3STR                       \ # System                         JS0GROUP
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATMMediaPixelImage            \ # MultimediaPixelImage           CATMMediaPixelImage
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATApplicationFrame            \ # ApplicationFrame
    CATViz                         \ # VisualizationBase CATViz
    CATVisualization               \ # Visualization
    CATMathematics                 \ # Mathematics
#
#endif
#endif
