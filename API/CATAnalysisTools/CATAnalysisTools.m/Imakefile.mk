#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAnalysisToolsUUID
#else
LINK_WITH_FOR_IID =
#endif
#
#  module  CATAnalysisTools
#
#---------------------------------------
BUILT_OBJECT_TYPE= SHARED LIBRARY

OS = COMMON


LINK_WITH=$(LINK_WITH_FOR_IID)  CATObjectModelerBase \
            JS0GROUP JS0FM \
            CATObjectSpecsModeler \
            CATSAM0Explicit CATSAM0Core \
            CATLiteralFeatures KnowledgeItf \
            CATAnalysisInterface CATAmtModel CATELFMathKernel YN000MAT \
            CATElfElemShared CATViz CATVisualization \
            CATAnalysisToolkit CATMathStream \

INCLUDED_MODULES = CATAnalysisShared CATReportingTools CATAnalysisExportTools

IMPACT_ON_IMPORT = YES

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn

OS = HP-UX
# -lf is for HP 10 whereas -lF90 is for HP 11
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90
#endif

OS = hpux_b64 
# -lf is for HP 10 whereas -lF90 is for HP 11 -lcps 
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90 -lcps 
#endif

OS = SunOS
SYS_LIBS = -lM77 -lF77
OPTIMIZATION_FORTRAN = -O4

OS = Windows_NT
SYS_LIBS = 
