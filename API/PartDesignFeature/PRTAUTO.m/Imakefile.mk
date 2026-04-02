#@ autoformat 07:01:12
#
# SHARED LIBRARY
#

#if defined(_DS_COMPUTE_SERVER)
BUILT_OBJECT_TYPE = NONE
BUILD=NO
#else
BUILT_OBJECT_TYPE= NONE
#endif

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATScriptReplayInteractions    \ # AutomationInterfaces           CATScriptReplayInteractions
    MF0AUTO                        \ # CATMmrAutomation               CATMmrAutomation
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    InfItf                         \ # InfInterfaces                  CATInfInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATKnowledgeModeler            \ # KnowledgeModeler               CATKnowledgeModeler
    CK0FEAT                        \ # LiteralFeatures                CATLiteralFeatures
    Mathematics                    \ # Mathematics                    CATMathematics
    YN000MAT                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    ObjectModeler                  \ # ObjectModelerBase              CATObjectModelerBase
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    PartDesignFeature              \ # PartDesignFeature              CATPartDesignFeature
    PartItf                        \ # PartInterfaces                 CATPartInterfaces
    SketcherItf                    \ # SketcherInterfaces             CATSketcherInterfaces
    JS0GROUP                       \ # System                         JS0GROUP
#


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
