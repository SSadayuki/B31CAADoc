#@ autoformat 14:06:24
#
# SHARED LIBRARY CATGmoAutoNotifCallBack
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

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATScriptReplayInteractions    \ # AutomationInterfaces           CATScriptReplayInteractions
    GSMPubIDL                      \ # CATGSMIDLItf                   CATGSMIDLItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATMmrAutomation               \ # CATMmrAutomation               CATMmrAutomation
    MF0AUTO                        \ # CATMmrAutomation               CATMmrAutomation
    SketcherPubIDL                 \ # CATSketcherIDLItf              SketcherPubIDL
    CATSurfResMecMod               \ # CATSurfacicResources           CATSurfResMecMod
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    CATGotInterfaces               \ # GSOInterfaces                  CATGotInterfaces
    CATInfInterfaces               \ # InfInterfaces                  CATInfInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMathematics                 \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0CORBA                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATMmrAutomationInterfaces     \ # CATMmrAutomationInterfaces     CATMmrAutomationInterfaces
    CATPartIDLItf                  \ # CATPartIDLItf                  CATPartIDLItf
    KnowledgeIDLItf                \ # KnowledgeIDLItf                KnowledgeIDLItf
    CATMagnitude                   \ # Magnitude                      CATMagnitude
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    PartItf                        \ # PartInterfaces                 CATPartInterfaces
#
#endif
#endif
