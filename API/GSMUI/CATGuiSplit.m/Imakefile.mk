#@ autoformat 14:06:24
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

BUILD = YES

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATGSMVersionning              \ # CATGSMTopoServices             CATGSMVersionning
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicSharedItf           \ # CATSurfacicSharedItf           CATSurfacicSharedItf
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoInterfaces               \ # GSMModel                       CATGmoInterfaces
    CATGmoInit                     \ # GSMModel                       GSMModelBasic
    CATGmoAutoNotifCallBack        \ # GSMModelPrivate                CATGmoAutoNotifCallBack
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    CATGuiSettings                 \ # GSMUI                          CATGuiSettings
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    CATGupComponents               \ # GSMUIPrivate                   CATGupComponents
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    CATLifSpecs                    \ # KnowledgeInterfaces            KnowledgeItf
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    MF0GEOM                        \ # MechanicalModeler              CATMechanicalModeler
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    CO0LSTPV                       \ # System                         JS0GROUP
    JS0SCBAK                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
	YN000MAT                       \ # Mathematics                    CATMathematics

#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATMmrVisu                     \ # CATMmrVisualization            CATMmrVisu
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATSysTS                       \ # SystemTS                       CATSysTS
    CATVisController               \ # VisualizationController        CATVisController
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
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    CATViz                         \ #                                
    CATVisualization               \ #                                
    CATApplicationFrame            \ #                                
#
#endif
#endif
