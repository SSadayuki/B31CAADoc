# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATSurfacicInfrastructure.m
#======================================================================
#
#  Jul 2004  : AMR : Optimisation O2
#  Apr 2003  ; avc ; Correction warning
#  Jul 2002  ; amr ; Add Copyright
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
INCLUDED_MODULES = SysCascade SysDebug
#
OS = COMMON
#
LINK_WITH= \
  YN000MAT \
  JS0CORBA \
  CATMathStream
##
OS = COMMON
LOCAL_CCFLAGS = -DCSFDB -DNO_CXX_EXCEPTION

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

