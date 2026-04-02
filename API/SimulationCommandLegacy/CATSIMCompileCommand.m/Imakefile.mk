#
# SHARED LIBRARY CATSIMCompileCommand
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH =      \
       SimulationItf \
	   CATProductStructureInterfaces\
       AC0XXLNK \
       AD0XXBAS \
       CO0LSTPV \
       CO0RCINT \
       CD0WIN \
       JS03TRA \
       JS0CORBA \
       JS0LIB0 \
       JS0SCBAK \
       JS0STR \
       NS0S3STR \
       VE0MDL \
   	   CD0EDIT \
       DI0STATE DI0PANV2 JS0FM \
       SpecsModeler \
       CATInfInterfaces \
       CATNavigatorItf \
       CATMMediaItf CATSimulationBase DNBSimulationBaseLegacy \
       CATFileMenu \
	   CATSIMPlayerCommand  SIMItf

#       CATDMUModel \
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

