#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
PCBoardBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
#
LINK_WITH=$(LINK_WITH_FOR_IID)   CO0LSTPV \
             JS0CORBA AD0XXBAS  NS0S3STR  \
             CO0RCINT CO0LSTPV AC0XXLNK \
	     CO0LSTST AS0STARTUP \
	     CK0FEAT\
	     AC0SPBAS\
	     PCBServices  ProductStructureItf \
	     PCBProIDL PCBModeler \
	     CATVisualization PartItf \
             CATPartInterfaces MecModItf CATMecModInterfaces \
             MF0GEOM YP00IMPL MF0STARTUP CATMathematics  

OS = COMMON
# 
