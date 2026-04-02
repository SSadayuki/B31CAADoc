#==============================================================================
# Copyright Dassault Systemes Provence 2009, All Rights Reserved
#==============================================================================
# Imakefile for CATSobUtilities.m
#==============================================================================
# December,   2009 : RAQ : Creation
#==============================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY 

INCLUDED_MODULES = 

LINK_WITH = JS0GROUP


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
