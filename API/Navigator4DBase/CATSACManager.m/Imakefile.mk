#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
ObjectModelerBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)    \
			JS0CORBA              \
			JS0FM                 \
            CATObjectModelerBase  \
			CATApplicationFrame   \
            CATVisualization      \
			CATObjectSpecsModeler \
            CATProductStructure1  \
            CATNavigatorItf       \
            DI0PANV2              \
            CATGraph              \
			CATDMUPersistency     \
			CATFileMenu           \
			CATViz                \
			CATGraphicProperties  \
			CATNavigator2Itf
