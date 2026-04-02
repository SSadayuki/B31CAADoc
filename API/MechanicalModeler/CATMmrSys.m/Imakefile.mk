#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
MechanicalCommandsUUID\
SystemUUID 
#else
LINK_WITH_FOR_IID =
#endif
#
# 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)   \
            JS0GROUP JS0FM \
            ObjectModeler \
            AC0SPBAS \
            CATViz \
            CATVisualization \
            CATInteractiveInterfaces \
            CATMecModInterfaces \
            CATMmiUUID \
            SystemUUID \
            CD0NTOG CD0WIN \
			CATMmlSys \ #CATIMmiPartInfrastructureSettingsListener
			CATMathStream
      

 
