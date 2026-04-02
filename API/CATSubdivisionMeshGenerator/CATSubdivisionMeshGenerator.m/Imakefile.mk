#==============================================================================
# Copyright Dassault Systemes Provence 2006_2008, all rights reserved
#==============================================================================
#
# Imakefile for the big module CATSubdivisionMeshGenerator.m
#
#============================================================================== 
# 12.05.2020 : ANR : Ajout de CATSmgBasicOperatorOnMeshes (nettoyage Oper sur Mesh)
# 17.05.2019 : RAQ : Ajout SubdivMeshGenOpeItf et link with sur CATGMxxxInterfaces
# 22.07.2008 : ANR : AJout CATSmgAdvOperators
# 22.07.2008 : ANR : Ajout de CATSurfacicMathematics et CATPolyhedralObjects
# 21.04.2008 : RAQ : Ajout de CATCloudBasicResources
# 18:01:2008 : ANR : ajout de CATSmaFillSubdivision
# 21:11:2006 : RAQ : Migration nouvel opérateur de décimation
# 03/08/2006 : RAQ : Ajout module CATSmgSegmentation
# 15/05/2006 : ANR : Creation
#==============================================================================


BUILT_OBJECT_TYPE=SHARED LIBRARY 

INCLUDED_MODULES = CATSmgP2Q CATSmgSegmentation CATSmgAdvOperators CATSmgQuadCover CATSmgBasicOperatorOnMeshes SubdivMeshGenOpeItf

#if defined CATIAV5R19 || defined CATIAR206

LINK_WITH = JS0GROUP				       \ 
        		CATMathematics				\
        		CATAdvancedMathematics      \
            CATMathStream				\
        		CATSobObjects				\
        		CATSubdivisionObjects       \
        		CATSubdivisionMeshOperators	\  
        		CATSubdivisionApproximation \  
        		CATPolyhedralInterfaces     \
        		CATPolyDecimateOperators    \
        		CATELFSparseSolver          \
        		CATGeometricObjects         \
        		CATSmaMeshExtrapolation     \
            CATCloudBasicResources      \
            CATSurfacicMathematics      \
            CATPolyhedralObjects        \
            CATPolyhedralMathematicsDummy \
            PolyhedralModel                 \
            CATSmaMeshAdvOperators \
            CATSmaFillSubdivision  \
            CATGMModelInterfaces             \
            CATGMOperatorsInterfaces         \
            CATGMAdvancedOperatorsInterfaces \
			CATCldMeshCleaner
			
#elif defined CATIAR205

LINK_WITH = JS0GROUP				    \ 
      		CATMathematics				\
      		CATAdvancedMathematics      \
            CATMathStream				\
      		CATSobObjects				\
      		CATSubdivisionObjects       \
      		CATSubdivisionMeshOperators	\  
      		CATSubdivisionApproximation \  
      		CATPolyhedralInterfaces     \
      		CATPolyDecimateOperators    \
      		CATELFSparseSolver          \
      		CATGeometricObjects         \
      		CATSmaMeshExtrapolation 
			
#else

LINK_WITH = JS0GROUP					\ 
      		CATMathematics				\
      		CATAdvancedMathematics      \
            CATMathStream				\
      		CATSobObjects			    \
      		CATSubdivisionObjects       \
      		CATSubdivisionMeshOperators	\  
      		CATSubdivisionApproximation \  
      		CATPolyhedralInterfaces     \
      		CATPolyDecimateOperators    \
      		CATELFSparseSolver          \
      		CATGeometricObjects  
			
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
