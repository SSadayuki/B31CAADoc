#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
PrismaticMachiningInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# Makefile for the shared libray of an interfaces Framework
#
 
BUILT_OBJECT_TYPE=SHARED LIBRARY
 
LINK_WITH= $(LINK_WITH_FOR_IID) JS0GROUP ProcessInterfaces CATManufacturingInterfaces 

INCLUDED_MODULES = PrismaticItf PrismaticProIDL PrismaticPubIDL PrismaticMachiningItfCpp
 
