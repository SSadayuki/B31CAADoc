#@ autoformat 14:06:24
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
#
LINK_WITH_V6_ONLY=
#

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
	CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
	CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    CATLifSpecs                    \ # KnowledgeInterfaces            KnowledgeItf
    CATMathematics                 \ # Mathematics                    CATMathematics
	CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#
OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATGipMechanical               \ # CATGlobalImportIntegration     CATGipMechanical
    CATGipSpec                     \ # CATGlobalImportIntegration     CATGipSpec
    CATGlobalImportInterfaces      \ # CATGlobalImportInterfaces      CATGlobalImportInterfaces
    CATGlobalImportUUID            \ # CATGlobalImportInterfaces      CATGlobalImportUUID
    CATMmlRefPlane                 \ # MechanicalModelerLive          CATMmlRefPlane
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
#
#endif
#endif
