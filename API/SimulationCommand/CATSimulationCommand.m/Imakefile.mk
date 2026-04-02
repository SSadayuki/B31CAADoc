#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
NavigatorInterfacesUUID \
ProductStructureInterfacesUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = CATDMUGroupCmd CATDynClashParm 

LINK_WITH=$(LINK_WITH_FOR_IID)       \
       AC0XXLNK \
       AD0XXBAS \
       AS0STARTUP \
       CO0LSTPV \
       CO0RCINT \
       CD0WIN \
       JS03TRA \
       JS0CORBA \
       JS0LIB0 \
       JS0SCBAK \
       JS0STR \
       NS0S3STR \
       SimulationItf \
       VE0MDL \
       SpecsModeler \
       DI0STATE DI0PANV2 JS0FM \
       CATDMUManip \
       CATSimulationBase DNBSimulationBaseLegacy CATDMUModel CATDMUWind CATNavigatorItf CATNavigator2Itf CATDMUBase \
       CATDynClash \
       CATProductStructureInterfaces \
       CATViz \
	   OM0EDPRO \
	   CATDMUPersistency

#      CATFeatObjects OM0EDPRO CATInfInterfaces CATMMediaItf CATSIMProbeCommand SIMItf\
#      Mathematics \
#      CATGviUtilities \
#      CATVisVR \
#      CK0FEAT CK0UNIT \




# ON0GRAPH
#
LOCAL_CCFLAGS = 

#
OS = AIX

# 
OS = HP-UX

#
OS = IRIX

#
OS = SunOS

#
OS = Windows_NT

