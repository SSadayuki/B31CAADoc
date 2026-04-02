# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module GeoCrvStylingFillet.m
#======================================================================
#  Jul 2004 Optimisation O2                                         amr
#  april 2000			                                         ***
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=NONE
IMPACT_ON_IMPORT=YES

OS = COMMON
   
#LINK_WITH = JS0CORBA   \         
#            CGMObject       \
#            DTKStBas        \
#            DTKData         \
#            DTKMath         \
#            DTKSi           \
#            DTKGeoTopo      \
#            DTKV5Translator \
#            MathPlate       \
#            CATMathematics  \
#            YP00IMPL        \
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
