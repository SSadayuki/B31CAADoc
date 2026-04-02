#
# Makefile for the public idl files
#
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

SOURCES_PATH=PublicInterfaces
COMPILATION_IDL=YES

LINK_WITH=$(LINK_WITH_FOR_IID) JS0GROUP JS0FM MecModItf InfItf KnowledgeItf


                                                                              
