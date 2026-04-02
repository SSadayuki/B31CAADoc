#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAApplicationFrameUUID \
CATApplicationFrameUUID \
InteractiveInterfacesUUID \
FeatureCommandsUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE= SHARED LIBRARY

INCLUDED_MODULES = CATFecLayersAndFilters

# suppress CD0FRAME CATLayersAndFilters

LINK_WITH= $(LINK_WITH_FOR_IID) JS0GROUP Collections AC0CATPL JS0CORBA ObjectModeler\
           CATIAApplicationFrame CATApplicationFrame CATVisualization\
           CATInteractiveInterfaces CATObjectModelerBase CATOmbCluster CATOmiClusterItf CATViz \
           CATFileMenu \
           CATXMLParserItf 

