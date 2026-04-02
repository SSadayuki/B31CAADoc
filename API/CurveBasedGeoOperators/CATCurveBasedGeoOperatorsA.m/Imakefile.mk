#==============================================================================
#
# Copyright Dassault Systemes Provence 1999-2012, all rights reserved
#
#==============================================================================
#
# Imakefile for the bigger module CATCurveBasedGeoOperatorsA.m
#
#==============================================================================
#
# Historique :
#
#  Aug 2012 : MMO : On ne build pas sur iOS (voir MOBILE)
#  Dec 2001 : AMR : nouveau module=DTKGeoTopo2.m (Optimisation 01 win_b64)
#  Jul 2004 : AMR : Optimisation O2
#  Mar 2003 : mmo : Traitement des warnings sur CATMathStream et CATCGMGeoMath
#  Oct 2002 : mmo : plus de reference a la R9
#  Fev 2002 : mmo : Ajout des options pour le compilateur Fortran SUN en R9
#  May 2000 : mmo : COMDYN_MODULE does not work on HP
#  Fev 2000 : mmo : Remove CGMObjet not used
#  Jan 2000 : mmo : Rename CATCurveBasedGeoOperators to 
#                   CATCurveBasedGeoOperatorsA for V5 Loft
#  Nov 1999 : mmo : Creation to group all small modules into the bigger module  
#
#==============================================================================
#

# SHARED LIBRARY sauf sur les mobiles ou on ne compile pas a cause du FORTRAN

#if os MOBILE          
BUILD=NO
#else
BUILT_OBJECT_TYPE=SHARED LIBRARY 
#endif

INCLUDED_MODULES = DTKConnection DTKFauxGeoTopo DTKFogNoFog DTKGeoTopo DTKGeoTopo2 DTKSi DTKV5Translator V5DTKTranslator DTKPlaque

#======================================================================

OS = AIX

COMDYN_MODULE = DTKSystem

LINK_WITH = CATFreeFormOperators        \
            JS0GROUP                    \
            CATNewTopologicalObjects    \
            CATGeometricOperators       \
            CATGeometricObjects         \
            CATGMGeometricInterfaces    \
            CATMathematics              \
            CATSurfacicMathematics      \
            CATSurfacicGeoOperators     \
            YN000FUN	                \
            JS0CORBA                    \
            YP00IMPL                    \
            CATCurveBasedInfrastructure \
            CATCurveBasedMathematics    \
            CATMathStream               \
            CATCGMGeoMath               \
            CATGMModelInterfaces

SYS_LIBS = -lxlf -lxlf90 -lxlfpad
LOCAL_CCFLAGS = -DOS_AIX


#======================================================================

OS = IRIX

COMDYN_MODULE = DTKSystem

LINK_WITH = CATFreeFormOperators        \
            CATNewTopologicalObjects    \
            CATGeometricOperators       \
            CATGeometricObjects         \
            CATGMGeometricInterfaces    \
            CATMathematics              \
            CATAdvancedMathematics      \
            CATSurfacicMathematics      \
            CATSurfacicGeoOperators     \
            CATSurfacicInfrastructure   \
            JS0GROUP                    \
            JS0CORBA                    \
            YP00IMPL                    \
            CATCurveBasedInfrastructure \
            CATCurveBasedMathematics    \
            CATMathStream               \
            CATCGMGeoMath               \
            CATGMModelInterfaces

SYS_LIBS = -lftn

#======================================================================

OS = intel_a

COMDYN_MODULE = DTKSystem

LINK_WITH = CATFreeFormOperators        \
            CATNewTopologicalObjects    \
            CATGeometricOperators       \
            CATGeometricObjects         \
            CATGMGeometricInterfaces    \
            CATMathematics              \
            CATAdvancedMathematics      \
            CATSurfacicMathematics      \
            CATSurfacicGeoOperators     \
            CATSurfacicInfrastructure   \
            JS0GROUP                    \
            JS0CORBA                    \
            YP00IMPL                    \
            CATCurveBasedInfrastructure \
            CATCurveBasedMathematics    \
            CATMathStream               \
            CATCGMGeoMath               \
            CATGMModelInterfaces

LOCAL_CCFLAGS = /D "WNT" /D "CSFDB"

#======================================================================

OS = win_b

COMDYN_MODULE = DTKSystem

LINK_WITH = CATFreeFormOperators        \
            CATNewTopologicalObjects    \
            CATGeometricOperators       \
            CATGeometricObjects         \
            CATGMGeometricInterfaces    \
            CATMathematics              \
            CATAdvancedMathematics      \
            CATSurfacicMathematics      \
            CATSurfacicGeoOperators     \
            CATSurfacicInfrastructure   \
            JS0GROUP                    \
            JS0CORBA                    \
            YP00IMPL                    \
            CATCurveBasedInfrastructure \
            CATCurveBasedMathematics    \
            CATMathStream               \
            CATCGMGeoMath               \
            CATGMModelInterfaces

LOCAL_CCFLAGS = /D "WNT" /D "CSFDB"

#======================================================================

OS = intel_a64

COMDYN_MODULE = DTKSystem

LINK_WITH = CATFreeFormOperators        \
            CATNewTopologicalObjects    \
            CATGeometricOperators       \
            CATGeometricObjects         \
            CATGMGeometricInterfaces    \
            CATMathematics              \
            CATAdvancedMathematics      \
            CATSurfacicMathematics      \
            CATSurfacicGeoOperators     \
            CATSurfacicInfrastructure   \
            JS0GROUP                    \
            JS0CORBA                    \
            YP00IMPL                    \
            CATCurveBasedInfrastructure \
            CATCurveBasedMathematics    \
            CATMathStream               \
            CATCGMGeoMath               \
            CATGMModelInterfaces

LOCAL_CCFLAGS = /D "WNT" /D "CSFDB"

LOCAL_LDFLAGS = /EXPORT:wdttyp

#======================================================================

OS = HP-UX

LINK_WITH = DTKSystem                   \
            CATFreeFormOperators        \
            CATNewTopologicalObjects    \
            CATGeometricOperators       \
            CATGeometricObjects         \
            CATGMGeometricInterfaces    \
            CATMathematics              \
            CATAdvancedMathematics      \
            CATSurfacicMathematics      \
            CATSurfacicGeoOperators     \
            CATSurfacicInfrastructure   \
            JS0GROUP                    \
            JS0CORBA                    \
            YP00IMPL                    \
            CATCurveBasedInfrastructure \
            CATCurveBasedMathematics    \
            CATMathStream               \
            CATCGMGeoMath               \
            CATGMModelInterfaces

#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90
#endif                

#======================================================================

OS = hpux_b64 

LINK_WITH = DTKSystem                   \
            CATFreeFormOperators        \
            CATNewTopologicalObjects    \
            CATGeometricOperators       \
            CATGeometricObjects         \
            CATGMGeometricInterfaces    \
            CATMathematics              \
            CATAdvancedMathematics      \
            CATSurfacicMathematics      \
            CATSurfacicGeoOperators     \
            CATSurfacicInfrastructure   \
            JS0GROUP                    \
            JS0CORBA                    \
            YP00IMPL                    \
            CATCurveBasedInfrastructure \
            CATCurveBasedMathematics    \
            CATMathStream               \
            CATCGMGeoMath               \
            CATGMModelInterfaces

#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90 -lcps 
#endif                

#======================================================================

OS = SunOS

COMDYN_MODULE = DTKSystem

LINK_WITH = CATFreeFormOperators        \
            CATNewTopologicalObjects    \
            CATGeometricOperators       \
            CATGeometricObjects         \
            CATGMGeometricInterfaces    \
            CATMathematics              \
            CATSurfacicMathematics      \
            CATAdvancedMathematics      \
            CATSurfacicGeoOperators     \
            CATSurfacicInfrastructure   \
            JS0GROUP                    \
            JS0CORBA                    \
            YP00IMPL                    \
            CATCurveBasedInfrastructure \
            CATCurveBasedMathematics    \
            CATMathStream               \
            CATCGMGeoMath               \
            CATGMModelInterfaces

SYS_LIBS = -lF77 -lM77

OPTIMIZATION_CPP = -xO4
OPTIMIZATION_FORTRAN = -xO4

#======================================================================
OS = win_b64

COMDYN_MODULE = DTKSystem

LINK_WITH = CATFreeFormOperators        \
            CATNewTopologicalObjects    \
            CATGeometricOperators       \
            CATGeometricObjects         \
            CATGMGeometricInterfaces    \
            CATMathematics              \
            CATAdvancedMathematics      \
            CATSurfacicMathematics      \
            CATSurfacicGeoOperators     \
            CATSurfacicInfrastructure   \
            JS0GROUP                    \
            JS0CORBA                    \
            YP00IMPL                    \
            CATCurveBasedInfrastructure \
            CATCurveBasedMathematics    \
            CATMathStream               \
            CATCGMGeoMath               \
            CATGMModelInterfaces

LOCAL_CCFLAGS = /D "WNT" /D "CSFDB"
#======================================================================
OS = Darwin

COMDYN_MODULE = DTKSystem

LINK_WITH = CATFreeFormOperators        \
            CATNewTopologicalObjects    \
            CATGeometricOperators       \
            CATGeometricObjects         \
            CATGMGeometricInterfaces    \
            CATMathematics              \
            CATAdvancedMathematics      \
            CATSurfacicMathematics      \
            CATSurfacicGeoOperators     \
            CATSurfacicInfrastructure   \
            JS0GROUP                    \
            JS0CORBA                    \
            YP00IMPL                    \
            CATCurveBasedInfrastructure \
            CATCurveBasedMathematics    \
            CATMathStream               \
            CATCGMGeoMath               \
            CATGMModelInterfaces

SYS_LIBS= -lifcoremt -limf -lsvml -lirc
LOCAL_LDFLAGS = -Xlinker -commons -Xlinker use_dylibs

#======================================================================

OS = Linux

COMDYN_MODULE = DTKSystem

LINK_WITH = CATFreeFormOperators        \
            CATNewTopologicalObjects    \
            CATGeometricOperators       \
            CATGeometricObjects         \
            CATGMGeometricInterfaces    \
            CATMathematics              \
            CATAdvancedMathematics      \
            CATSurfacicMathematics      \
            CATSurfacicGeoOperators     \
            CATSurfacicInfrastructure   \
            JS0GROUP                    \
            JS0CORBA                    \
            YP00IMPL                    \
            CATCurveBasedInfrastructure \
            CATCurveBasedMathematics    \
            CATMathStream               \
            CATCGMGeoMath               \
            CATGMModelInterfaces

SYS_LIBS= -lifcoremt -limf -lsvml -lirc

#======================================================================


OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

