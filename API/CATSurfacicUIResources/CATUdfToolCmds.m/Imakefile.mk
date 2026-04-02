#@ autoformat 11:01:27
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicComponents          \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATGraph                       \ # Graph                          CATGraph
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    ObjectModeler                  \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATProductStructureInterfaces  \ # ProductStructureInterfaces     CATProductStructureInterfaces
    JS0FM                          \ # System                         JS0FM
    Collections                    \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
    JS0SETT                        \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATAfrNavigator                \ # AfrNavigator                   CATAfrNavigator
    CATAfrSelection                \ # AfrSelection                   CATAfrSelection
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
    CATIAApplicationFrame          \ # CATIAApplicationFrame
    CATInteractiveInterfaces       \ # InteractiveInterfaces
    CATUdfInterfaces               \ # MechanicalCommands
#
#endif
#endif
