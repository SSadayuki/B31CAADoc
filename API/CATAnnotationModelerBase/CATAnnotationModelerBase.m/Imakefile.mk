#@ autoformat 11:12:06

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = \
    CATIAApplicationFrame          \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATDraftingBaseInfra           \ # DraftingBaseInfrastructure     DraftingBaseInfrastructure
    CATDraftingBaseInfraUI         \ # DraftingBaseInfrastructureUI   DraftingBaseInfrastructureUI
    CATAnnotationInterfaces        \ # CATAnnotationInterfaces        CATAnnotationInterfaces
    CATDraftingInterfaces          \ # DraftingInterfaces             CATDraftingInterfaces
    DraftingItfCPP                 \ # DraftingInterfaces             DraftingItfCPP
    CATGraphicProperties           \ # CATGraphicProperties           CATGraphicProperties
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPrint                       \ # Print                          CATPrint
    CATPrtBase                     \ # PrintBase                      CATPrt
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    SystemUUID                     \ # System                         SystemUUID
    CATVisualization               \
    CATLayoutInfraCatalog
#
INCLUDED_MODULES = \
    CATAnnInfraBase \
    CATAnnFrame \
    CATAnnIndicator \
#
