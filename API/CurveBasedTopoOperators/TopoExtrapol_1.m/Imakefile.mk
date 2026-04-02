#
# Copyright Dassault Systemes Provence 2002, all rights reserved
#
#==============================================================================
# Imakefile for the bigger module TopoExtrapolSurface.m
#==============================================================================
#
# History :
#
#  Jul 2004 : AMR : Optimisation O2
#  Apr 2003 : avc : Correction warning
#  Oct 2002 : mmo : plus de reference a la R9
#  May 2002 : jvc : Creation a partir de l'imakefile du clean curve
#==============================================================================
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = CATGeometricObjects         \
            CATTopologicalObjects       \
            CATTopologicalOperators     \
            CATGMModelInterfaces        \
            CATMathematics              \
	        CATCGMGeoMath               \   
            CATTopologicalOperatorsLight \
            CATGeometricOperators \
			JS0ERROR
            

#
OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

#
OS = IRIX
SYS_LIBS = -lftn

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

#
OS = HP-UX
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90
#endif                

#
OS = hpux_b64 
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90 -lcps 
#endif                

#
OS = SunOS
SYS_LIBS = -lF77 -lM77

OPTIMIZATION_CPP = -xO4
OPTIMIZATION_FORTRAN = -xO4
