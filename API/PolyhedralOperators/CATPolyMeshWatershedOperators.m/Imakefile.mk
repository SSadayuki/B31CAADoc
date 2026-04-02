#==============================================================================
#
# Copyright Dassault Systemes Provence 2017, all rights reserved
#
#==============================================================================
#
# Imakefile pour le Module CATPolyMeshWatershedOperators.m
#
# Historique :
#
# 03-03-17 : NUA : Creation
#
#==============================================================================
BUILT_OBJECT_TYPE=NONE

#
OS = Windows_NT
#if os Windows_NT
#ifdef CATIAR420
LOCAL_CCFLAGS = /EHsc /D_CATNoWarningPromotion_
#else
LOCAL_CCFLAGS = /EHsc
#endif
#else
OPTIMIZATION_CPP = /O2
#endif
#     
                        
            

#==============================================================================

