#
# CATArrangementUI ArrRoute
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=   \
CO0LSTPV CO0LSTST CO0RCINT \
AC0SPBAS AD0XXBAS AC0XXLNK \
AS0STARTUP \
CD0FRAME CD0WIN CCP_DragDrop \
DI0PANV2 DI0STATE DI0GRAF DI0APPLI \
JS03TRA JS0STR JS0CORBA JS0FM JS0LIB0 JS0SCBAK \
NS0S3STR  ON0FRAME ON0MAIN VE0MDL \
VE0BASE ON0GREXT \
YN000MFL YP00IMPL VE0GEDIT \
CATProductStructureInterfaces \
CATInfInterfaces \
CATArrangementItf \
RouRoutableInterfaces RouRoutable \
CATArrangementInterfacesUUID \
ArrArrangement \ 
ArrArrangementInterfaces \
ArrUIInterfaces PartItf \
ArrUtility \
CATArrWkbConfiguration \
ArrSelect ArrPlane \
AECReviewItf \
CATArrProductServices \
CK0UNIT CK0FEAT \ 
CATPspUUID CATPspUtilities \
CATDMUBase \ 
CATEsuUI \
CATGitInterfaces CATGeometricObjects CATMechanicalModeler KnowledgeItf \
CATEsuUtil CATEsuProductServices ArrAlign CATFileMenu CATNavigatorItf \
AECBUtilities RouRoutableVisu CATSketcherInterfaces \
AS0SEL \

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATRoutableUUID CATArrangementUUID CATArrangementUIUUID
#else
LINK_WITH_IID=
#endif

#------------
OS = COMMON
