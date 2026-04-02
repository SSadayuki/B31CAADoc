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

#ifdef CATIAV5R21
BUILD=NO
#endif

BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATMathematics                 \ # Mathematics                    CATMathematics
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0GROUP                       \ # System                         JS0GROUP

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATGipMechanical               \ # CATGlobalImportIntegration     CATGipMechanical
    CATGipSpec                     \ # CATGlobalImportIntegration     CATGipSpec
    CATGlobalImportInterfaces      \ # CATGlobalImportInterfaces      CATGlobalImportInterfaces
    CATGlobalImportUUID            \ # CATGlobalImportInterfaces      CATGlobalImportUUID
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
#
#endif
#endif
