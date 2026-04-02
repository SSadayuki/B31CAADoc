#
BUILT_OBJECT_TYPE = NONE
#
OS = COMMON

LINK_WITH = JS0CORBA CATVisualization  CATViz \
			CATSAM0Explicit CATSamVisuImpl \
			CATAnalysisInterface CATAnalysisToolkit \
			CATLiteralFeatures KnowledgeItf  CATMathematics\

LOCAL_CCFLAGS = $(LBK_FLAGS)
LOCAL_CFLAGS = $(LBK_FLAGS)

OS = AIX

OS = HP-UX

OS = IRIX

OS = SunOS

OS = Windows_NT 
