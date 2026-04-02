#
# Copyright Dassault Systemes Provence 2003-2008, all rights reserved
#
#==================================================================================================
# Imakefile for the module CATSubdivisionTopoOperators.m
#==================================================================================================
# 08.03.2021 : RAQ : Nettoyage
# 03.07.2020 : RAQ : Ajout module CATStoVisualization et LINK_WITH CATSgoVisualization
# 06.06.2012 : RAQ : Ajout CATStoHybridOperators
# 13.10.2011 : RAQ : Ajout MathMeshParam
# 18.11.2010 : RAQ : Ajout CATStoUtil
# 09/04/2008 : MMO : Nettoyage de printemps suite deplacement du NET
# 14/02/2008 : RBD : Ajout CATStoFitting en R18/R203 & R19/R204 pour opérateurs topo
# 14/02/2008 : RBD : Ajout CATTopologicalOperators, TessPolygon & CATTessellation 
#					 en R18/R203 & R19/R204 pour opérateurs topo
# 05/10/2007 : RBD : Ajout CATSmaMeshAdvOperators en R18 / R203 pour opérateurs topo 
# 25/10/2006 : RAQ : Ajout CATSmaFillSubdivision en R18 / R203 pour opérateurs topo
#                    Ajout CATSubdivisionMeshGenerator en R18 / R203 pour opérateurs topo
#                    Ajout CATViz en R18 / R203 pour prévisu topo
# 03/07/2006 : PMG : CATStoDeformation est inclus dans la liste des modules
# 15/09/2005 : RAQ : CATStoTopoOperators est inclus dans la liste des modules
# 08/09/2005 : MMO : Suppression de CATIAV5R17 utilisation uniquement de PROTO_NET
# 27/05/2005 : ANR : Ajout de  CATSurfacicMathematics
# 10/05/2005 : FZA : Ajout de CATStoTopoOperators et de CATFreeFormOperators
# 28/01/2005 : ANR : Ajout de CATSmoOperators ; 
# 24/05/2004 : RAQ : Ajout CATGeometricOperators pour update topo
# 09/02/2004 : RAQ : Optimisation O2 + Portage 64 bits
# 05/01/2004 : RAQ : Création de CATSubdivisionTopoOperators à partir de CATSubdivisionOperators
# 23/07/2003 : MMO : On supprime CATTopologicalOperators CATAdvancedTopologicalOpe
# 12/06/2003 : JCV : 3 Modules CATSdoTopo CATSdoGeo CATSdoObjects
# 27/03/2003 : JCV : CATGeometricObjects + CATMathStream CATCGMGeoMath (warning)
# 10/03/2003 : MMO : Creation
#
#==================================================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY 

INCLUDED_MODULES = CATStoTopo  \
                   CATStoTopoOperators	\
                   CATStoDeformation	\
                   CATStoConv \
                   SubdivTopOpeItf  \
                   CATStoDebug      \
                   CATStoHybridOperators  \
                   CATStoUtil \
                   CATStoVisualization

LINK_WITH_BASE = JS0GROUP                \
                CATStoFitting			\
                CATSobObjects			\
                CATSapApprox			\
                CATSmoOperators         \
                CATSgoOperators			\
                CATGeometricObjects     \
                CATGMGeometricInterfaces \
                CATTopologicalObjects	\
                CATMathematics			\
                CATCGMGeoMath			\
                CATMathStream			\
                CATGeometricOperators   \
                CATFreeFormOperators    \
                CATSurfacicGeoOperators \
                CATAdvancedMathematics  \
                CATSmaFillSubdivision   \
                CATSmaMeshAdvOperators  \
                CATSubdivisionMeshGenerator \
                CATPolyhedralObjects \
                CATGMModelInterfaces \
                CATGMOperatorsInterfaces \
                CATGMAdvancedOperatorsInterfaces  \
                CATSobUtilities \
                GeoNurbsTools   \
                MathMeshParam  \
                PolyhedralModel \
                CATSgoVisualization \
                TessAPI

#if defined(CATIAV5R32) || defined(CATIAR424)
LINK_WITH = $(LINK_WITH_BASE)
#else
LINK_WITH = $(LINK_WITH_BASE) \
            CATViz
#endif

#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATSubdivisionTopOperators CATGMModelInterfaces CATGMOperatorsInterfaces CATGMAdvancedOperatorsInterfaces
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
