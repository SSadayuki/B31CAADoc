#@ autoformat 16:08:07

BUILT_OBJECT_TYPE=SHARED LIBRARY
ALIASES_ON_IMPORT=CATPartDesignBase PartFeatureBase

INCLUDED_MODULES_V6CLIENTANDV5=

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6CLIENTANDV5=
#
LINK_WITH_V6CLIENT_ONLY=
#
INCLUDED_MODULES = $(INCLUDED_MODULES_V6CLIENTANDV5)\
				   PRTUPGRADE PRTICON PRTKweHide PRTIsolate PRTUTILITYBASE PRTNAVIG

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
	$(LINK_WITH_V6CLIENTANDV5)     \
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATMmFunctionalItfCPP          \ # CATMmFunctionalInterfaces      CATMmFunctionalItf
    PrtEnv                         \ # CATMmrVisualization            CATMmrVisu
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfResMecMod               \ # CATSurfacicResources           CATSurfResMecMod
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATTPSItf                      \ # CATTPSInterfaces               CATTPSItf
    MF0DimInt                      \ # ConstraintModeler              CATConstraintModeler
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    GN0GRAPH                       \ # GenericNaming                  CATGngGraph
    SI0REPER                       \ # GenericNaming                  CATGngReportUtilities
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    Y3DYNOPE                       \ # GeometricOperators             CATGeometricOperators
    CATGraph                       \ # Graph                          CATGraph
    ON0GRAPH                       \ # Graph                          CATGraph
    VE0GRPH2                       \ # Graph                          CATGraph
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    KnowledgeItfCPP                \ # KnowledgeInterfaces            KnowledgeItf
    CK0FEAT                        \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    MechanicalBuildInfraItfCPP     \ # MechanicalBuildInfraItf        MechanicalBuildInfraItf
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    CATMmrSpecToVisu               \ # MechanicalModeler              CATMmrSpecToVisu
    CATMmrVisProperties            \ # MechanicalModeler              CATMmrVisProperties
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    ON0GREXT                       \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    PartFeatureBase                \ # PartFeatureBase                PartFeatureBase
    PartItf                        \ # PartInterfaces                 CATPartInterfaces
    CATProductStructureInterfaces  \ # ProductStructureInterfaces     CATProductStructureInterfaces
    SketcherItf                    \ # SketcherInterfaces             CATSketcherInterfaces
    JS0CATLM                       \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY)     \
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CAT3DDimVisuIntf               \ # CAT3DDimVisuInterfaces         CAT3DDimVisuIntf
    CATTPSItfBase                  \ # CATTPSInterfacesBase           CATTPSItfBase
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
    CATPLMModeler3DInterfaces      \ # PLMModelerBaseInterfaces       CATPLMModelerBaseInterfaces
    SGInfra                        \ # VisualizationFoundation        SGInfra
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#endif
#

#if !defined(_DS_COMPUTE_SERVER)
INCLUDED_MODULES_V6CLIENTANDV5 = PRTVISUImpl PrtCtxMenu
LINK_WITH_V6CLIENTANDV5= \
	ON0FRAME                       \ # CATIAApplicationFrame          CATIAApplicationFrame
	CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
#
#if defined(CATIAR201)
LINK_WITH_V6CLIENT_ONLY = \
	CATAfrComponentsModel          \ # AfrComponentsModel             CATAfrComponentsModel
	CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
	CATAfrNavigator                \ # AfrNavigator                   CATAfrNavigator
	CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
#
#elif defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	CATViz                         \ #                                
    CATVisualization               \ #                                
    CATApplicationFrame            \ #                                
    CATProductStructure1           \ #       
#
#endif
#endif
