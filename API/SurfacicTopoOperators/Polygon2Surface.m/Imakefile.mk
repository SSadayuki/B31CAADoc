# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module Polygon2Surface.m
#======================================================================
#
#  Jul 2004  : amr : Optimisation O2
#  Fev 2003  ; ktu
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

