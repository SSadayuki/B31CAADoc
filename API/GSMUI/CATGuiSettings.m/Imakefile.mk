#@ autoformat 10:02:05
#
# SHARED LIBRARY CATGuiSettings.m
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoUtilities                \ # GSMModel                       CATGmoUtilities
    CATGmoInit                     \ # GSMModel                       GSMModelBasic
	CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CO0RCINT                       \ # System                         JS0GROUP
    JS0CATLM                       \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
	CATMagnitude                   \ # Magnitude                      CATMagnitude
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	AC0XXLNK					   \ # ObjectModelerBase              CATObjectModelerBase
    CATApplicationFrame            \ # ApplicationFrame
	CATLifDictionary               \ # LiteralFeatures                CATLifDictionary
#
#endif
#endif
