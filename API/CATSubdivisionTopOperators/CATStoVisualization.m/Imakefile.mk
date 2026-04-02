#==============================================================================
# Copyright Dassault Systemes Provence 2020, all rights reserved
#==============================================================================
# Imakefile for the bigger module CATStoVisualization.m
#==============================================================================
#
# 08.03.2021 : RAQ : Build desactivation from R32/R424
# 03.07.2020 : RAQ : Creation
#==============================================================================

BUILT_OBJECT_TYPE=NONE

#if defined CATIAV5R32 || defined CATIAR424
BUILD=NO
#endif

#==============================================================================

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
LOCAL_CCFLAGS = -D__IBMCPP_TR1__

OS = IRIX
SYS_LIBS = -lftn
#
OS = Windows_NT
#if os win_b64
#else
LOCAL_CCFLAGS = /EHsc
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

OS = Linux
LOCAL_CCFLAGS = -std=c++0x
