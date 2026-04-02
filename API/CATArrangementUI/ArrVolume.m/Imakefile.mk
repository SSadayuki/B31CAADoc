#
# Plant Arrangement Volume 
#
## CATViz added for CATPathElement.h  - ND1 -IR 650148

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=   \
CO0LSTPV CO0LSTST CO0RCINT \
AD0XXBAS AC0XXLNK \
CD0FRAME CD0WIN \
DI0PANV2 DI0STATE DI0GRAF DI0APPLI \
JS03TRA JS0STR JS0CORBA JS0FM JS0LIB0 JS0SCBAK \
NS0S3STR  ON0MAIN VE0MDL \
VE0BASE ON0GREXT \
YN000MFL \
YP00IMPL \
SELECT \
CATAssCommands \
AS0STARTUP SpecsModeler CK0UNIT CK0FEAT \
ArrUtility ArrSelect ArrRoute \
ArrUIInterfaces \
CATArrangementItf \
RouRoutableInterfaces \
ArrArrangementInterfaces CATVisualization CATArrProductServices \
CATArrangementInterfacesUUID KnowledgeItf \
CATPspUUID CATPspUtilities CATDynClash CATNavigatorItf \
CATEsuProductServices CATEsuUtil \
CATViz


#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID CATArrangementUIUUID
#else
LINK_WITH_IID=
#endif

#------------
OS = COMMON
