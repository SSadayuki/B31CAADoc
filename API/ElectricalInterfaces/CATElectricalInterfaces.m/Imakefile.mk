#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
ElectricalInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# Makefile for the shared libray of an interfaces Framework
#
 
BUILT_OBJECT_TYPE=SHARED LIBRARY
 
#LINK_WITH= JS0GROUP JS0INF NS0SI18N InfItf CATProductStructureInterfaces ON0MAIN
LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP JS0INF NS0SI18N ON0MAIN InfItf CATProductStructureInterfaces

INCLUDED_MODULES = ElectricalItfCPP ElectricalProIDL
 
