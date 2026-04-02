#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAnalysisBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = CATSAMRules CATSAMCollect

#
OS = COMMON

LINK_WITH = $(LINK_WITH_FOR_IID) CATSAM0Core \
            CATCdbEntity AD0XXBAS AC0XXLNK \
            JS0COMP JS0CORBA JS0ZLIB \
            CATBinaryXml CATXMLParserItf \
            CATSysAllocator CATAmtModel \
            Mathematics CATMathStream \
            CATObjectModelerBase \
            CATObjectModelerCATIA \
            CATSamExpression \
            AC0SPBAS \
			CATAnalysisInterface  CATAnalysisToolkit\

LOCAL_CCFLAGS = $(CCFLAGS_SAM)
LOCAL_CFLAGS = $(CCFLAGS_SAM)

OS = AIX

OS = HP-UX

OS = IRIX

OS = SunOS

OS = Windows_NT
OPTIMIZATION_CPP =  /Oxt /Gy /GF /GR- 

