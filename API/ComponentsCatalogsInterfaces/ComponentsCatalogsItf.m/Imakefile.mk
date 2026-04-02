#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
ComponentsCatalogsInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
l#
# Makefile for the shared libray of an interfaces Framework
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP \		#System
	CATInfInterfaces 	#InfInterfaces


#LINK_WITH= JS0GROUP JS0DSPA JS0LOGRP JS0CTYP NS0SI18N \
#           InfItf CATInfInterfaces JS0CORBA JS03TRA JS0ERROR JS0INF  


INCLUDED_MODULES = ComponentsCatalogsPubIDL\
                   CatalogInterfacesProtIDL\
                   ComponentsCatalogsItfCPP\

