# COPYRIGHT DASSAULT SYSTEMES PROVENCE 2006
#==============================================================================
# Imakefile for module CATFrFSmoothing.m
#==============================================================================
#  Avr 2006 transfert de code                                               exm
#==============================================================================
#
#
BUILT_OBJECT_TYPE=NONE

#
OS=COMMON


#
OS = SunOS

OPTIMIZATION_CPP         =-xO4
OPTIMIZATION_FORTRAN=-xO4

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
