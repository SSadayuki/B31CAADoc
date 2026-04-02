#@ autoformat 16:08:07
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

#ifdef CATIAV5R21
BUILD=NO
#endif

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
	CATAuiHandle                   \ # CATApplicationUIResources      CATAuiHandle
	CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
	CATFrrComponents               \ # FreeStyleResources             CATFreeStyleResources
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
	YN000MAT                       \ # Mathematics                    CATMathematics
	CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    NS0S3STR                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
	CATVisController               \ # VisualizationController        CATVisController
    SGInfra                        \ # VisualizationFoundation        SGInfra
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
	CAT3DAppFeatureUIResources     \ # CAT3DAppFeatureUIResources     CAT3DAppFeatureUIResources
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
	IntroInfra                     \ # IntrospectionInfrastructure    IntroInfra
	UIVCoreTools                   \ # UIVCoreTools                   UIVCoreTools
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	VisuDialog                     \ # VisuImmersiveDialog            VisuDialog
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \              
#
#endif
#endif
