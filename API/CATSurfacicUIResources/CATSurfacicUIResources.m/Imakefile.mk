#@ autoformat 16:08:07
#@ autoformat 14:06:24
#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
INCLUDED_MODULES_V6_ONLY=

INCLUDED_MODULES = \
    CATSurfacicComponents       \
    CATGuiRep \
	CATSurfacicUIUserSettings \
    $(INCLUDED_MODULES_V6_ONLY) \
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATAuiHandle                   \ # CATApplicationUIResources      CATAuiHandle
    CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMTopoServices
    CATGraphicProperties           \ # CATGraphicProperties           CATGraphicProperties
    CATIAApplicationFrame          \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    PrtEnv                         \ # CATMmrVisualization            CATMmrVisu
    CATSurfacicCommands            \ # CATSurfacicCommands            CATSurfacicCommands
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicInterfacesUUID      \ # CATSurfacicInterfaces          CATSurfacicInterfacesUUID
    CATSurfacicManipulators        \ # CATSurfacicManipulators        CATSurfacicManipulators
    CATSurfResMecMod               \ # CATSurfacicResources           CATSurfResMecMod
    CATSurfResError                \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacic2DMode              \ # CATSurfacicUIResources         CATSurfacic2DMode
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
    CATViewItf                     \ # CATView                        CATView
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    CATDlgStandard                 \ # Dialog                         CATDlgStandard
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATFaiItf                      \ # FreeStyleAnalysisInterface     CATFaiItf
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    VE0GRPH2                       \ # Graph                          CATGraph
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CK0FEAT                        \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    MMInterfaces                   \ # MechanicalModeler              CATMechanicalModeler
    CATMmrVisProperties            \ # MechanicalModeler              CATMmrVisProperties
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATProductStructureInterfaces  \ # ProductStructureInterfaces     CATProductStructureInterfaces
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSkmWireframe                \ # SketcherModeler                CATSkmWireframe
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    JS0ERROR                       \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
    SystemUUID                     \ # System                         SystemUUID
    CATSysTS                       \ # SystemTS                       CATSysTS
    CATLiteralsEditor              \ # LiteralsEditor					CATLiteralsEditor 
#


OS = COMMON
#if defined(CATIAR201)

INCLUDED_MODULES_V6_ONLY=CATSurfacicLiveEdition CATSurfacicComponentsV6Only CATPsdVisuFilterManager 

LINK_WITH_V6_ONLY= \
    CATAfrComponentsModel          \ # AfrComponentsModel             CATAfrComponentsModel
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATAfrNavigator                \ # AfrNavigator                   CATAfrNavigator
    CATAfrProperties               \ # AfrProperties                  CATAfrProperties
    CATAfrSelection                \ # AfrSelection                   CATAfrSelection
    CATAfrPalette                  \ # AfrStandard                    CATAfrPalette
    CATAfrProgressTask             \ # AfrStandard                    CATAfrProgressTask
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATMmrLiveUI                   \ # CATMmrLiveUI                   CATMmrLiveUI
    CATTemplateInterfaces          \ # CATTemplateInterfaces          CATTemplateInterfaces
    CATBarView                     \ # CATView                        CATView
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
	GN0GRAPH                       \ # GenericNaming                  CATGngGraph
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    IntroInfra                     \ # IntrospectionInfrastructure    IntroInfra
    CATLifSpecs                    \ # KnowledgeInterfaces            KnowledgeItf
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
    CATMMediaPixelImage            \ # MultimediaPixelImage           CATMMediaPixelImage
    CATOmx                         \ # ObjectModelerCollection        CATOmx
    CATPLMModeler3DInterfaces      \ # PLMModelerBaseInterfaces       CATPLMModelerBaseInterfaces
    CATVisCommands                 \ # VisualizationCommands          CATVisCommands
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	SGInfra                        \ # VisualizationFoundation        SGInfra
    SceneGraphManager              \ # SGManager                      SceneGraphManager
	VisuDialog                     \ # VisuImmersiveDialog            VisuDialog
	ECMAScriptKernel               \ # ECMAScriptEngine               ECMAScriptKernel
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATCloudEditorInterfaces       \ # CATCloudEditorInterfaces       CATCloudEditorInterfaces
    CATSurfacicCommands            \ # CATSurfacicCommands            CATSurfacicCommands
    CATGmoInterfaces               \ # GSMModel                       CATGmoInterfaces
    CATMcoModel                    \ # MechanicalCommands             CATMcoModel
    AC0XXLNK                       \ # ObjectModelerBase              CATObjectModelerBase
    CATViz                         \ #                                
    CATVisualization               \ #                                
    CATApplicationFrame            \ #                                
    CATFecServices                 \ #                                
#
ALIASES_ON_IMPORT = CATSurfacicUIResources CATSurfResMecMod CATSurfacicResourcesInit
#endif
#endif
