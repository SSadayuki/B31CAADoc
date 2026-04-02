BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH= \
    CATLayersAndFilters            \ #CATIAApplicationFrame           CATLayersAndFilters
    CATSketcherUseItf              \ # CATSketcherUseItf              CATSketcherUseItf
    CATDlgStandard                 \ # Dialog                         CATDlgStandard
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSketcherToolsUI             \ # SketcherToolsUI                CATSketcherToolsUI
    CATSktAssistant                \ # SketcherToolsUI                CATSktAssistant
    CATSkuBase                     \ # SketcherUI                     CATSkuBase
    CATSkuCommands                 \ # SketcherUI                     CATSkuCommands
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    SystemUUID                     \ # System                         SystemUUID
    CATSysTS                       \ # SystemTS                       CATSysTS
    CATVisualization               \ # VisualizationInterfaces        CATVisItf
    CD0FRAME                       \ # ApplicationFrame               CD0FRAME
    CATCclInterfaces               \ # ComponentsCatalogsInterfaces   CATCclInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLifDictionary               \ # LiteralFeatures                CATLifDictionary


INCLUDED_MODULES = CATDscInstantiateComponent \
                   DraftingSktBaseCommandsItfCPP \
