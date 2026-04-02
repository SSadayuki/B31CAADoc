# COPYRIGHT DASSAULT SYSTEMES 1999
#==============================================================================
# Imakefile for the bigger module CATCurveBasedMathematics.m
#==============================================================================
#  Jul 2004 : AMR : Optimisation O2
#  May 2001 : MMO : DTKMathV5 addition
#  Nov 1999 : MMO : Creation to group all small modules into the bigger module  
#              
#==============================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 

INCLUDED_MODULES = DTKMath DTKMathV5

COMDYN_MODULE = DTKSystem

LINK_WITH = CATCurveBasedInfrastructure


OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn

OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

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

OS = intel_a64
LOCAL_CCFLAGS = /Wp64  
LOCAL_CFLAGS = /Wp64

OS = Darwin
SYS_LIBS = -lifcoremt -limf -lsvml -lirc
LOCAL_LDFLAGS = -Xlinker -commons -Xlinker use_dylibs

OS = Linux
SYS_LIBS = -lifcoremt -limf -lsvml -lirc
