#
# Copyright Dassault Systemes Provence 2008, all rights reserved
#
#==============================================================================
# Imakefile for the bigger module CATCurvedBasedTopoOperators.m
#==============================================================================
#
# History :
#
#	Sep 2008 : TXW : creation
#              
#==============================================================================
#

BUILT_OBJECT_TYPE=NONE

#if defined CATIAV5R20

# LINK_WITH = CATCurveBasedTopoOperators   \
#             CATMathematics               \ 
#             CATSurfacicTopoOperators     \
#             CATFreeFormOperators         \
#             CATTopologicalObjects        \
#             CATTopologicalOperators      \
#             CATTopologicalOperatorsLight \
#             CATGeometricObjects          \
#             CATGeometricOperators        \
#             CATGMOperatorsInterfaces     \
#             CATGMModelInterfaces         \
#             CATGMAdvancedOperatorsInterfaces     \
#             JS0ERROR

#endif

#==============================================================================               

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn

OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

OS = HP-UX
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90
#endif                

OS = hpux_b64 
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90 -lcps 
#endif                

OS = SunOS
SYS_LIBS = -lF77 -lM77
