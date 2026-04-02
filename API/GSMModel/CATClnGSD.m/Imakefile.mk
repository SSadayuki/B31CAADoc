#@ autoformat 11:01:24

#
# SHARED LIBRARY CATClnGSD
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

#
OS = COMMON
LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATClnBase                     \ # CATDataCompatibilityInfra      CATClnBase
    CATSurfacicCln                 \ # CATSurfacicResources           CATSurfacicCln
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoFactory                  \ # GSMModel                       GSMModelBasic
    CATGmoInit                     \ # GSMModel                       GSMModelBasic
    CATGmoMecMod                   \ # GSMModel                       GSMModelBasic
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMathematics                 \ # Mathematics                    CATMathematics
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    AC0XXLNK                       \ # ObjectModelerBase              CATObjectModelerBase
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATClnSpecs                    \ # ObjectSpecsModeler             CATClnSpecs
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0CORBA                       \ # System                         JS0GROUP
	CATGmoUtilities                \ # GSMModel                       CATGmoUtilities
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATClnMecMod                   \ # MechanicalModeler              CATClnMecMod
    MF0GEOM                        \ # MechanicalModeler              CATMechanicalModeler
    MMInterfaces                   \ # MechanicalModeler              CATMechanicalModeler
#
#endif
#endif
