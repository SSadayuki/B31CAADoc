#
# Copyright Dassault Systemes Provence 1999-2012, all rights reserved
#
#==============================================================================
# Imakefile for the bigger module CATCurvedBasedTopoOperators.m
#==============================================================================
#
# History :
#
#  Aug 2012 : MMO : Build sur Mobile, on coupe la partie qui contient le FORTRAN (CATCurveBasedGeoOperatorsA)
#                   cf. _MOBILE_SOURCE
#  Jul 2004 : AMR : Optimisation O2
#  Dec 2003 : mmo : Supprime GeoNurbsTools_2 on utilise l'officiel et ajout de
#                   GeoNurbsTools
#  Apr 2003 : jcv : Add CATCbtSmoothing
#  Apr 2003 : avc : Correction warning
#  Oct 2002 : jcv : Add TopoNurbsTools
#  May 2002 : jvc : Add CurveCurvatureControl
#  Jun 2000 : anr/scx : Add CATAdvancedMathematics
#  May 2000 : anr/scx : Use CurveStylingFillet
#  Fev 2000 : mmo : Use CATTopologicalOperators for journaling
#  Fev 2000 : prg : Add TopologicalProfiler for loft
#  Fev 2000 : mmo : Use CATTopologicalObjects not CATNewTopologicalObjects
#  Jan 2000 : mmo : This module used CATCurveBasedGeoOperatorsA.m
#  Nov 1999 : mmo : Creation to group all small modules into
#                   the bigger module  
#              
#==============================================================================
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 

INCLUDED_MODULES = DTKSweep              \
                   TopologicalProfiler   \
                   CurveStylingFillet    \
                   CurveCurvatureControl \
                   TopoNurbsTools        \
                   CATCbtSmoothing       \
                   CurvBsdTopoOpeItf \
                   CATCbtRegularisationVertex \
                   CATCbtFillLoop
                   
				 
COMDYN_MODULE = DTKSystem

#
LINK_WITH = CATGeometricObjects         \
            CATGeometricOperators       \
            GeoNurbsTools               \
            CATTopologicalObjects       \
            CATTopologicalOperators     \
            JS0GROUP                    \
            CATMathematics              \          
            CATCurveBasedInfrastructure \
            CATCurveBasedGeoOperators   \
            CATFreeFormOperators        \
            CATAdvancedTopologicalOpe   \
            CATAdvancedMathematics      \               
            CATCGMGeoMath               \
            CATMathStream               \
            CATCbgSmoothing                  \
            CATGMModelInterfaces             \
            CATGMOperatorsInterfaces         \
            CATGMAdvancedOperatorsInterfaces \
            CATTopologicalOperatorsLight     \
            CATCurveBasedGeoOperatorsA

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATCurveBasedTopoOperators CATGMModelInterfaces CATGMOperatorsInterfaces CATGMAdvancedOperatorsInterfaces
#endif

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn

OS = Windows_NT
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

OS = Darwin
LOCAL_LDFLAGS = -Xlinker -commons -Xlinker use_dylibs
