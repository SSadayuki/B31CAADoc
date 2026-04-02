# COPYRIGHT DASSAULT SYSTEMES 2002
#======================================================================
#
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = SurfaceMachiningInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# Makefile for the shared libray of an interfaces Framework
#
 
BUILT_OBJECT_TYPE=SHARED LIBRARY
 
LINK_WITH= $(LINK_WITH_FOR_IID) JS0GROUP ApplicationFrame CATManufacturingInterfaces

INCLUDED_MODULES = 	SurfaceMachiningItfCPP \
					SurfaceMachiningProIDL  SurfaceMachiningPubIdl 
 
