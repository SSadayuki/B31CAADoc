#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
PCBoardBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  CATApplicationFrame    \
           CATObjectModelerBase   \
           JS0GROUP JS0CORBA   \
           PCBModeler PCBoardUI AS0STARTUP CATVisualization AC0SPBAS \
           CATPCBWkbPCBoardWorkshop CATPartInterfaces \
	   CATMecModInterfaces CD0WIN KnowledgeItf








