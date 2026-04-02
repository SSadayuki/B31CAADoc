#
# Copyright Dassault Systemes Provence 2003, all rights reserved
#
#==============================================================================
# Imakefile for the big module CATSubdivisionMathematics.m
#==============================================================================
#
# 14/12/2009 : AMR : Pour importer correctement en Phase2
# 09/02/2004 : XXX : Optimisation O2 + Portage 64 bits
# 17/11/2003 : RAQ : Création de CATSubdivisionObjects à partir de CATSubdivisionOperators
# 23/07/2003 : MMO : On supprime CATTopologicalOperators CATAdvancedTopologicalOpe
# 12/06/2003 : JCV : 3 Modules CATSdoTopo CATSdoGeo CATSdoObjects
# 27/03/2003 : JCV : CATGeometricObjects + CATMathStream CATCGMGeoMath (warning)
# 10/03/2003 : MMO : Creation
# 12.08.2020 : RAQ : Suppression de la depandance sur CATGMAdvancedOperatorsInterfaces
#
#==============================================================================
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 

INCLUDED_MODULES = CATSgoOperators CATSgoApprox SubdivGeoOpeItf

LINK_WITH = JS0GROUP \
			CATMathematics \
			CATAdvancedMathematics \
			CATMathStream \
			CATGeometricObjects \
			CATCGMGeoMath \
			CATSobObjects \
			CATSubdivisionMeshOperators \
			CATSapApprox \
			CATGMModelInterfaces \
      CATSobUtilities

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATSubdivisionGeoOperators CATGMModelInterfaces CATGMOperatorsInterfaces
#endif

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
