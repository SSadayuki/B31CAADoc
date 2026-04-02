#
# CATArrangementUI ArrUtility
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=   \
CO0LSTPV CO0LSTST CO0RCINT \
AC0SPBAS AD0XXBAS AC0XXLNK AS0STARTUP \
CD0FRAME CD0WIN \
DI0PANV2 CATDialogEngine \
JS0SETT JS03TRA JS0STR JS0CORBA JS0FM JS0LIB0 JS0SCBAK JS0DSPA \
NS0S3STR ON0MAIN VE0MDL \
VE0BASE ON0GREXT \
YN000MFL YP00IMPL \
CATProductStructureInterfaces \
InfItf \
CATSketcherInterfaces \
CK0UNIT CK0FEAT \
RouRoutableInterfaces \
RouRoutable \
ArrArrangementInterfaces ArrUIInterfaces \
CATArrProductServices CATArrPartPlace \
CATArrangementItf CATGraph \
CATArrWkbConfiguration \
CATArrangementInterfacesUUID CATPspUtilities CATPspUUID \
CATEsuProductServices CATEsuUtil \
CATDMUBase CATViz CATMathStream CATCGMGeoMath KnowledgeItf \
AECReviewItf CATConstraintModelerItf SELECT CATPspItfCPP \
ProcessInterfaces \
AECBUtilities AC0ITEMS AC0CATPL \
CATViz CD0WIN AS0STARTUP CATVisualization \
RouRoutableVisu AC0DOMAIN MecModItfCPP \
CATInteractiveInterfaces CATGitInterfaces PartItf GSMItf 

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID CATArrangementUIUUID
#else
LINK_WITH_IID=
#endif

#------------
OS = COMMON
