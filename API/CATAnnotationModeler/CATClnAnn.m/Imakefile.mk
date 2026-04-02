#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
MechanicalModelerUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
CATAnnotationModelerUUID \
DraftingInterfacesUUID \
NewTopologicalObjectsUUID \
#else
LINK_WITH_FOR_IID =
#endif
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  CATClnSpecs CATClnBase CATObjectSpecsModeler \
                CATObjectModelerBase JS0GROUP CATMechanicalModeler \
                CATDraftingInterfaces CATAnnotationModeler \
                IDV4UTI \
                CATNewTopologicalObjects CATDraftingInfrastructure \
				CATMathematics AC0CATPL CATIAEntity CATDbiClean \
				CATMecModInterfaces CATSketcherInterfaces CATClnCstMod KnowledgeItf CATLiteralFeatures AS0STARTUP \
        DibModelerServices
