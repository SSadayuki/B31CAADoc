#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
MechanicalModelerUIUUID \
PCBoardBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  CATApplicationFrame JS0GROUP   \
	   CATMechanicalModelerUI \
            AD0XXBAS
          







