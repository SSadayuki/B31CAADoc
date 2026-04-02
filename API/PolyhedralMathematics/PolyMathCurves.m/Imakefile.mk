# COPYRIGHT DASSAULT SYSTEMES 2007, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module PolyMathCurves.m
#======================================================================
#
# May 2007 Creation ndo
#======================================================================
#
# NONE 
#

#if defined (CATIAV5R18) || defined (CATIAR204)

BUILT_OBJECT_TYPE=NONE 

#else

BUILD=NO

#endif

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
