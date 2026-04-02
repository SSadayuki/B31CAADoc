#
# CATArrangement Product Services 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=   \
Collections \
CATMathematics \
CATObjectModelerBase CATObjectSpecsModeler \
CATLiteralFeatures \
CATMechanicalModeler CATMecModInterfaces \
CATComponentsCatalogs CATCclInterfaces \
CATProductStructure1 ProductStructureProtIDL \
CATVisualization \
CATArrangementItf \
CATArrangementInterfacesUUID \
RouRoutableInterfaces RouRoutable \
CATEsuProductServices CATEsuUtil \
CATPspUUID CATPspUtilities \
ArrArrangementInterfaces KnowledgeItf CATPspItfCPP \
AD0XXBAS AS0STARTUP \
CATGeometricObjects \
CATArrangementItfCPP \

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID
#else
LINK_WITH_IID=
#endif

#------------
OS = COMMON
