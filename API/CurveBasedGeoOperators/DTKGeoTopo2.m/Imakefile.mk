# Copyright Dassault Systemes Provence 2009-2012, all rights reserved
#==============================================================================
# Imakefile for module DTKGeoTopo2.m
# Ce module a ete cree specifiquement pour contourner un bug (CD) du
# compilateur FORTRAN sur VREGE1.f_ en O2/O3 le compilateur plante => O1 !
#==============================================================================
#  Aug 2012 On ne build pas sur iOS (voir MOBILE)                           mmo
#  Dec 2009 Optimisation O2                                                 mmo
#==============================================================================
#

# SHARED LIBRARY sauf sur les mobiles ou on ne compile pas a cause du FORTRAN

#if os MOBILE           
BUILD=NO
#else
BUILT_OBJECT_TYPE=NONE
#endif

COMDYN_MODULE = DTKSystem

IMPACT_ON_IMPORT=YES

OS = COMMON


OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
LOCAL_CCFLAGS = -DOS_AIX

OS = IRIX
SYS_LIBS = -lftn

OS = Windows_NT
LOCAL_CCFLAGS = /D "WNT" /D "CSFDB"
#if os win_b64
 #if defined CATIAR209
 OPTIMIZATION_FORTRAN = /O1
 #endif
#else
OPTIMIZATION_CPP = /O2
#endif

OS = HP-UX
SYS_LIBS = -lf

OS = SunOS
SYS_LIBS = -lF77 -lM77

OPTIMIZATION_CPP = -xO4
OPTIMIZATION_FORTRAN = -xO4

OS = Darwin
LOCAL_LDFLAGS = -Xlinker -commons -Xlinker use_dylibs

