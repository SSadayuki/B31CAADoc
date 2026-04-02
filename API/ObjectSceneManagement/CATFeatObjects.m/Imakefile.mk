#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATIAApplicationFrameUUID \
CATVisUUID \
OSMInterfacesUUID \
ObjectModelerBaseUUID \
ObjectSceneManagementUUID \
ObjectSpecsModelerUUID \
ProductStructureUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = Scene

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0CORBA JS0FM JS0SCBAK JS0STR JS03TRA JS0LIB0 JS0ERROR\
            AD0XXBAS AC0XXLNK VE0BASE NS0S3STR NS0S1MSG CD0WIN CD0FRAME\
            DI0PANV2 YN000MFL AS0STARTUP SELECT CATGraphicProperties\
            CATObjectSpecsModeler CATObjectModelerCATIA Search\
            OSMInterfacesItf ProductStructureItf InfItf CATPrsScene \
            CATCclInterfaces CATNavigatorItf CATViz CATLiteralFeatures CATClnSpecs CATLifRelations \
            CATNavigator2Itf CATMathStream KnowledgeItf
