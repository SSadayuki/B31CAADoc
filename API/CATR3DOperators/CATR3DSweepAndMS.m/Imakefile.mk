#==============================================================================================================
# COPYRIGHT DASSAULT SYSTEMES 2010
#==============================================================================================================
# Imakefile for module CATR3DSweepAndMS.m
#==============================================================================================================
# 24-Jan-2014 - JLH - Un peu de nettoyage : Suppression des librairies inutiles
# ??-???-???? - ??? - Creation
#==============================================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY 

#if (os Windows_NT || os win_b64)

LINK_WITH = \
  CATMathStream \
  CATMathematics \
  CATExpIntervalArithmetic \
  CATPolyhedralInterfaces \
  CATR3DIndexedBoolean \
  CATR3DPredicates2Imp2 \
  CATSysTS \
  JS0GROUP \
  CATPolyhedralOperators \
  CATPolyhedralObjects

LOCAL_CCFLAGS = /EHsc
OPTIMIZATION_CPP = /O2

#else

BUILD = NO

#endif
