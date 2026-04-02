# COPYRIGHT DASSAULT SYSTEMES 2000
#==============================================================================
# Imakefile for module GeoCrvStylingFillet.m
#==============================================================================
#  Jul 2004 Optimisation O2                                                 amr
#  Oct 2002 plus de reference a la R9                                       mmo
#  Fev 2002 Ajout des options pour le compilateur Fortran SUN en R9         mmo
#  avr 2000	Creation
#==============================================================================
#

BUILT_OBJECT_TYPE=NONE

IMPACT_ON_IMPORT=YES

#
OS = COMMON

#   
OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
LOCAL_CCFLAGS = -DOS_AIX

#
OS = IRIX
SYS_LIBS = -lftn

#
OS = Windows_NT
LOCAL_CCFLAGS = /D "WNT" /D "CSFDB"
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

#
OS = HP-UX
SYS_LIBS = -lf

#
OS = SunOS
SYS_LIBS = -lF77 -lM77

OPTIMIZATION_CPP = -xO4
OPTIMIZATION_FORTRAN = -xO4
