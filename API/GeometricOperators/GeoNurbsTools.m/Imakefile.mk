# COPYRIGHT DASSAULT SYSTEMES 2002
#==============================================================================
# Imakefile for module CATGeoToolsForCurves.m
#==============================================================================
# 27/08/03 : MMO : Suppression des warning
# 01/10/02 : MMO : plus de reference a la R9
# 01/09/02 : JCV : Creation
#==============================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE=NONE

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
