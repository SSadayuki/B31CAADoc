
BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = CATPrtUtilities CATPrtDraft CATPrtInit CATPrtShape CATPrtFactory\
#
LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
LINK_WITH= \
	$(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    MF0DimInt                      \ # ConstraintModeler              CATConstraintModeler
	YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    JS0CORBA                       \ # System                         JS0GROUP
    CATOmx                         \ # ObjectModelerCollection        CATOmx
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    GN0GRAPH                       \ # GenericNaming                  CATGngGraph
    CATGngReportUtilities          \ # GenericNaming                  CATGngReportUtilities
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    MMInterfaces                   \ # MechanicalModeler              CATMechanicalModeler
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATPartInterfaces              \ # PartInterfaces                 CATPartInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    MechanicalBuildInfraItfCPP     \ # MechanicalBuildInfraItf        MechanicalBuildInfraItf
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
#
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
       CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATVisualization               \ # VisualizationInterfaces
	CATInteractiveInterfaces 	   \ #InteractiveInterfaces
#
#endif
#endif

