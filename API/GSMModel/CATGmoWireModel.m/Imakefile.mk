#@ autoformat 10:02:05
#ifdef LOCAL_DEFINITION_FOR_IID
   LINK_WITH_FOR_IID = \
    GSMInterfacesUUID              \ # GSMInterfaces                  GSMInterfacesUUID
    ObjectSpecsModelerUUID         \ # ObjectSpecsModeler             ObjectSpecsModelerUUID
#
#else
   LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY CATGmoWireModel
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

#
OS = COMMON

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_FOR_IID)           \
	CATGSMVersionning              \ # CATGSMTopoServices             CATGSMTopoServices
	CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoInterfaces               \ # GSMModel                       CATGmoInterfaces
    CATGmoUtilities                \ # GSMModel                       CATGmoUtilities
    CATGmoFactory                  \ # GSMModel                       GSMModelBasic
    CATGmoInit                     \ # GSMModel                       GSMModelBasic
    CATGmoMecMod                   \ # GSMModel                       GSMModelBasic
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    YN000MAT                       \ # Mathematics                    CATMathematics
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    NS0S3STR                       \ # System                         JS0GROUP
#

#
OS = AIX
INSTANCIATION_MODE = -qnotempinc -qNOOPTimize
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
    CATV6V5ModelServices           \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATInteractiveInterfaces       \ # InteractiveInterfaces
    CATObjectModelerBase           \ # ObjectModelerBase
#
#endif
#endif
