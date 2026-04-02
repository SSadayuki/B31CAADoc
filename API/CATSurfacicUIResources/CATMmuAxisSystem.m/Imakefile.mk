#@ autoformat 13:09:27
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
    MechanicalModelerUUID          \ # MechanicalModeler              MechanicalModelerUUID
    ObjectModelerBaseUUID          \ # ObjectModelerBase              CATObjectModelerBase
    ObjectSpecsModelerUUID         \ # ObjectSpecsModeler             ObjectSpecsModelerUUID
#
#else
LINK_WITH_FOR_IID =
#
#endif
#
# Axis System Interactive commandes & services
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_FOR_IID)           \
    $(LINK_WITH_OS_DEPENDENT)      \
    CATGraphicProperties           \ # CATGraphicProperties           CATGraphicProperties
    SELECT                         \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATMmrAxisSystem               \ # CATSurfacicResources           CATMmrAxisSystem
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
#

LINK_WITH_OS_DEPENDENT= \
    CATMmrAutomation               \ # CATMmrAutomation               CATMmrAutomation
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrComponentsModel          \ # AfrComponentsModel             CATAfrComponentsModel
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATAfrSelection                \ # AfrSelection                   CATAfrSelection
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATMmrAutomationInterfaces     \ # CATMmrAutomationInterfaces     CATMmrAutomationInterfaces
    CATMmrLiveUI                   \ # CATMmrLiveUI                   CATMmrLiveUI
    PrtProperties                  \ # CATMmrVisualization            CATMmrVisu
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
    KnowledgeIDLItf                \ # KnowledgeIDLItf                KnowledgeIDLItf
    CATPLMModeler3DInterfaces      \ # PLMModelerBaseInterfaces       CATPLMModeler3DInterfaces
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	CATFeatureCommands             \ # FeatureCommands                CATFeatureCommands
    CATApplicationFrame            \ # ApplicationFrame
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    CATProductStructure1           \ # ProductStructure
    CATVisualization               \ # Visualization
    CATViz                         \ # VisualizationBase
#
#endif
#endif
