#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATMatInterfacesUUID \
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  CATMatInterfaces \
                                CATRmaInterfaces \
                                CATMatModel \
                                CATApplicationFrame \
                                JS0GROUP \
                                AC0SPBAS \
                                CD0AUTO \
								CATVisualization \
								CATLiteralFeatures KnowledgeItf \
								CATObjectModelerBase
#                               CATProductStructure1 
                                

