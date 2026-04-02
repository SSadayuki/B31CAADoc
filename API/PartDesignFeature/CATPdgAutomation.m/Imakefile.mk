#@ autoformat 16:08:07
#
# SHARED LIBRARY
#

#if defined(_DS_COMPUTE_SERVER)
BUILT_OBJECT_TYPE = NONE
BUILD=NO
#else
BUILT_OBJECT_TYPE=SHARED LIBRARY
#endif

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
INCLUDED_MODULES = PRTAUTO

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATScriptReplayInteractions    \ # AutomationInterfaces           CATScriptReplayInteractions
    GSMPubIDL                      \ # CATGSMIDLItf                   CATGSMIDLItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATMmrAutomation               \ # CATMmrAutomation               CATMmrAutomation
    SketcherPubIDL                 \ # CATSketcherIDLItf              SketcherPubIDL
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    InfItf                         \ # InfInterfaces                  CATInfInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMathematics                 \ # Mathematics                    CATMathematics
    YN000MAT                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    ObjectModeler                  \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPartDesignBase              \ # PartDesignFeature              CATPartDesignBase
    CATPartDesignFeature           \ # PartDesignFeature              CATPartDesignFeature
    PartFeatureBase                \ # PartFeatureBase                PartFeatureBase
    CATPartInterfaces              \ # PartInterfaces                 CATPartInterfaces
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATMmrAutomationInterfaces     \ # CATMmrAutomationInterfaces     CATMmrAutomationInterfaces
    CATPartIDLItf                  \ # CATPartIDLItf                  CATPartIDLItf
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
    KnowledgeIDLItf                \ # KnowledgeIDLItf                KnowledgeIDLItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
#
#endif
#endif
