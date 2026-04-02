#@ autoformat 06:08:31
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
LINK_WITH= \
    CD0FRAME                       \ # ApplicationFrame               CATApplicationFrame
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoInit                     \ # GSMModel                       GSMModelBasic
    CATGuiSettings                 \ # GSMUI                          CATGuiSettings
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMathematics                 \ # Mathematics                    CATMathematics
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    AD0XXBAS                       \ # ObjectModelerBase              AD0XXBAS
    SpaceAnalysisItf               \ # SpaceAnalysisInterfaces        SpaceAnalysisItf
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    JS0ERROR                       \ # System                         JS0GROUP
    JS0SCBAK                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
#

BUILD = NO

OS = COMMON
#if defined(CATIAR201)
#
#else
#if defined(CATIAV5R21)
#
BUILD = YES
#
#endif
#endif

