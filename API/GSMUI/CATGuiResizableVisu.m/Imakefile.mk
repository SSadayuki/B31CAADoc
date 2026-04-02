#@ autoformat 16:08:07
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    PrtEnv                         \ # CATMmrVisualization            CATMmrVisu
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATConstraintModelerUI         \ # ConstraintModelerUI            CATConstraintModelerUI
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
	CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    YN000MAT                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    JS0ERROR                       \ # System                         JS0GROUP
    JS0SCBAK                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP  
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
#

OS = COMMON
#if defined(CATIAR201)
BUILD=YES
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATAfrSelection                \ # AfrSelection                   CATAfrSelection
	CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
	CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
	CATOmx                         \ # ObjectModelerCollection        CATOmx
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
	CATSysTS                       \ # SystemTS                       CATSysTS
    VisuDialogCtl                  \ # VisuImmersiveDialog            VisuDialog
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	SGInfra                        \ # VisualizationFoundation        SGInfra
#
#else
#if defined(CATIAV5R21)
BUILD=YES
LINK_WITH_V5_ONLY= \
	CATApplicationFrame            \ # ApplicationFrame
    SELECT                         \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATFrrComponents               \ # FreeStyleResources             CATFreeStyleResources
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces                               
    CATViz                         \ #                                
    CATVisualization               \ #                                
#
#endif
#endif
