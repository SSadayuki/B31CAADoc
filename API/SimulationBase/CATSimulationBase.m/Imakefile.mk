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

INCLUDED_MODULES = SB0COMF SB0INTOBJ

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
       CATGraphicProperties \
       VE0MDL \
       SpecsModeler \
       DI0PANV2 JS0FM Mathematics \
       CATInfInterfaces \
       CATNavigatorItf \
       CATFeatObjects \
	   KnowledgeItf \
       ProcessInterfaces \
       VE0BASE  \
       AC0CATPL MecModItfCPP \
       CATLiteralsEditor CK0UNIT \
       CATLiteralFeatures CATLifDictionary \
	   CATPrsWksPRDWorkshop CATViz \
       CATNavigator2Itf CATMathStream \
       CATViz CATMathStream \
       CATClashableImplement
	   
#CATIWorkScene 

#CAT3DDBackgroundInterfaces 

# CATLiteralFeatures
# SIMItf
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

