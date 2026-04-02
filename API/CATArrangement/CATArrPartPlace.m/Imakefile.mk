#
# CATArrangement Part Place 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=   \
Collections \
CATMathematics \
CATObjectModelerBase CATObjectSpecsModeler \
CATMecModInterfaces \
CATProductStructure1 ProductStructureProtIDL \
CATArrangementItf \
RouRoutableInterfaces RouRoutable \
ArrArrangementInterfaces \
CATEsuUtil CATEsuProductServices \
CATPspUUID CATPspUtilities \
CATArrProductServices

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID
#else
LINK_WITH_IID=
#endif

#------------
OS = COMMON
