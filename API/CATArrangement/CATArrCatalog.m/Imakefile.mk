#
# CATArrangement CATArrCatalog.m 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=   \
Collections CD0NTOG \
CATMathematics \
CATObjectModelerBase CATObjectSpecsModeler \
CATProductStructure1 \
CATLiteralFeatures CATLifSpecs \
CATVisualization \
RouRoutable RouRoutableInterfaces \
CATArrProductServices \
CATArrangementItf \
KnowledgeItf MecModItfCPP

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID
#else
LINK_WITH_IID=
#endif

#------------
OS = COMMON
