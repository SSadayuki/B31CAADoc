#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

#ifdef CATIAV5R10
LINK_WITH =      \
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
       CATNavigatorItf \
       CATInfInterfaces SIMItf \
	   CATLiteralFeatures

#else
LINK_WITH =      \
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
       CATInfInterfaces SIMItf

#endif

	    
#      CATDMUModel SpecsModeler \
#	   CATDMUManip \
#      ON0GRAPH
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


