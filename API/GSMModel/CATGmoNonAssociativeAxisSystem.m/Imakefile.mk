#@ autoformat 11:07:05
# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module CATGmoUpgradeOldTransfoFeats.m
#======================================================================
#
#  Jun 2005  Creation: lvn
#======================================================================
#
# LOAD MODULE 
#

#if defined(CATIAR201)
BUILD=NO
#endif

BUILT_OBJECT_TYPE=LOAD MODULE 

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    CATLifDictionary               \ # LiteralFeatures                CATLiteralFeatures
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    AC0XXLNK                       \ # ObjectModelerBase              CATObjectModelerBase
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    NS0S3STR                       \ # System                         JS0GROUP
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATViz                         \ #                                
#
#endif
#endif
