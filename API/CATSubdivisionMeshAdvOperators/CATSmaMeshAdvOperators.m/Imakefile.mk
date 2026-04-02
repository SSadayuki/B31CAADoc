#==============================================================================
# Copyright Dassault Systemes Provence 2006, All Rights Reserved
#==============================================================================
#
# Imakefile pour le module CATSmaMeshAdvOperators.m
#
#==============================================================================
# December,  2006 : RAQ : Création
# January,   2008 : PMG : LinkWith CATSurfacicMathLight / IncludeModule CATSmaDeformSubdivision
#==============================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY

#if defined CATIAV5R18 || defined CATIAR204
INCLUDED_MODULES = CATSmaDeformSubdivision

LINK_WITH = JS0GROUP						          \
            JS0ERROR						          \
            CATMathStream					        \
            CATSubdivisionObjects			    \
			      CATSubdivisionMeshOperators		\
			      CATSubdivisionApproximation   \
			      CATMathematics                \
  YN000FUN \
  CATSurfacicMathLight

#else

LINK_WITH = JS0GROUP						          \
            JS0ERROR						          \
            CATMathStream					        \
            CATSubdivisionObjects			    \
			      CATSubdivisionMeshOperators		\
			      CATSubdivisionApproximation   \
			      CATMathematics

#endif

#==============================================================================

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
LOCAL_CCFLAGS = -D__IBMCPP_TR1__=1

OS = IRIX
SYS_LIBS = -lftn
#
OS = Windows_NT
OPTIMIZATION_CPP = /O2
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

OS = Android
LOCAL_CCFLAGS = -std=c++11

