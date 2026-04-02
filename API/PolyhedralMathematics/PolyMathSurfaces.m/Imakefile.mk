# COPYRIGHT DASSAULT SYSTEMES 2007, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module PolyMathSurfaces.m
#======================================================================
#
# May 2007 Creation ndo
#======================================================================
BUILT_OBJECT_TYPE=NONE 

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

#if defined (CATIAV5R20) 
LOCAL_CCFLAGS = -DPOLYHEDRALMATHEMATICS_WITH_CGMOUTPUT
#endif
