# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module TopoPlate.m
#======================================================================
#
#  Jul 2004  : amr : Optimisation O2
#  Jul 2002  ; amr ; Add Copyright
#
BUILT_OBJECT_TYPE = NONE
#BUILT_OBJECT_TYPE = LOAD MODULE
#
OS = COMMON

#
OS = AIX

#
OS = IRIX

#
OS = HP-UX

#
OS = SunOS

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

