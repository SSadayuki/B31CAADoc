# COPYRIGHT DASSAULT SYSTEMES 2018, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module CATPolyWatershedOperators.m
#======================================================================
#
# March 2018 Creation NUA
#======================================================================
#
BUILT_OBJECT_TYPE=NONE

# this module should only be included for >= 421
#ifdef CATIAR421
#if os win_b64
BUILD=YES
LOCAL_CCFLAGS = /EHsc
#else
BUILD=NO
#endif
#else
BUILD=NO
#endif

# for avoiding ppl error
OS = Windows_NT
#if os Windows_NT
#ifdef CATIAR421
LOCAL_CCFLAGS = /EHsc /D_CATNoWarningPromotion_
#else
LOCAL_CCFLAGS = /EHsc
#endif
#else
OPTIMIZATION_CPP = /O2
#endif
#
