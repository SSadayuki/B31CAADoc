#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATIAApplicationFrameUUID \
CATVisUUID \
FunctionEditorInterfacesUUID \
InfInterfacesUUID \
NavigatorInterfacesUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
ProductStructureUUID \
SimulationInterfacesUUID \
SIMInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = G90FEAT G90TB G90GA G90EXPE G90REPL G90EXREP G90CAA2 CATFitSample

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
       OM0EDPRO \
       SimulationItf \
       VE0MDL \
       SpecsModeler \
       DI0PANV2 JS0FM Mathematics \
       CATProductStructureInterfaces\
       CATNavigatorItf \
       CATDynClash \
       FunctionEditorItfCPP \
	   VE0BASE \
	   AC0CATPL SIMItf \
	   CATSimulationBase \
     CATGraphicProperties

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

