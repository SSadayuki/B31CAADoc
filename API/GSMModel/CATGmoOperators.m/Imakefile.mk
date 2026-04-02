#@ autoformat 16:08:07
#
# SHARED LIBRARY CATGmoOperators.m
#
BUILT_OBJECT_TYPE =	SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

OS = COMMON

LOCAL_CCFLAGS= -DNewExtract


LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    YN000FUN                       \ # AdvancedMathematics            CATAdvancedMathematics
    CATGSMOperatorsInterfaces      \ # CATGSMOperatorsInterfaces      CATGSMOperatorsInterfaces
    CATGSMVersionning              \ # CATGSMTopoServices             CATGSMTopoServices
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
	CATSurfResMecMod               \ # CATSurfacicResources           CATSurfResMecMod
    CATSurfacicSharedItf           \ # CATSurfacicSharedItf           CATSurfacicSharedItf
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
    CATCDMOperatorsInterfaces      \ # CDMOperatorsInterfaces         CATCDMOperatorsInterfaces
    CATGMAdvancedOperatorsInterfaces \ # GMAdvancedOperatorsInterfaces  CATGMAdvancedOperatorsInterfaces
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoError                    \ # GSMModel                       CATGmoError
    CATGmoInterfaces               \ # GSMModel                       CATGmoInterfaces
    CATGmoSectioning               \ # GSMModel                       CATGmoSectioning
    CATGmoUtilities                \ # GSMModel                       CATGmoUtilities
    CATGmoWireOperators            \ # GSMModel                       CATGmoWireOperators
    CATGmoInit                     \ # GSMModel                       GSMModelBasic
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    SI0REPOR                       \ # GenericNaming                  CATGngReport
    CATGngReportUtilities          \ # GenericNaming                  CATGngReportUtilities
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    YN000MAT                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    CATOmx                         \ # ObjectModelerCollection        CATOmx
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    NS0S3STR                       \ # System                         JS0GROUP
	CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
	MechanicalBuildInfraItfCPP     \ # MechanicalBuildInfraItf        MechanicalBuildInfraItf
#

#
OS = AIX
INSTANCIATION_MODE = -qnotempinc -qNOOPTimize
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATSysTS                       \ # SystemTS                       CATSysTS
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMcoInterfaces               \ # MechanicalCommands             CATUdfInterfaces
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATVisualization               \ #                                
#
ALIASES_ON_IMPORT= CATGmoOperators CATGSMTopoServices
#endif
#endif
