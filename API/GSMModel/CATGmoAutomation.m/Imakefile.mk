#@ autoformat 14:06:24
#
# SHARED LIBRARY CATGmoAutomation
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
    $(LINK_WITH_OS_DEPENDENT)      \
    CATScriptReplayInteractions    \ # AutomationInterfaces           CATScriptReplayInteractions
    GSMPubIDL                      \ # CATGSMIDLItf                   CATGSMIDLItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoUtilities                \ # GSMModel                       CATGmoUtilities
    CATGmoAutoNotifCallBack        \ # GSMModelPrivate                CATGmoAutoNotifCallBack
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    CATGotInterfaces               \ # GSOInterfaces                  CATGotInterfaces
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    InfItf                         \ # InfInterfaces                  CATInfInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CK0FEAT                        \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    CATMmlRefPlane                 \ # MechanicalModelerLive          CATMmlRefPlane
    ObjectModeler                  \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    NS0SI18N                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#

LINK_WITH_OS_DEPENDENT= \
    CATMmrAutomation               \ # CATMmrAutomation               CATMmrAutomation
#

#LOCAL_CCFLAGS= -DSPECDEBUG
# -DPortageReference


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATMmrAutomationInterfaces     \ # CATMmrAutomationInterfaces     CATMmrAutomationInterfaces
    KnowledgeIDLItf                \ # KnowledgeIDLItf                KnowledgeIDLItf
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATKnowledgeModeler            \ # KnowledgeModeler               CATKnowledgeModeler
    CATVisualization               \ #                                
#
#endif
#endif
