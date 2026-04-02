#@ autoformat 10:02:05
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

BUILD = YES

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATAuiHandle                   \ # CATApplicationUIResources      CATAuiHandle
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoUtilities                \ # GSMModel                       CATGmoUtilities
    CATGmoAutoNotifCallBack        \ # GSMModelPrivate                CATGmoAutoNotifCallBack
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    CATGupComponents               \ # GSMUIPrivate                   CATGupComponents
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    YN000MAT                       \ # Mathematics                    CATMathematics
    MecModItfCPP                   \ # MecModInterfaces               MecModItfCPP
    MF0GEOM                        \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    CO0LSTPV                       \ # System                         JS0GROUP
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
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	VisuDialog                     \ # VisuImmersiveDialog            VisuDialog
	UIVCoreTools                   \ # UIVCoreTools                   UIVCoreTools
	CAT3DAppFeatureUIResources     \ # CAT3DAppFeatureUIResources     CAT3DAppFeatureUIResources
	CAT3DAppDesignUIResources      \ # CAT3DAppDesignUIResources      CAT3DAppDesignUIResources
	IntroInfra                     \ # IntrospectionInfrastructure    IntroInfra 
	CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
	ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATViz                         \ # VisualizationBase CATViz
    CATVisualization               \ # Visualization
    CATApplicationFrame            \ # ApplicationFrame
    CATLiteralFeatures             \ # LiteralFeatures
#
#endif
#endif
