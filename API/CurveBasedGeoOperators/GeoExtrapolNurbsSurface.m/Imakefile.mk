#==============================================================================
#
# Copyright Dassault Systemes Provence 2002, all rights reserved
#
#==============================================================================
#
# Imakefile for module GeoExtrapolNurbsSurface.m
#
#==============================================================================
#
# Historique :
#
#  02/07/04 : AMR : Optimisation O2
#  14/03/03 : MMO : Traitement des warnings sur CATMathStream et CATCGMGeoMath
#  01/10/02 : MMO : plus de reference a la R9
#  05/05/02 : JCV : Creation a partir de l'imakefile du clean curve
#==============================================================================
#

BUILT_OBJECT_TYPE=SHARED LIBRARY


LINK_WITH = JS0GROUP                \
            CATMathematics          \
            CATGeometricObjects     \
            CATGeometricOperators   \
            CATAdvancedMathematics  \
            CATMathStream           \
            CATCGMGeoMath

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
