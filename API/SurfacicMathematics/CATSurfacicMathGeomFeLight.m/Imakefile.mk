# COPYRIGHT DASSAULT SYSTEMES 2005
#======================================================================
# Imakefile for module CATSurfacicMathGeomFeLight.m
#======================================================================
#
#  Octobre 2006  : MPS : Creation (dll existant qu'a partir de la R18)
#
#if defined(CATIAV5R18) || defined(CATIAR203)
BUILT_OBJECT_TYPE = SHARED LIBRARY
#else
BUILT_OBJECT_TYPE = NONE
#endif
#
OS = COMMON

#if defined(CATIAV5R18) || defined(CATIAR203)
INCLUDED_MODULES = MathGeomFe
LINK_WITH= \
  CATMathematics \
  JS0GROUP \
  CATMathStream \
#if !defined(_MOBILE_SOURCE)
  CATELFOptimization
#endif
#endif

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
