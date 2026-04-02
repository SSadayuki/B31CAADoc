#@ autoformat 14:06:27
#==============================================================================================================
# COPYRIGHT DASSAULT SYSTEMES 2010
#==============================================================================================================
# Imakefile for module CATR3DIndexedBoolean.m
#==============================================================================================================
# 24-Jan-2014 - JLH - Un peu de nettoyage : Suppression des librairies inutiles
# ??-???-???? - ??? - Creation
#==============================================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY 

#if (os Windows_NT || os win_b64)

LINK_WITH = \
    CATCldExactPredicates          \ # CATCloudBasicResources         CATCloudExactPredicates
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATR3DPredicates2Imp2          \ # CATR3DOperators                CATR3DPredicates2Imp2
    CATR3DSweepAndMS               \ # CATR3DOperators                CATR3DSweepAndMS
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATPolyhedralInterfaces        \ # PolyhedralInterfaces           CATPolyhedralInterfaces
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#

LOCAL_CCFLAGS = /EHsc /D_ENFORCE_MATCHING_ALLOCATORS=0
OPTIMIZATION_CPP = /O2

#else

BUILD = NO

#endif
