#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATDfiUUID \
SystemUUID \
InteractiveInterfacesUUID \
ObjectSpecsModelerUUID
#else
LINK_WITH_FOR_IID =
#endif

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) CK0FEAT JS0GROUP JS0FM InfItf MecModItf AD0XXBAS CATMathematics ApplicationFrame KnowledgeItf SystemUUID CATGeometricObjects CATObjectSpecsModeler CATInteractiveInterfaces CATVisualization CATObjectModelerItf
 
INCLUDED_MODULES=DraftingItf DraftingItfCPP DraftingProIDL DraftingPubIDL
