#@ autoformat 13:09:27

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATGraphicProperties           \ # CATGraphicProperties           CATGraphicProperties
    CATIAApplicationFrame          \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    SketcherPubIDL                 \ # CATSketcherIDLItf              SketcherPubIDL
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    CATInfInterfaces               \ # InfInterfaces                  CATInfInterfaces
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLifServices                 \ # KnowledgeModeler               CATKnowledgeModeler
    CK0PARAM                       \ # LiteralsEditor                 CATLiteralsEditor
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMmrReplace                  \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerLive       \ # MechanicalModelerLive          CATMechanicalModelerLive
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSkm2DLayout                 \ # SketcherModeler                CATSkm2DLayout
    CATSkmWireframe                \ # SketcherModeler                CATSkmWireframe
    CATSketcherToolsUI             \ # SketcherToolsUI                CATSketcherToolsUI
    CATSktAssistant                \ # SketcherToolsUI                CATSktAssistant
    CATSktSettings                 \ # SketcherToolsUI                CATSktSettings
    CATSktToolbox                  \ # SketcherToolsUI                CATSktToolbox
    CATSktTransient                \ # SketcherToolsUI                CATSktTransient
    CATSketcherVisu                \ # SketcherVisu                   CATSketcherVisu
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
	CATMechanicalCommands          \ # MechanicalModelerUI            CATMechanicalCommands
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrComponentsModel          \ # AfrComponentsModel             CATAfrComponentsModel
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATAfrNavigator                \ # AfrNavigator                   CATAfrNavigator
    CATAfrSelection                \ # AfrSelection                   CATAfrSelection
    CATCcpDnDBase                  \ # CATCcpDnDBase                  CATCcpDnDBase
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATMmrAutomationInterfaces     \ # CATMmrAutomationInterfaces     CATMmrAutomationInterfaces
    CATPLMUIEditability            \ # CATPLMMngtBase                 CATPLMUIEditability
    CATPLMNewDlg                   \ # CATPLMUIImpl                   CATPLMNewDlg
    CATPLMNewManagement            \ # CATPLMUIImpl                   CATPLMNewManagement
    CATPLMUIInterfaces             \ # CATPLMUIInterfaces             CATPLMUIInterfaces
    CATRulerDialog                 \ # CATRulerUI                     CATRulerUI
    CATSktToolsUseItf1             \ # CATSketcherToolsUseItf         CATSktToolsUseItf1
    CATSketcherUseItf              \ # CATSketcherUseItf              CATSketcherUseItf
    CATTPSItfCPPBase               \ # CATTPSInterfacesBase           CATTPSItfBase
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
    IntroInfra                     \ # IntrospectionInfrastructure    IntroInfra
    CATKnowledgeModelerItf         \ # KnowledgeModelerItf            CATKnowledgeModelerItf
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
    CATMMediaPixelImage            \ # MultimediaPixelImage           CATMMediaPixelImage
    PLMCatalogItf                  \ # PLMCatalogInterfaces           PLMCatalogItf
    CATPrint                       \ # Print                          CATPrint
    CATSkuCommands                 \ # SketcherUI                     CATSkuCommands
    UIVCoreTools                   \ # UIVCoreTools                   UIVCoreTools
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
    CATMecModLiveInterfacesUUID    \ # MecModLiveInterfaces           CATMecModLiveInterfacesUUID
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATTPSItfCPP                   \ # CATTPSInterfaces               CATTPSItf
    MMUIDimVisu                    \ # ConstraintModelerUI            MMUIDimVisu
    CATFileMenu                    \ # FileMenu                       CATFileMenu
    CATLifDictionary               \ # LiteralFeatures                CATLiteralFeatures
    AC0XXLNK                       \ # ObjectModelerBase              CATObjectModelerBase
    CATSkuCommands                 \ # SketcherUI                     CATSkuCommands
    CATViz                         \ #                                
    CATVisualization               \ #                                
    CATApplicationFrame            \ #                                
    CATFecServices                 \ #                                
    CATMmiUUID                     \ #   
#
#endif
#endif



