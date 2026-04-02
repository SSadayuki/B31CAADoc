#==============================================================================
#
# Copyright Dassault Systemes Provence 2020, all rights reserved
#
#==============================================================================
#
# Imakefile pour le Module CATPolyComparOperators.m
#
# Historique :
# 26/02/2020 : RNO Activation V5 (R31)
# 31-01-2020 : RNO : Creation pour déplacer le module de comparaison de CATMaterialRemovalSimulation
#





#if defined(CATIAR423) || defined(CATIAV5R31)

#if os win_b64 || os linux_a64 || os intel_a || os linux_csa64 || os win_csa64
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = 

#if defined(CATIAR423)
LINK_WITH = JS0ERROR CATMathematics CATMathStream \
            CATSysMultiThreading CATSysTS \
            PolyPartitions PolyMeshImpl PolyhedralModel PolyMathUtils  \
			CATExpExactArithmetic CATExpIntervalArithmetic \
			tbb
#else
# Ps de tbb en V5
#if  defined(CATIAV5R32)
# A partir de R32 on pourra utiliser CATMathExactPredicates
LINK_WITH = JS0ERROR CATMathematics CATMathStream \
            CATSysMultiThreading CATSysTS \
            PolyPartitions PolyMeshImpl PolyhedralModel PolyMathUtils  \
			CATExpExactArithmetic CATExpIntervalArithmetic
#else
LINK_WITH = JS0ERROR CATMathematics CATMathStream \
            CATSysMultiThreading CATSysTS \
            PolyPartitions PolyMeshImpl PolyhedralModel PolyMathUtils 
#endif
#endif

#if os win_b64 || os intel_a || os win_csa64
OPTIMIZATION_CPP = /O2			
#endif
OS = Windows_NT
LOCAL_CCFLAGS = /EHsc /D_CATNoWarningPromotion_ /D__TBB_NO_IMPLICIT_LINKAGE=1 -DNOMINMAX

#else
# iosdevice_a64 iossimul_a64 macos_b64
BUILD = NO
BUILT_OBJECT_TYPE=NONE
#endif



#else
BUILD=NO
BUILT_OBJECT_TYPE=NONE
#endif



#
