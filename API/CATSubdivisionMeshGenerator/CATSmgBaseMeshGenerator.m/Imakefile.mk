#==============================================================================
# Copyright Dassault Systemes Provence 2012, All Rights Reserved
#==============================================================================
#
# Imakefile for the module CATSmgBaseMeshGenerator.m
#
#============================================================================== 
# March,    2012 : RAQ : Creation
#==============================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY

OS = COMMON

#ifdef CATIAV5R27
LINK_WITH = JS0GROUP                      \
            CATSubdivisionObjects         \
            CATSubdivisionMeshOperators   \
            CATPolyTrimOperators          \
            PolyhedralModel               \
            CATMathStream                 \
            CATGeometricObjects           \
            CATMathematics                \
            CATSobUtilities               \
            YN000FUN                      \
            CATGMOperatorsInterfaces
#else
LINK_WITH = JS0GROUP                      \
            CATSubdivisionObjects         \
            CATSubdivisionMeshOperators   \
            CATPolyTrimOperators          \
            PolyhedralModel               \
            CATMathStream                 \
            CATGeometricObjects           \
            CATMathematics                \
            CATSobUtilities               \
            YN000FUN
#endif
#==============================================================================

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
LOCAL_CCFLAGS = -D__IBMCPP_TR1__=1

OS = IRIX
SYS_LIBS = -lftn
#
OS = Windows_NT
#if os win_b64
LOCAL_CCFLAGS = /EHsc
OPTIMIZATION_CPP = /O2
#else
LOCAL_CCFLAGS = /EHsc
OPTIMIZATION_CPP = /O2
#endif
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

OS = Darwin
LOCAL_CCFLAGS = -std=c++11 -Wno-c++11-narrowing

