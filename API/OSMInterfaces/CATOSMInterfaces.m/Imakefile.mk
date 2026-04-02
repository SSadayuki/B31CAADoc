#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
OSMInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# Makefile for the shared libray of an interfaces Framework
#
 
BUILT_OBJECT_TYPE=SHARED LIBRARY
 
LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP \
            JS0CORBA \
            InfItf CATInfInterfaces \
						CD0FRAME CATObjectModelerBase

INCLUDED_MODULES =	OSMInterfacesItf \
			OSMInterfacesPubIDL \
			OSMInterfacesProIDL \
			OSMInterfacesItfCPP 

 
