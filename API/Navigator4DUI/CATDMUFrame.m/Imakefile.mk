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

LINK_WITH=$(LINK_WITH_FOR_IID) \
			JS0CORBA           \
			JS0FM              \
            AD0XXBAS           \
            VE0BASE            \
			AC0SPBAS           \
            CD0VWTLB           \
            AS0STARTUP         \
            CATNavigatorItf    \
			CATNavigator2Itf   \
            SimulationItf      \
            CATPrsScene        \
			DI0PANV2           \
            CATViz			   \
            CATGraphicProperties \
            

