#
# Copyright Dassault Systemes Provence 2003, all rights reserved
#
#==============================================================================
# Imakefile for the bigger module CATSdtTopo.m
#==============================================================================
#
# 09.02.2004 : RAQ : Optimisation O2 + Portage 64 bits
# 10.03.2003 : MMO : Creation
#              
#==============================================================================
#

BUILT_OBJECT_TYPE=NONE

#LINK_WITH = 

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
