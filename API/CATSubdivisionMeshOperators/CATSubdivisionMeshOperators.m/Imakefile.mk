#==============================================================================
#
# Copyright Dassault Systemes Provence 2003, all rights reserved
#
#==============================================================================
# Imakefile for the big module CATSubdivisionMeshOperators.m
#==============================================================================
#
# 13.02.2018 : RAQ : Ajout link with CATSmoRemesh
# 09.02.2004 : RAQ : Optimisation O2 + Portage 64 bits
# 17/11/2003 : MMO : Creation
#
#==============================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY 

INCLUDED_MODULES = CATSmoOperators CATSobVisu CATSmoRemesh

LINK_WITH = JS0GROUP		    \
      			CATMathematics	\
      			CATMathStream	  \
      			CATSobObjects   \
            CATSobUtilities


#==============================================================================

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn
#
OS = Windows_NT
#if os win_b64
#else
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
