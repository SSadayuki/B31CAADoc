# COPYRIGHT DASSAULT SYSTEMES 2006, ALL RIGHTS RESERVED
#======================================================================
# Imakefile for module PolyVisuBoolOper.m
#======================================================================
#
# November 2006 Creation - ndo
#======================================================================
#
# NONE 
#
BUILT_OBJECT_TYPE=NONE 

#if defined (CATIAV5R18) || defined (CATIAR203)

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
