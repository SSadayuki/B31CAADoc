#@ autoformat 14:06:24
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
    CATAuiHandle                   \ # CATApplicationUIResources      CATAuiHandle
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATSurfacicManipulators        \ # CATSurfacicManipulators        CATSurfacicManipulators
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
	CATGmoInit                     \ # GSMModel                       GSMModelBasic
    CATGmoAutoNotifCallBack        \ # GSMModelPrivate                CATGmoAutoNotifCallBack
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    CATGuiSettings                 \ # GSMUI                          CATGuiSettings
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    CATGupComponents               \ # GSMUIPrivate                   CATGupComponents
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    YN000MAT                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    JS0FM                          \ # System                         JS0FM
    NS0S3STR                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
	CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
	CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
    VisuDialog                     \ # VisuImmersiveDialog            VisuDialog
    UIVCoreTools                   \ # UIVCoreTools                   UIVCoreTools
    SGInfra                        \ # VisualizationFoundation        SGInfra
   CAT3DAppFeatureUIResources     \ # CAT3DAppFeatureUIResources     CAT3DAppFeatureUIResources
  	CAT3DAppDesignUIResources     \ # CAT3DAppDesignUIResources     CAT3DAppDesignUIResources
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	CATLifDictionary               \ # LiteralFeatures                CATLifDictionary
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATViz                         \ #                                
    CATVisualization               \ #                                
    CATApplicationFrame            \ #                                
#
#endif
#endif
