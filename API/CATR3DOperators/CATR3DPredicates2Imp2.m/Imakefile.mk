#==============================================================================================================
# COPYRIGHT DASSAULT SYSTEMES 2010
#==============================================================================================================
# Imakefile for module CATR3DPredicates2Imp2.m
#==============================================================================================================
# ??-???-???? - ??? - Creation
#==============================================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

#if (os Windows_NT || os win_b64)

LINK_WITH = \
  CATCloudExactPredicates \
  CATMathStream \
  CATMathematics \
  CATSysTS \
  JS0GROUP

LOCAL_CCFLAGS = /EHsc

#else

BUILD = NO

#endif
