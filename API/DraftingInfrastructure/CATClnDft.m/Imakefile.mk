#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATDfiUUID \
ObjectSpecsModelerUUID \
ApplicationFrameUUID \
ObjectModelerBaseUUID \
SystemUUID \
#else
LINK_WITH_FOR_IID =
#endif
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) 	JS0GROUP CATDraftingInterfaces CATObjectSpecsModeler \
                                CATClnBase SystemUUID CATClnSpecs CATObjectModelerBase CATDraftingInfrastructure\
                                CATVisualization CATMechanicalModeler CATMecModInterfaces CATMmiUUID \
			KnowledgeItfCPP CATSketcherInterfaces CATDraftingBaseInfra CATDbiClean


OS = IRIX
LOCAL_CCFLAGS = -woff 3115
