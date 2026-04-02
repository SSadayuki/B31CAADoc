# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module CATLightNCGM.m
#======================================================================
#
#  June 2003  Creation: CCK
#======================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH = JS0GROUP \
			YI00IMPL\
			Mathematics \
			CATTopologicalObjects \
  CATGeometricObjects \
  CATCGMGeoMath \
			CATSurfacicTopoOperators \
  CATGeometricOperators \
  CATMathStream \
  CATTopologicalOperators \
  FrFOpeCrv \
                        CATGMModelInterfaces
			
# a voir ce que je vais mettre dedans au fur et a mesure....


# System dependant variables
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

