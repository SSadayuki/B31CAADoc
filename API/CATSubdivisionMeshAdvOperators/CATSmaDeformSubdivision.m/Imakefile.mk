#==============================================================================
# Copyright Dassault Systemes Provence 2008, All Rights Reserved
#==============================================================================
#
# Imakefile pour le Module CATSmaDeformlSubdivision.m
#
#==============================================================================
# January,  2008 : PMG : Création
#==============================================================================

BUILT_OBJECT_TYPE=NONE




 
			

#==============================================================================

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
LOCAL_CCFLAGS = -D__IBMCPP_TR1__=1

OS = IRIX
SYS_LIBS = -lftn
#
OS = Windows_NT
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
