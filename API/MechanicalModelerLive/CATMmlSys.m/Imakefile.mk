#
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
MechanicalCommandsUUID\
SystemUUID 
#else
LINK_WITH_FOR_IID =
#endif 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = CATMmlSoftModifications CATMmlSys

#ifdef CATIAR420
LINK_WITH=$(LINK_WITH_FOR_IID)    CATMecModLiveInterfaces \
            JS0GROUP JS0FM \
            ObjectModeler \
            AC0SPBAS CATSysTS \
            CATMecModInterfaces CATMecModUseItf \
            SystemUUID \
			ObjectModelerSystem CATGngGraph SGInfra \
			CATMathStream \
			CATMecModLiveUseItf

#else
LINK_WITH=$(LINK_WITH_FOR_IID)    CATMecModLiveInterfaces \
            JS0GROUP JS0FM \
            ObjectModeler \
            AC0SPBAS CATSysTS \
            CATMecModInterfaces  \
            SystemUUID \
			ObjectModelerSystem CATGngGraph\
			CATMathStream \
			CATMecModLiveUseItf
#endif
