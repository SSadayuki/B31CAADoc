# COPYRIGHT DASSAULT SYSTEMES 2004
#======================================================================
# Imakefile for module TopoImlSurface.m
#======================================================================
#
#  Jul 2004  : AMR : Optimisation O2
#  Jan 2004  ; mqi ; Add Copyright
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

