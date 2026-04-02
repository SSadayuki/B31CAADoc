#@ autoformat 13:09:27

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    VE0GEDIT                       \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicComponents          \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATFaiItf                      \ # FreeStyleAnalysisInterface     CATFaiItf
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATKnowledgeModeler            \ # KnowledgeModeler               CATKnowledgeModeler
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalCommands          \ # MechanicalModelerUI            CATMechanicalCommands
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSkmWireframe                \ # SketcherModeler                CATSkmWireframe
    CATSketcherToolsUI             \ # SketcherToolsUI                CATSketcherToolsUI
    CATSktAssistant                \ # SketcherToolsUI                CATSktAssistant
    CATSktSettings                 \ # SketcherToolsUI                CATSktSettings
    CATSktToolbox                  \ # SketcherToolsUI                CATSktToolbox
    CATSkuBase                     \ # SketcherUI                     CATSkuBase
    CATSketcherVisu                \ # SketcherVisu                   CATSketcherVisu
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces 
   
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrComponentsModel          \ # AfrComponentsModel             CATAfrComponentsModel
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATAfrNavigator                \ # AfrNavigator                   CATAfrNavigator
    CATAfrPalette                  \ # AfrStandard                    CATAfrPalette
    CAT3DDimVisuAdpt               \ # CAT3DDimVisuAdapter            CAT3DDimVisuAdpt
    CAT3DDimVisuIntf               \ # CAT3DDimVisuInterfaces         CAT3DDimVisuIntf
    CATAnnotationPresentation      \ # CATAnnotationPresentation      CATAnnotationPresentation
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATMmrLiveUI                   \ # CATMmrLiveUI                   CATMmrLiveUI
    CATRulerDialog                 \ # CATRulerUI                     CATRulerUI
    CATSktToolsUseItf1             \ # CATSketcherToolsUseItf         CATSktToolsUseItf1
    CATSketcherUseItf              \ # CATSketcherUseItf              CATSketcherUseItf
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
    CATBarView                     \ # CATView                        CATView
    CATViewItf                     \ # CATView                        CATView
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
    IntroInfra                     \ # IntrospectionInfrastructure    IntroInfra
    CATKnowledgeModelerItf         \ # KnowledgeModelerItf            CATKnowledgeModelerItf
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATSktToolbox                  \ # SketcherToolsUI                CATSktToolbox
    CATSkuAfrComponents            \ # SketcherUI                     CATSkuAfrComponents
    VisuDialog                     \ # VisuImmersiveDialog            VisuDialog
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	UIVCoreTools                   \ # UIVCoreTools                   UIVCoreTools
    CATMecModLiveInterfacesUUID    \ # MecModLiveInterfaces           CATMecModLiveInterfacesUUID          
    CATMathStream                   \ # CATMathStream                 CATMathStream            
#

#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATViz                         \ #                                
    CATVisualization               \ #                                
    CATApplicationFrame            \ #      
    CATMmiUUID                     \ #   
#
#endif
#endif
