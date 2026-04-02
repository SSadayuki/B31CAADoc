#
# Copyright Dassault Systemes Provence 2003, all rights reserved
#
#==============================================================================
# Imakefile for the module CATSmoOperators.m
#==============================================================================
#
# 09.02.2004 : RAQ : Optimisation O2 + Portage 64 bits
# 17.11.2003 : RAQ : Creation
#              
#==============================================================================
#

BUILT_OBJECT_TYPE=NONE


#LINK_WITH=

#==============================================================================

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
LOCAL_CCFLAGS = -D__IBMCPP_TR1__=1

OS = IRIX
SYS_LIBS = -lftn
#
OS = Windows_NT
LOCAL_CCFLAGS = /EHsc
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

OS = Linux
LOCAL_CCFLAGS = -std=c++0x

OS = iOS
LOCAL_CCFLAGS = -std=c++11 -stdlib=libc++ -Wno-c++11-narrowing

OS = Darwin
LOCAL_CCFLAGS = -std=c++11 -Wno-c++11-narrowing

OS = Android
LOCAL_CCFLAGS = -std=c++11

