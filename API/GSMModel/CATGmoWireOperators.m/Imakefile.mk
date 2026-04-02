#@ autoformat 14:06:24
#ifdef LOCAL_DEFINITION_FOR_IID
   LINK_WITH_FOR_IID = \
    GSMInterfacesUUID              \ # GSMInterfaces                  GSMInterfacesUUID
    GSMModelUUID                   \ # GSMModel                       GSMModelUUID
    KnowledgeInterfacesUUID        \ # KnowledgeInterfaces            KnowledgeInterfacesUUID
    LiteralFeaturesUUID            \ # LiteralFeatures                LiteralFeaturesUUID
    MechanicalModelerUUID          \ # MechanicalModeler              MechanicalModelerUUID
    ObjectSpecsModelerUUID         \ # ObjectSpecsModeler             ObjectSpecsModelerUUID
#
#else
   LINK_WITH_FOR_IID =
#
#endif
#
# SHARED LIBRARY CATGmoWireOperators.m
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

#
OS = COMMON
LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_FOR_IID)           \
    CATGSMOperatorsInterfaces      \ # CATGSMOperatorsInterfaces      CATGSMOperatorsInterfaces
    CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMTopoServices
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
	CATSurfResMecMod               \ # CATSurfacicResources           CATSurfResMecMod
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoError                    \ # GSMModel                       CATGmoError
    CATGmoInterfaces               \ # GSMModel                       CATGmoInterfaces
    CATGmoUtilities                \ # GSMModel                       CATGmoUtilities
    CATGmoFactory                  \ # GSMModel                       GSMModelBasic
    CATGmoInit                     \ # GSMModel                       GSMModelBasic
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    SI0REPOR                       \ # GenericNaming                  CATGngReport
    CATGngReportUtilities          \ # GenericNaming                  CATGngReportUtilities
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    YN000MAT                       \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    NS0S3STR                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
	MechanicalBuildInfraItfCPP     \ # MechanicalBuildInfraItf        MechanicalBuildInfraItf
#
# 
OS = AIX
INSTANCIATION_MODE = -qnotempinc -qNOOPTimize
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATMagnitude                   \ # Magnitude                      CATMagnitude
	CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATMcoModel                    \ # MechanicalCommands             CATMcoModel
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
#
#endif
#endif
