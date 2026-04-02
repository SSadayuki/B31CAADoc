#
# Plant Arrangement Settings 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= \
AD0XXBAS DI0PANV2 JS0FM NS0S1MSG OM0EDPRO \
SpecsModeler AS0STARTUP CATViz \
CD0FRAME CK0UNIT CK0FEAT \
CATVisualization CATDlgStandard CATMathematics CATMathStream \
ArrUtility \
RouRoutableInterfaces \
CATPspUtilities \
CATPspUUID  CATArrangementItfCPP ArrUIInterfaces \
KnowledgeItf CATFileMenu CATEsuProductServices \
ArrAlign RouRoutable


#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementInterfacesUUID CATRoutableUUID CATArrangementUUID CATArrangementUIUUID
#else
LINK_WITH_IID=
#endif

#------------
OS = COMMON
