# COPYRIGHT DASSAULT SYSTEMES PROVENCE 1999-2014
#======================================================================
# Imakefile for module DTKSweep.m
#======================================================================
#  Avr 2014  Activation du build sur Mobile pour coupure propre    mmo
#            de l'appel au fortran
#  Jul 2004  Optimisation O2                                       amr
#  Nov 1999  BUILT_OBJECT_TYPE=NONE for the bigger module          mmo
#            CATCurveBasedTopoOperators.m
#======================================================================
#

BUILT_OBJECT_TYPE=NONE

#if os MOBILE
BUILD=YES
#endif

#
OS = COMMON

LOCAL_CCFLAGS=-DSMARTTRACEON
LOCAL_CCFLAGS=-DCXTRACEON

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

