#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATDfiUUID \
CATVisUUID \
DraftingInfrastructureUIUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
SketcherInterfacesUUID \
SketcherToolsUIUUID \
LiteralFeaturesUUID \
SystemUUID \
CATDraftingBaseInfrastructure
#else
LINK_WITH_FOR_IID =
#endif

#=========================================================================================
# COPYRIGHT DASSAULT SYSTEMES 2003
#=========================================================================================
# Imakefile du module CATDfuDialogs
#=========================================================================================

BUILT_OBJECT_TYPE = NONE

LINK_WITH=$(LINK_WITH_FOR_IID) JS0GROUP CATDraftingInterfaces

OS = IRIX
LOCAL_CCFLAGS = -woff 3115
