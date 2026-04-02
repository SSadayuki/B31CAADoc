#@ autoformat 06:08:31
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATApplicationFrame            \ # ApplicationFrame               CATApplicationFrame
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATCclInterfaces               \ # ComponentsCatalogsInterfaces   CATCclInterfaces
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATFileMenu                    \ # FileMenu                       CATFileMenu
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    CATGraph                       \ # Graph                          CATGraph
    CATInfInterfaces               \ # InfInterfaces                  CATInfInterfaces
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATLiteralsEditor              \ # LiteralsEditor                 CATLiteralsEditor
    YN000MAT                       \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATUdfInterfaces               \ # MechanicalCommands             CATUdfInterfaces
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    ObjectModeler                  \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATProductStructure1           \ # ProductStructure               CATProductStructure1
    CATPrsAutomation               \ # ProductStructure               CATPrsAutomation
    CATProductStructureInterfaces  \ # ProductStructureInterfaces     CATProductStructureInterfaces
    JS0FM                          \ # System                         JS0FM
    Collections                    \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
    JS0SETT                        \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
    CATVisualization               \ # Visualization                  CATVisualization
    CATViz                         \ # VisualizationBase              CATViz
#


OS = COMMON
#if defined(CATIAR201)
BUILD=NO
LINK_WITH_V6_ONLY= \
#
#else
#if defined(CATIAV5R21)
BUILD=YES
LINK_WITH_V5_ONLY= \
#
#endif
#endif
