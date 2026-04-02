#@ autoformat 14:06:24

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
OS = COMMON
LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATGSMVersionning              \ # CATGSMTopoServices             CATGSMTopoServices
    Search                         \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfResMecMod               \ # CATSurfacicResources           CATSurfResMecMod
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATConstraintModeler           \ # ConstraintModeler              CATConstraintModeler
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoIntegration              \ # GSMModel                       CATGmoIntegration
    CATGmoInterfaces               \ # GSMModel                       CATGmoInterfaces
    CATGmoOperators                \ # GSMModel                       CATGmoOperators
    CATGmoUtilities                \ # GSMModel                       CATGmoUtilities
    CATGmoWireOperators            \ # GSMModel                       CATGmoWireOperators
    CATGmoMecMod                   \ # GSMModel                       GSMModelBasic
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    GN0GRAPH                       \ # GenericNaming                  CATGngGraph
    SI0REPER                       \ # GenericNaming                  CATGngReportUtilities
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    YN000MAT                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    ON0PROP                        \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSkmWireframe                \ # SketcherModeler                CATSkmWireframe
    NS0S3STR                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
    GN0GRAPH                       \ # GenericNaming                  CATGngGraph
#

#
OS = AIX
INSTANCIATION_MODE = -qnotempinc -qNOOPTimize
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
    CATVisController               \ # VisualizationController        CATVisController
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATMcoModel                    \ # MechanicalCommands             CATMcoModel
    CATVisualization               \ #                                
#
#endif
#endif
