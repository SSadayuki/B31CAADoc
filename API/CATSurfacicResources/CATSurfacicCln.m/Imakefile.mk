#@ autoformat 10:02:05
#
# SHARED LIBRARY CATSurfacicCln
#

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATClnBase                     \ # CATDataCompatibilityInfra      CATClnBase
    CATMathStream                  \ # CATMathStream                  CATMathStream
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATClnMecMod                   \ # MechanicalModeler              CATClnMecMod
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATClnSpecs                    \ # ObjectSpecsModeler             CATClnSpecs
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0CORBA                       \ # System                         JS0GROUP
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
#

#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATObjectModelerBase          \
#
#endif
#endif

