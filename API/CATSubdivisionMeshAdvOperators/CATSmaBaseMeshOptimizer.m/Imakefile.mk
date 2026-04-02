#==============================================================================
# Copyright Dassault Systemes Provence 2006, All Rights Reserved
#==============================================================================
#
# Imakefile pour le Module CATSmaBaseMeshOptimizer.m
#
#==============================================================================
# October,  2006 : MPS : Création
#==============================================================================

BUILT_OBJECT_TYPE=NONE

#LINK_WITH

#==============================================================================

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn
#
OS = Windows_NT
LOCAL_CCFLAGS = /EHsc
OPTIMIZATION_CPP = /O2
#
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
