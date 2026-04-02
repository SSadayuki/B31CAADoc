#==============================================================================
# Copyright Dassault Systemes Provence 2020, all rights reserved
#==============================================================================
#
# Imakefile for the module 
#
#============================================================================== 
# Mai : ANR : Creation (un peu de nettoyage rien a avoir avec les subdiv mais on a besoin)
#==============================================================================
#

BUILT_OBJECT_TYPE=NONE


#LINK_WITH=

#==============================================================================

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

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

OS = hpux_b64 
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90 -lcps 
#endif

OS = SunOS
SYS_LIBS = -lF77 -lM77
