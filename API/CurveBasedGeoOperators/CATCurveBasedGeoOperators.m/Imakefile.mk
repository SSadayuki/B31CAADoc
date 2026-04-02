#==============================================================================
#
# Copyright Dassault Systemes Provence 2000, all rights reserved
#
#==============================================================================
#
# Imakefile for the bigger module CATCurveBasedGeoOperators.m
#
# Historique :
#  Jul 2004 : AMR : Optimisation O2
#  Apr 2004 ; anr/jcv : CATCbgSmoothing
#  Mar 2003 ; mmo : Traitement des warnings sur CATMathStream et CATCGMGeoMath
#  Oct 2002 ; mmo : plus de reference a la R9
#  Fev 2002 ; mmo : Ajout des options pour le compilateur Fortran SUN en R9
#  Oct 2000 ; mmo : delete DeleteFrFLoft !
#  May 2000 ; scx : Add GeoCrvStylingFillet
#  Fev 2000 ; prg : il faut affecter une seule fois la variable
#                   INCLUDED_MODULES. De plus, une fois la migration
#                   effectuee, on pourra enlever le module DeleteFrFLoft
#  Jan 2000 ; mmo : Use DeleteFrFLoft because the big module
#                   CATCurveBasedGeoOperators can not be empty
#  Jan 2000 ; mmo ; Creation for V5 Loft
#
#==============================================================================
#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = FrFLoft                 \
                   GeoCrvStylingFillet     \
                   GeoCrvCurvatureControl  \
                   CATCbgSmoothing CurvBsdGeoOpeItf


LINK_WITH = CATFreeFormOperators    \
            JS0GROUP                \
            CATMathematics          \
            CATAdvancedMathematics  \
            CATGeometricObjects     \
            CATGeometricOperators   \
            YN000FUN                \
            CATSurfacicMathematics  \
            CATSurfacicGeoOperators \
            CATMathStream           \
            CATCGMGeoMath \
            CATGMModelInterfaces \
            CATGMAdvancedOperatorsInterfaces \
            CATGMOperatorsInterfaces

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATCurveBasedGeoOperators CATGMModelInterfaces CATGMOperatorsInterfaces CATGMAdvancedOperatorsInterfaces
#endif

#==============================================================================

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
LOCAL_CCFLAGS = -DOS_AIX

OS = IRIX
SYS_LIBS = -lftn

OS = Windows_NT
LOCAL_CCFLAGS = /D "WNT" /D "CSFDB"
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

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

OPTIMIZATION_CPP = -xO4
OPTIMIZATION_FORTRAN = -xO4
