#==============================================================================
# Copyright Dassault Systemes Provence 2006, All Rights Reserved
#==============================================================================
#
# Imakefile pour le Module CATSmaFillSubdivision.m
#
#==============================================================================
# October,  2006 : MPS : Création
#==============================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = CATSmaBaseMeshOptimizer

#if defined(CATIAV5R18) || defined(CATIAR203)
LINK_WITH = JS0GROUP						          \
            JS0ERROR						          \
            CATMathStream					        \
            CATSubdivisionObjects			    \
      			CATSubdivisionMeshOperators		\
      			CATSubdivisionApproximation   \
		        CATSurfacicMathGeomFeLight    \
            CATMathematics                \
            CATSurfacicMathematics        \
            YN000FUN                      \
            CATSobUtilities
#else
LINK_WITH = JS0GROUP						          \
            JS0ERROR						          \
            CATMathStream					        \
            CATSubdivisionObjects			    \
			CATSubdivisionMeshOperators		\
			CATSubdivisionApproximation   \
		        CATSurfacicMathematics \
			CATMathematics   
			
#endif 
			

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
