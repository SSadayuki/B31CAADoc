# COPYRIGHT DASSAULT SYSTEMES 1999
#==============================================================================
# Imakefile for module DTKMathV5.m
#==============================================================================
# 13.03.2018 : RAQ : Désactivation build sous MOBILE
#  Jul 2004 : AMR : Optimisation O2
#  May 2001 : MMO :  Creation pour isoler le code specifique V5 et ou NT
#==============================================================================
#
BUILT_OBJECT_TYPE=NONE
#

COMDYN_MODULE = DTKSystem

IMPACT_ON_IMPORT=YES

#if os MOBILE           
BUILD=NO
#endif

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
SYS_LIBS = -lf

OS = SunOS
SYS_LIBS = -lF77 -lM77


OS = Darwin
LOCAL_LDFLAGS = -Xlinker -commons -Xlinker use_dylibs

