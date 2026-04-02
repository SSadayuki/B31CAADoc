#
# Copyright Dassault Systemes Provence 2003, all rights reserved
#
#==============================================================================
# Imakefile for the big module CATSubdivisionApproximation.m
#==============================================================================
#
# 09/02/2004 : RAQ : Optimisation O2 + Portage 64 bits
# 17/11/2003 : RAQ : Création de CATSubdivisionObjects à partir de CATSubdivisionOperators
# 23/07/2003 : MMO : On supprime CATTopologicalOperators CATAdvancedTopologicalOpe
# 12/06/2003 : JCV : 3 Modules CATSdoTopo CATSdoGeo CATSdoObjects
# 27/03/2003 : JCV : CATGeometricObjects + CATMathStream CATCGMGeoMath (warning)
# 10/03/2003 : MMO : Creation
#
#==============================================================================
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 

INCLUDED_MODULES = CATSapApprox

LINK_WITH = JS0GROUP					\
			CATMathematics				\
            CATMathStream				\
			CATSobObjects				\
			CATSubdivisionMeshOperators	\
			CATAdvancedMathematics




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
