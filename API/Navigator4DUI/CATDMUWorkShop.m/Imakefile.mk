#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
Navigator4DUIUUID \
NavigatorInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) \
            AD0XXBAS           \
			NS0S1MSG           \
			CD0FRAME           \
            CATDMUWorkBench    \
			CATNavigatorItf    \
			CATNavigator2Itf   \
			CATViz

