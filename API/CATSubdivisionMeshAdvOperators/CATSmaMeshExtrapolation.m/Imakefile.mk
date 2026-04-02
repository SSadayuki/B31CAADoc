#==============================================================================
# Copyright Dassault Systemes Provence 2008, All Rights Reserved
#==============================================================================
#
# Imakefile pour le module CATSmaMeshAdvOperators.m
#
#==============================================================================
# Janv,  2008 : ANR : Création 
#==============================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0GROUP						          \
            JS0ERROR						          \
            CATMathStream					        \
            CATSubdivisionObjects			    \
			CATSubdivisionMeshOperators		\ 
			CATMathematics  \
			YN000FUN \ 
			CATSmaFillSubdivision
			              

#==============================================================================

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

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
