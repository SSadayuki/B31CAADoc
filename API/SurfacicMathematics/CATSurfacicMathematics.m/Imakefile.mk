# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATSurfacicMathematics.m
#======================================================================
#  Feb 2020  : pmg : elimination effective de MathMarshingVol (migration dans SurfacicImplicitModelling) 
#  Jul 2019  : pmg : remplace le module MathMarshingVol par MathMeshOpe  et suppression du Link with  CATCldResMeshInria  (migration dans SurfacicImplicitModelling)
#  Aug 2016  : pmg : mono coding pour avoir le meme source V5/V6
#  Aug 2016  : ALA : Ajout link with CATPolygonalTools
#  June 2016 : PMG : Ajout CATCldResMeshInria
#  Jul 2015  : jx2 : Ajout CATShapeDescriptorART2D
#  Sep 2013  : ktu : Ajout CATELFSparseSolver
#  Feb 2008  : pmg : Ajout CATPolyhedralInterfaces CATPolyhedralOperators CATPolyhedralObjects
#  oct 2006  : mps : supprime le module MathGeomFe et ajoute la dll (share library)  CATSurfacicMathGeomFeLight en R18
#  dec 2005  : pmg : ajoute le module MathAdvMarsh et supprime le module MathMarsh (Uniquement en R17 ou Phase2)
#  Jul 2004  : amr : Optimisation O2
#  Apr 2003  ; avc ; Correction warning
#  Jul 2002  ; amr ; Add Copyright
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
OS = COMMON

#if defined(CATIAV5R27)
ALIASES_ON_IMPORT=CATSurfacicMathematics CATSurfacicMathLight
INCLUDED_MODULES = MathCascade MathPlate MathApprox  MathAdvMarsh MathMeshParam MathShape MathMeshOpe
LINK_WITH= \
  CATSurfacicInfrastructure \
  YN000MAT \
  YN000FUN \
  JS0CORBA \
  JS0GROUP CATSysTS \
  CATMathematics \
  CATMathStream \
  CATSurfacicMathLight\
  CATPolyhedralInterfaces\
  CATPolyhedralOperators\
  CATPolyhedralObjects \
  CATPolygonalTools \
#if !defined(_MOBILE_SOURCE)
  CATELFOptimization CATELFSparseSolver 
#endif

#elif  defined(CATIAR419)
# idem V5R27 sans alias et avec CATPolyhedralMathematics
INCLUDED_MODULES = MathCascade MathPlate MathApprox  MathAdvMarsh MathMeshParam MathShape MathMeshOpe
LINK_WITH= \
  CATSurfacicInfrastructure \
  YN000MAT \
  YN000FUN \
  JS0CORBA \
  JS0GROUP CATSysTS \
  CATMathematics \
  CATMathStream \
  CATSurfacicMathLight\
  CATPolyhedralInterfaces\
  CATPolyhedralOperators\
  CATPolyhedralObjects \
  CATPolyhedralMathematics \
  CATPolygonalTools \
#if !defined(_MOBILE_SOURCE)
  CATELFOptimization CATELFSparseSolver
#endif


#elif defined(CATIAV5R23) 
ALIASES_ON_IMPORT=CATSurfacicMathematics CATSurfacicMathLight
INCLUDED_MODULES = MathCascade MathPlate MathApprox  MathAdvMarsh MathMeshParam MathShape
LINK_WITH= \
  CATSurfacicInfrastructure \
  YN000MAT \
  YN000FUN \
  JS0CORBA \
  JS0GROUP CATSysTS \
  CATMathematics \
  CATMathStream \
  CATSurfacicMathLight\
  CATPolyhedralInterfaces\
  CATPolyhedralOperators\
  CATPolyhedralObjects\
#if !defined(_MOBILE_SOURCE)
  CATELFOptimization CATELFSparseSolver  
#endif


#elif  defined(CATIAR216)
# idem V5R23 sans alias et avec CATPolyhedralMathematics
INCLUDED_MODULES = MathCascade MathPlate MathApprox  MathAdvMarsh MathMeshParam MathShape 
LINK_WITH= \
  CATSurfacicInfrastructure \
  YN000MAT \
  YN000FUN \
  JS0CORBA \
  JS0GROUP CATSysTS \
  CATMathematics \
  CATMathStream \
  CATSurfacicMathLight\
  CATPolyhedralInterfaces\
  CATPolyhedralOperators\
  CATPolyhedralObjects\
  CATPolyhedralMathematics \
#if !defined(_MOBILE_SOURCE)
  CATELFOptimization CATELFSparseSolver  
#endif


#elif defined(CATIAV5R18) || defined(CATIAR203)
ALIASES_ON_IMPORT=CATSurfacicMathematics CATSurfacicMathLight
INCLUDED_MODULES = MathCascade MathPlate MathApprox  MathAdvMarsh MathMeshParam 
LINK_WITH= \
  CATSurfacicInfrastructure \
  YN000MAT \
  YN000FUN \
  JS0CORBA \
  JS0GROUP CATSysTS \
  CATMathematics \
  CATMathStream \
  CATSurfacicMathLight\
#if !defined(_MOBILE_SOURCE)
  CATELFOptimization CATELFSparseSolver  
#endif

#elif defined(CATIAV5R17) || defined(CATIAR201)
ALIASES_ON_IMPORT=CATSurfacicMathematics CATSurfacicMathLight
INCLUDED_MODULES = MathCascade MathPlate MathApprox  MathAdvMarsh MathMeshParam MathGeomFe CATSurfacicMathGeomFeLight
LINK_WITH= \
  CATSurfacicInfrastructure \
  YN000MAT \
  YN000FUN \
  JS0CORBA \
  JS0GROUP CATSysTS \
  CATMathematics \
  CATMathStream \
  CATELFOptimization \
  CATSurfacicMathLight
#else
INCLUDED_MODULES = MathCascade MathPlate MathApprox MathMarsh MathAdvMarsh MathMeshParam MathGeomFe
LINK_WITH= \
  CATSurfacicInfrastructure \
  YN000MAT \
  YN000FUN \
  JS0CORBA \
  JS0GROUP CATSysTS \
  CATMathematics \
  CATMathStream \
  CATELFOptimization
#endif
##
OS = COMMON
LOCAL_CCFLAGS = -DCSFDB -DNO_CXX_EXCEPTION
#
OS = AIX
LOCAL_CCFLAGS = -DOS_AIX
#
OS = IRIX

#
OS = HP-UX

#
OS = SunOS

#
OS = Windows_NT
LOCAL_CCFLAGS = /D "WNT" /D "CSFDB"
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif




OS = Linux
# CPT on 2020/11/12: to prevent to link with unresolved symbols
# set LOCAL_2NDLDFLAGS only if ( MKMK_GCC_SANITIZER does not exist or is empty )
LOCAL_2NDLDFLAGS=$(MKMK_GCC_SANITIZER:%-"-Wl,-z,defs ")
