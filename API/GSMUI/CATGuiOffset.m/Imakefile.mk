#@ autoformat 10:02:05
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATSurfacicManipulators	       \ # CATSurfacicManipulators		  CATSurfacicManipulators
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATAuiHandle                   \ # CATApplicationUIResources      CATAuiHandle
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    CATFaiItf                      \ # FreeStyleAnalysisInterface     CATFaiItf
    CATFrrComponents               \ # FreeStyleResources             CATFreeStyleResources
    CATGMAdvancedOperatorsInterfaces \ # GMAdvancedOperatorsInterfaces  CATGMAdvancedOperatorsInterfaces
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoInit                     \ # GSMModel                       GSMModelBasic
    CATGmoInterfaces               \ # GSMModel                       CATGmoInterfaces
    CATGmoAutoNotifCallBack        \ # GSMModelPrivate                CATGmoAutoNotifCallBack
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    CATGuiSettings                 \ # GSMUI                          CATGuiSettings
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    CATGupComponents               \ # GSMUIPrivate                   CATGupComponents
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    YN000MAT                       \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    CO0LSTPV                       \ # System                         JS0GROUP
    JS0CORBA                       \ # System                         JS0GROUP
    JS0ERROR                       \ # System                         JS0GROUP
    JS0SCBAK                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation_Base          \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
    CAT3DAppDesignUIResources      \ # CAT3DAppDesignUIResources      CAT3DAppDesignUI
    CAT3DAppFeatureUIResources     \ # CAT3DAppFeatureUIResources     CAT3DAppFeatureUIResources
    VisuDialog                     \ # VisuDialog                     VisuImmersiveDialog
    UIVCoreTools                   \ # UIVCoreTools                   UIVCoreTools
    IntroInfra                     \ # IntrospectionInfrastructure    IntroInfra
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    SceneGraphManager              \ # SGManager                      SceneGraphManager
    CATSysTS                       \ # SystemTS                       CATSysTS
    SGInfra                        \ # VisualizationFoundation        SGInfra
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	CATLifDictionary               \ # LiteralFeatures                CATLifDictionary
    CATViz                         \ # VisualizationBase CATViz
    CATVisualization               \ # Visualization
    CATApplicationFrame            \ # ApplicationFrame
#
#endif
#endif
