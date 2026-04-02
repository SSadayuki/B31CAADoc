#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
Navigator4DUIUUID \
ProductStructureUIUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)            \
			JS0FM                         \
            AD0XXBAS                      \
			AS0STARTUP                    \
			NS0S1MSG                      \
			CD0FRAME                      \ 
			DI0PANV2                      \
            SELECT                        \
            CATPrsWksPRDWorkshop          \
			CATNavigatorItf               \
			CATNavigator2Itf              \
			CATCamController              \
			CATProductStructureInterfaces \
			CATViz

