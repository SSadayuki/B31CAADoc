#
BUILT_OBJECT_TYPE = NONE
#
OS = COMMON

LINK_WITH = $(LINK_WITH_FOR_IID) \
            JT0TRCBK \
            CATSysAllocator \
            CATSAM0Core \
            CATSAM0Explicit \
            CATSamExpression

LOCAL_CCFLAGS = $(CCFLAGS_SAM)
LOCAL_CFLAGS = $(CCFLAGS_SAM)

OS = AIX

OS = HP-UX

OS = IRIX

OS = SunOS

OS = Windows_NT
OPTIMIZATION_CPP =  /Oxt /Gy /GF /GR- 

