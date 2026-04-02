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
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 2000
#=========================================================================================
# Imakefile du module CATDraftingInfrastructureUI
#=========================================================================================
# 28/09/2000    jbb     Creation
#=========================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

ALIASES_ON_IMPORT = CATDraftingBaseInfraUI CATDraftingInfrastructureUI

COMMON_LINK_WITH=$(LINK_WITH_FOR_IID) 	JS0GROUP CATDraftingInterfaces CATSktAssistant CATSktSettings \
            CATSketcherInterfaces CATSketcherVisu CATDraftingInfrastructure CATSketcherToolsUI \
            CATMathematics CATGviUtilities CATObjectSpecsModeler CATVisualization CATViz CATViz \
            CATApplicationFrame CATMechanicalModelerUI CATMmiUUID CATObjectModelerBase  \
            CATMecModInterfaces CATDfiUUID CATInteractiveInterfaces DraftingInfrastructureUIUUID \
            JS0FM CATLiteralFeatures KnowledgeItf CATIAApplicationFrame ApplicationFrame CATGraph \
			      JS0CORBA ON0GREXT AC0SPBAS ON0FRAME DI0PANV2 CD0STWIN DI0STATE CATCafAutostart AC0XXLNK \
			      CATAutoItf CATInfInterfaces SystemUUID CATMechanicalModeler SketcherItfInfra  \
            CATPrt CATPrint CATFileMenu CATObjectModelerItf CATDialogEngine \
						CATDraftingBaseInfraUI DraftingBaseInfrastructureUIUUID CATDraftingBaseInfra


INCLUDED_MODULES = CATDfuDialogs	\
				   CATDraftingVB

OS = Windows_NT
LINK_WITH = $(COMMON_LINK_WITH)

OS = AIX
LINK_WITH = $(COMMON_LINK_WITH)

OS = HP-UX
LINK_WITH = $(COMMON_LINK_WITH)

OS = SunOS
LINK_WITH = $(COMMON_LINK_WITH)

OS = IRIX
LINK_WITH = $(COMMON_LINK_WITH)
LOCAL_CCFLAGS = -woff 3115

OS = Linux
LINK_WITH = $(COMMON_LINK_WITH)

