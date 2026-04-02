#
# Plant Arrangement Select 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=   \
CO0LSTPV CO0LSTST CO0RCINT \
AD0XXBAS AC0XXLNK \
CD0FRAME CD0EDIT CD0WIN CCP_DragDrop \
DI0PANV2 DI0STATE DI0GRAF DI0APPLI \
JS03TRA  JS0STR   JS0CORBA JS0FM JS0LIB0 JS0SCBAK \
NS0S3STR ON0MAIN  VE0MDL \
CATVisualization CATViz ON0GREXT YN000MFL YP00IMPL \
AS0STARTUP SpecsModeler SELECT \
PRDWorkshop CK0FEAT \
CATCclInterfaces \
CATArrangementItf \
RouRoutableInterfaces \
ArrArrangementInterfaces ArrUIInterfaces \
CATArrProductServices PartItf \
ArrUtility \
AECReviewItf CATMechanicalModeler CATPspUUID KnowledgeItf CATPspUtilities \
CATNavigatorItf CATDynClash CATEsuProductServices CATEsuUtil \
CATMathStream CATCGMGeoMath CATConstraintModeler CATConstraintModelerItf \
CATMecModInterfaces CATArrangementInterfacesUUID CATPspItfCPP CATPspSelect \
CATGitInterfaces

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID CATArrangementUIUUID
#else
LINK_WITH_IID=
#endif

#------------
OS = COMMON
