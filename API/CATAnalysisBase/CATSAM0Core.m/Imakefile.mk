#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAnalysisBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = CATSAMModel
#
OS = COMMON

LINK_WITH = $(LINK_WITH_FOR_IID) \
            JT0TRCBK JS0ZLIB CATSysAllocator \
            CATAnalysisInterface \
            CATObjectModelerBase \     
            CATAmtModel \
            CATSAM0Explicit \
            CATSamExpression \
            CATMathStream \
            Mathematics
 

LOCAL_CCFLAGS = $(CCFLAGS_SAM)
LOCAL_CFLAGS = $(CCFLAGS_SAM)

OS = AIX

OS = HP-UX

OS = IRIX

OS = SunOS

OS = Windows_NT
OPTIMIZATION_CPP =  /Oxt /Gy /GF /GR- 


