# COPYRIGHT DASSAULT SYSTEMES 2005
#======================================================================
# Imakefile for module CATSurfacicMathLight.m
#======================================================================
#
#  August 2016 : PMG : Ajout link with (CATSysMultiThreading)
#  Mars 2010  : PMG : Ajout du module MathLinearAlgebra
#  Decembre 2005  : PMG : Creation (dll existant qu'a partir de la R17)
#
#if defined(CATIAV5R17) || defined(CATIAR201)
BUILT_OBJECT_TYPE = SHARED LIBRARY
#else
BUILT_OBJECT_TYPE = NONE
#endif
#
OS = COMMON

#if defined(CATIAV5R20) || defined(CATIAR209)
INCLUDED_MODULES = MathMarsh MathLinearAlgebra MathFastMarsh
LINK_WITH= \
  YN000FUN \
  JS0GROUP \
  CATSysMultiThreading \
  CATMathematics \
  CATMathStream
# else
INCLUDED_MODULES = MathMarsh 
LINK_WITH= \
  YN000FUN \
  JS0GROUP \
  CATMathematics \
  CATMathStream
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



