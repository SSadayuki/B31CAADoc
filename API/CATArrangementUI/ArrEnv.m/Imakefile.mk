#
# Plant Arrangement Environment 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=   \
CO0LSTPV CO0LSTST \
AD0XXBAS AC0XXLNK \
CD0FRAME CD0WIN  \
JS03TRA JS0STR JS0CORBA JS0FM JS0LIB0 JS0SCBAK \
NS0S3STR  ON0FRAME ON0MAIN VE0MDL VE0GEDIT \
VE0BASE ON0GREXT \
AS0STARTUP \
SpecsModeler \
ArrUtility ArrUIInterfaces ArrArrangementInterfaces \
CATArrangementItf \
CATEsuUtil \
RouRoutableInterfaces \
CATProductStructureInterfaces CATPrsAutomation \
DI0PANV2 DI0STATE DI0GRAF DI0APPLI YN000MFL YN000MAT \
CK0FEAT CATArrWkbConfiguration CATPspUtilities KnowledgeItf CATMecModInterfaces \


#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID CATArrangementUIUUID
#else
LINK_WITH_IID=
#endif

#------------
OS = COMMON
