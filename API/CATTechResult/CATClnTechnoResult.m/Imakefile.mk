#@ autoformat 07:01:09
# COPYRIGHT DASSAULT SYSTEMES 2006
#======================================================================
# Imakefile for module CATClnTechnoResult.m
#======================================================================
#
# SHARED LIBRARY CATClnTechnoResult
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
 
LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATClnBase                     \ # CATDataCompatibilityInfra      CATClnBase
    CATTerTechnoResultInterfacesUUID \ # CATTechResultInterfaces        CATTerTechnoResultInterfacesUUID
    CATTerTechnoResultItf          \ # CATTechResultInterfaces        CATTerTechnoResultItf
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATClnMecMod                   \ # MechanicalModeler              CATClnMecMod
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATClnSpecs                    \ # ObjectSpecsModeler             CATClnSpecs
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0CORBA                       \ # System                         JS0GROUP
    GN0GRAPH                       \ # GenericNaming                  CATGngGraph
    JS0ERROR                       \ # System                         JS0GROUP
    CATMathStream                  \ #CATMathStream                   CATMathStream
    CATGitInterfaces               \ #GSMInterfaces                   CATGitInterfaces
    CATPartDesignBase              \ #PartDesignFeature               CATPartDesignBase   

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATMechanicalModeler           \ # MechanicalModeler
#
#endif
#endif
