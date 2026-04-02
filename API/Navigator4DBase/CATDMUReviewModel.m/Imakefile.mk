#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0CORBA JS0FM AC0SPBAS AD0XXBAS\
						AS0STARTUP CATNavigatorItf CD0WIN VE0BASE \
						ProductStructureItf CATDMUModel SELECT CATGraphicProperties \
						SimulationItf CATSimulationBase \
            CATNavigator2Itf CATViz CATDMUBase DI0PANV2 CAT3DXmlInterfaces CATLightXml


             
            
            
