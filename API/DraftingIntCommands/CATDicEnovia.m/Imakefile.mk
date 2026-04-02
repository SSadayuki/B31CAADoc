#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATDfiUUID \
CATIAApplicationFrameUUID \
CATVisUUID \
ComponentsCatalogsUUID \
DraftingFeatureUUID \
DraftingIntCommandsUUID \
DraftingUIUUID \
GeometricObjectsUUID \
LiteralFeaturesUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
SketcherInterfacesUUID \
SketcherToolsUIUUID \
SystemUUID \
PartInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#=========================================================================================
#
# module temporaire pour eviter que les pb de lib Enovia impacte le
# module principal CATDraftingIntCommands
#
# A terme, sortir ce module de DraftingIntCommands pour le mettre dans un FW specifique Enovia
#
#=========================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)     \
            JS0GROUP               \
            JS0FM                  \
            CATObjectSpecsModeler  \
            CATObjectModelerBase   \
			CATDialogEngine        \
			CATDraftingInterfaces  \
			CATProductStructure1   \
			CATDraftingInfrastructureUI \
			CATDraftingInfrastructure \
	        CATSketcherInterfaces  \
#ifndef CATIAR201
			CATEnoviaV5AdapterBase
#endif





