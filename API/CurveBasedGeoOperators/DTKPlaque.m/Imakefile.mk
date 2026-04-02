# Copyright Dassault Systemes Provence 1999-2012, all rights reserved
#==============================================================================
# Imakefile for module DTKPlate.m
#==============================================================================
#  Aug 2012 On ne build pas sur iOS (voir MOBILE)                           mmo
#  Jul 2004 Optimisation O2                                                 amr
#  Oct 2002 plus de reference a la R9                                       mmo
#  Fev 2002 Ajout des options pour le compilateur Fortran SUN en R9         mmo
#  Nov 1999 Big Module                                                  mmo jfi
#  Oct 1999 Creation                                                        anr
#==============================================================================
#

# SHARED LIBRARY sauf sur les mobiles ou on ne compile pas a cause du FORTRAN

#if os MOBILE           
BUILD=NO
#else
BUILT_OBJECT_TYPE=NONE
#endif

IMPACT_ON_IMPORT=YES

OS = COMMON
   
# LINK_WITH = JS0CORBA        \
#            YP00IMPL        \
#            CGMObject       \
#            DTKStBas        \
#            DTKData         \
#            DTKMath         \
#            DTKSi           \
#            DTKGeoTopo      \
#            DTKV5Translator \
#            MathPlate       \
#            CATMathematics  \
#            AdvancedMathematics  \
#            CATAdvancedMathematics \
#            PlateFE

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
LOCAL_CCFLAGS = -DOS_AIX

OS = IRIX
SYS_LIBS = -lftn

OS = Windows_NT
LOCAL_CCFLAGS = /D "WNT" /D "CSFDB"
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

OS = HP-UX
SYS_LIBS = -lf

OS = SunOS
SYS_LIBS = -lF77 -lM77

OPTIMIZATION_CPP = -xO4
OPTIMIZATION_FORTRAN = -xO4
