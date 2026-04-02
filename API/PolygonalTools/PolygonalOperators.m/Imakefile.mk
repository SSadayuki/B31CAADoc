# COPYRIGHT DASSAULT SYSTEMES 2006, ALL RIGHTS RESERVED
#======================================================================
# Imakefile for module PolygonalOperators.m 
#======================================================================
#
# November 2006 Creation - ndo
#======================================================================
#
# NONE 
#
BUILT_OBJECT_TYPE=NONE 

#
OS = Windows_NT
#if os win_b64
LOCAL_CCFLAGS = /EHsc
#else
OPTIMIZATION_CPP = /O2
#endif
#

#if defined (CATIAV5R20) 
LOCAL_CCFLAGS = -DPOLYGONALTOOLS_WITH_CGMOUTPUT
#endif
