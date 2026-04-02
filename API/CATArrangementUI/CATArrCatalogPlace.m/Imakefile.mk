#
# CATArrCatalogPlace.m
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=   \
CD0FRAME CD0WIN \
DI0STATE DI0GRAF DI0APPLI DI0PANV2 \
JS03TRA JS0FM JS0CORBA JS0FM JS0LIB0 JS0SCBAK \
ON0GREXT VE0MDL YN000MFL CATPrsWksPRDWorkshop \
CATLiteralFeatures CK0PARAM \
SpecsModeler SELECT \
CATCclInterfaces \
AS0STARTUP \
CATArrangementItf \
RouRoutableInterfaces ArrArrangementInterfaces \
CATArrWkbConfiguration \
ArrUIInterfaces CATArrProductServices \
ArrSelect ArrUtility  CATPspUtilities CATEsuUtil KnowledgeItf

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID CATArrangementUIUUID
#else
LINK_WITH_IID=
#endif

#------------
OS = COMMON
