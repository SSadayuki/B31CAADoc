#@ autoformat 14:06:24
#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6CLIENT_ONLY=
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
	SI0REPOR                       \ # GenericNaming                  CATGngReportUtilities
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    MMInterfaces                   \ # MechanicalModeler              CATMechanicalModeler
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
	  CATOmx                         \ # ObjectModelerCollection        CATOmx
    CATSurfacicResourcesInit\
    CATGMOperatorsInterfaces\
    CATGMModelInterfaces\
    CATMathematics\
    CATGMGeometricInterfaces\
	MechanicalBuildInfraItfCPP\
#

#if defined(CATIAR201)

LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY)     \
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
	  CATVisItf					   \
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys

#if !defined(_DS_COMPUTE_SERVER)
LINK_WITH_V6CLIENT_ONLY = \
    CATMmrAutomationInterfaces     \ # CATMmrAutomationInterfaces     CATMmrAutomationInterfaces
#endif

#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    CATLifRelations                \ # KnowledgeModeler               CATKnowledgeModeler
    CATLifDictionary               \ # LiteralFeatures                CATLiteralFeatures
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATVisualization               \ #                                
#
#endif
#endif
