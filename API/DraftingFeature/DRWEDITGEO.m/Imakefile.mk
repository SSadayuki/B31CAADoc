#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATDfiUUID \
CATIAApplicationFrameUUID \
CATVisUUID \
CATMmiUUID \
DraftingInfrastructureUIUUID \
GeometricObjectsUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
SketcherInterfacesUUID \
SystemUUID \
#else
LINK_WITH_FOR_IID =
#endif

# module DRWEDITGEO -> a migrer dans DraftingBaseInfraStucture

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0FM JS0GROUP \
            DI0PANV2 CATDialogEngine \
            CATVisualization  CATViz  CATGraphicProperties \
            CATMathematics CATAdvancedMathematics  \
            CATObjectModelerBase CATObjectModelerCATIA CATObjectSpecsModeler \
            CATSketcherInterfaces CATSketcherToolsUI CATSktAssistant \
            CATDraftingInterfaces CATDraftingInfrastructure \
			CATInteractiveInterfaces \
			CATObjectModelerItf CATPDMBase
			
