# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module MathPlate.m
#======================================================================
#
#  Jul 2004  : amr : Optimisation O2
#  Jul 2002  ; amr ; Add Copyright
#
BUILT_OBJECT_TYPE = NONE
#BUILT_OBJECT_TYPE = LOAD MODULE
#
OS = COMMON

##
OS = COMMON
LOCAL_CCFLAGS = -DCSFDB -DNO_CXX_EXCEPTION
#
OS = AIX
LOCAL_CCFLAGS = -DOS_AIX
#
OS = IRIX

#
OS = HP-UX

#
OS = SunOS

#
OS = Windows_NT
LOCAL_CCFLAGS = /D "WNT" /D "CSFDB"
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif





OS = Linux
# CPT on 2020/11/12: to prevent to link with unresolved symbols
# set LOCAL_2NDLDFLAGS only if ( MKMK_GCC_SANITIZER does not exist or is empty )
LOCAL_2NDLDFLAGS=$(MKMK_GCC_SANITIZER:%-"-Wl,-z,defs ")
