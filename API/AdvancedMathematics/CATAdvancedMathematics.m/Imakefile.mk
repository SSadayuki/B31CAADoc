#
#if os iOS
BUILT_OBJECT_TYPE=ARCHIVE
#else
BUILT_OBJECT_TYPE=SHARED LIBRARY
#endif
#
INCLUDED_MODULES = AdvancedMathematics YN000DEV YN000FUN YN000OPT MathGeo AdvMathematicsItf CompactFunction Data_AdvancedMathematics
#
LINK_WITH = \
  JS0GROUP \
  CATSysTS \
  CATMathematics \
  CATMathStream \
  JS0MT
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

OS = Linux
LOCAL_LDFLAGS=-fopenmp
