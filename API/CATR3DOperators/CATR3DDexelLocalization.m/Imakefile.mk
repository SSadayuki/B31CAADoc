#==============================================================================================================
# COPYRIGHT DASSAULT SYSTEMES 2010
#==============================================================================================================
# Imakefile for module CATR3DDexelLocalization.m
#==============================================================================================================
# ??-???-???? - ??? - Creation
#==============================================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY 

#if (os Windows_NT || os win_b64)

LINK_WITH = \
  CATMathStream \
  CATMathematics \
  CATPolyhedralInterfaces \
  CATR3DIndexedBoolean \
  CATR3DSweepAndMS \
  CATSysTS \
  JS0GROUP

LOCAL_CCFLAGS = /EHsc
OPTIMIZATION_CPP = /O2

#else

BUILD = NO

#endif
