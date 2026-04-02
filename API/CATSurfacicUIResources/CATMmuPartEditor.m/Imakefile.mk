#@ autoformat 11:01:27
#
# SHARED LIBRARY CATMmuPartEditor
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATIAApplicationFrame          \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGraph                       \ # Graph                          CATGraph
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATProductStructureInterfaces  \ # ProductStructureInterfaces     CATProductStructureInterfaces
    SketcherItf                    \ # SketcherInterfaces             CATSketcherInterfaces
    JS0FM                          \ # System                         JS0FM
    CO0LSTPV                       \ # System                         JS0GROUP
    CO0LSTST                       \ # System                         JS0GROUP
    CO0RCINT                       \ # System                         JS0GROUP
    JS0CORBA                       \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
    JS0SCBAK                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
    CATSurfacicCommands            \ # CATSurfacicCommands            CATSurfacicCommands 
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATMecModInterfacesUI          \ # MecModInterfacesUI             CATMecModInterfacesUI
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATAfrNavigator                \ # AfrNavigator                   CATAfrNavigator
    CATExpressionEngine            \ # CATExpressionEngine            CATExpressionEngine
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATMmrLiveUI                   \ # CATMmrLiveUI                   CATMmrLiveUI
    CATTemplateInterfaces          \ # CATTemplateInterfaces          CATTemplateInterfaces
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATViz                         \ # VisualizationBase CATViz
    CATVisualization               \ # Visualization
    CATApplicationFrame            \ # ApplicationFrame
    CATInteractiveInterfaces       \ # InteractiveInterfaces
    CATMcoModel                    \ # MechanicalCommands
    CATLiteralFeatures             \ # LiteralFeatures
    CATKnowledgeModeler            \ # KnowledgeModeler
    CATProductStructure1           \ # ProductStructure
#
#endif
#endif
