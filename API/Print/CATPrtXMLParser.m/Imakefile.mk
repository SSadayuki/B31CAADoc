BUILT_OBJECT_TYPE=SHARED LIBRARY


LINK_WITH = CATPrtBase CATLightXml JS0GROUP JS0MT JS0FM CATSysMainThreadMQ

# System dependant variables
#
OS = AIX
BUILD=YES
SYS_LIBS= -lpthread
#
OS = HP-UX
BUILD=YES
#
OS = IRIX
BUILD=YES
SYS_LIBS= -lpthread
#
OS = SunOS
BUILD=YES
#
OS = Windows
BUILD=YES
#if (defined MK_MSCVER) && (MK_MSCVER < 1900)
SYS_LIBS= ole32.lib rpcrt4.lib ws2_32.lib atl.lib
#else
SYS_LIBS= ole32.lib rpcrt4.lib ws2_32.lib 
#endif
