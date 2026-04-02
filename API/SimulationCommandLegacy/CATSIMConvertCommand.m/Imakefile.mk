#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)       \
       SIMItf\
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
       SimulationItf \
       VE0MDL \
       CD0EDIT \
       DI0STATE DI0PANV2 JS0FM\
       DI0PANV2\
       ProcessInterfaces CATProductStructureInterfaces

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

