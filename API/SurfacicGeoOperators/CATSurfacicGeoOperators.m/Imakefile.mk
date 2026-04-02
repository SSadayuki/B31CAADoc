# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATSurfacicGeoOperators.m
#======================================================================
#
#  Jul 2004  : AMR : Optimisation O2
#  Apr 2003  ; avc ; Correction warning
#  Jul 2002  ; amr ; Add Copyright
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#BUILT_OBJECT_TYPE = LOAD MODULE
#
OS = COMMON

INCLUDED_MODULES = GeoApprox GeoPlate PlateFE SurfacicGeoOpeItf

 LINK_WITH= \
  CATSurfacicMathematics \
  YN000MAT \
  YN000TRE \
  YN000FUN \
  YP00IMPL \
  JS0CORBA \
  Y30E3PMG \
  CATGeometricObjects \
  CATCGMGeoMath  \
  CATMathStream \
  CATGMModelInterfaces \
  CATGMAdvancedOperatorsInterfaces \
  CATGMOperatorsInterfaces \
  CATSGMOperatorsInterfaces \
  CATGeometricOperators \
#if !defined(_MOBILE_SOURCE)
 CATELFOptimization 
#endif





#ifdef CATIAV5R20
ALIASES_ON_IMPORT=CATSurfacicGeoOperators CATGMModelInterfaces CATGMOperatorsInterfaces CATGMAdvancedOperatorsInterfaces
#endif

#
OS = AIX

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




