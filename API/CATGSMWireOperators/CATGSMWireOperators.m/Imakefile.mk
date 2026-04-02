#@ autoformat 10:02:05
# COPYRIGHT DASSAULT SYSTEMES 2008
#======================================================================
# Imakefile for module CATGSMWireOperators.m
#======================================================================
#
#  Oct 2008              Creation: COR
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATGSMBasicOperators           \ # CATGSMBasicOperators           CATGSMBasicOperators
    CATGSMOperatorsInterfaces      \ # CATGSMOperatorsInterfaces      CATGSMOperatorsInterfaces
    CATGSMVersionning              \ # CATGSMTopoServices             CATGSMTopoServices
   CATGSMErrors                   \ # CATGSMTopoServices             CATGSMTopoServices
   CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMTopoServices
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATCGMGeoMath
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    YN000MAT                       \ # Mathematics                    CATMathematics
    CATOperatorModeler             \ # OperatorModeler                CATOperatorModeler
    JS0CORBA                       \ # System                         JS0GROUP
#
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

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
#
#endif
#endif

