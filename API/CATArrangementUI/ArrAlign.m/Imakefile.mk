#
# CATArrangementUI ArrAlign
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= \
CO0LSTPV CO0LSTST CO0RCINT CATDMUBase \
AC0SPBAS AD0XXBAS AC0XXLNK \
CD0FRAME CD0WIN CCP_DragDrop \
DI0PANV2 DI0STATE DI0GRAF DI0APPLI \
JS03TRA JS0STR JS0CORBA JS0FM JS0LIB0 JS0SCBAK \
NS0S3STR  ON0FRAME ON0MAIN VE0MDL \
VE0BASE ON0GREXT CK0UNIT \
YN000MFL YP00IMPL VE0GEDIT \
NS0S1MSG \
SpecsModeler AS0STARTUP \
AECReviewItf CATMechanicalModeler CATMecModInterfaces CATLifDictionary \
CATArrangementItf \
CATArrProductServices ArrSelect \
ArrUtility ArrPlane \
ArrUIInterfaces \
RouRoutable RouRoutableInterfaces \
CATPspUUID CATPspUtilities \
CATEsuProductServices \
ArrArrangementInterfaces \
CATArrangementInterfacesUUID KnowledgeItf \
CATEsuUtil CATPspItfCPP \
#ArrIgpAttach

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID CATArrangementUIUUID
#else
LINK_WITH_IID=
#endif

#------------
OS = COMMON
