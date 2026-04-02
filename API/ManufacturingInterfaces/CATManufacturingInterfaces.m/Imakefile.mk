#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATViz ManufacturingInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# Makefile for the shared libray of an interfaces Framework
#
 
BUILT_OBJECT_TYPE=SHARED LIBRARY
 
LINK_WITH=$(LINK_WITH_FOR_IID)  CATViz CATInfInterfaces JS0GROUP CATObjectModelerBase ApplicationFrame VE0BASE KnowledgeItf AC0SPBAS ProcessInterfaces

INCLUDED_MODULES = ManufacturingItf  ManufacturingItfCPP ManufacturingPubIdl ManufacturingProIdl
 
