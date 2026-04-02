#@ autoformat 16:08:07
#
# SHARED LIBRARY PRTFACTORY
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

#if defined(CATIAV5R24)
ALIASES_ON_IMPORT=CATPartDesignFeature CATPartDesignBase
#endif

ALIASES_ON_IMPORT=CATPartDesignFeature PartFeatureBase

INCLUDED_MODULES_V5_ONLY=
INCLUDED_MODULES_V6_ONLY=
INCLUDED_MODULES_V6CLIENT_ONLY=

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6CLIENTANDV5=
#
LINK_WITH_V6CLIENT_ONLY=
#

INCLUDED_MODULES = PartDesignFeature PRTFACTORY PRTSHAPE\
	PRTPRISM PRTMPRISM PRTREVOL PRTSWEEP PRTSTIFF PRTHOLE\
	PRTCHAMFER PRTDRAFT PRTFILLET\
	PRTMIRROR PRTSCALING\
	PRTSHELL PRTSPLIT PRTTHICK PRTCLOSE PRTOFFSET\
	PRTRECPATT\
	PRTBOOLEAN\
	PRTOBJ PRTUTILITY PRTTHREAD\
	PrtRemoveFace\
  PRTINSERTBODY\
  PRTSOLIDCOMBINE\
  PRTAUTOFILLET\
  PrtDeleteBoolInCTX\
  PRTAUTODRAFT\
  PRTDEFEATURING\
  $(INCLUDED_MODULES_V5_ONLY)\
  $(INCLUDED_MODULES_V6_ONLY)\

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
	$(LINK_WITH_V6CLIENTANDV5)     \
    CATAdvancedTopologicalOpe      \ # AdvancedTopologicalOpe         CATAdvancedTopologicalOpe
    CATBasicTopologicalOpe         \ # BasicTopologicalOpe            CATBasicTopologicalOpe
    CATDWCInfra                    \ # CATDataCompatibilityInfra      CATDWCInfra
    CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMTopoServices
    CATInstantCollabDesignItf      \ # CATInstantCollabDesignCAAItf   CATInstantCollabDesignItf
	CATGraphicProperties           \ # CATGraphicProperties           CATGraphicProperties
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATMmFunctionalItfCPP          \ # CATMmFunctionalInterfaces      CATMmFunctionalItf
    CATRmaItfCPP                   \ # CATRmaInterfaces               CATRmaInterfaces
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfResMecMod               \ # CATSurfacicResources           CATSurfResMecMod
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATTTRSItf                     \ # CATTTRSInterfaces              CATTTRSItf
    CATTerTechnoResultInterfacesUUID \ # CATTechResultInterfaces        CATTerTechnoResultInterfacesUUID
    CATTerTechnoResultItf          \ # CATTechResultInterfaces        CATTerTechnoResultItf
    CATCDMOperatorsInterfaces      \ # CDMOperatorsInterfaces         CATCDMOperatorsInterfaces
    CATConstraintModeler           \ # ConstraintModeler              CATConstraintModeler
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    CATDfiUUID                     \ # DraftingInterfaces             CATDfiUUID
    DraftingItfCPP                 \ # DraftingInterfaces             CATDraftingInterfaces
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGngGraph                    \ # GenericNaming                  CATGngGraph
    CATGngName                     \ # GenericNaming                  CATGngName
    CATGngReport                   \ # GenericNaming                  CATGngReport
    CATGngReportUtilities          \ # GenericNaming                  CATGngReportUtilities
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    CATGeometricOperators          \ # GeometricOperators             CATGeometricOperators
    Infra2DItfCPP                  \ # Infra2DInterfaces              Infra2DItfCPP
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLifServices                 \ # KnowledgeModeler               CATKnowledgeModeler
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    MechanicalBuildInfra           \ # MechanicalBuildInfra           MechanicalBuildInfra
    MechanicalBuildInfraItfCPP     \ # MechanicalBuildInfraItf        MechanicalBuildInfraItf
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    MF0GEOM                        \ # MechanicalModeler              CATMechanicalModeler
    CATMmrSpecToVisu               \ # MechanicalModeler              CATMmrSpecToVisu
    CATMechanicalModelerLive       \ # MechanicalModelerLive          CATMechanicalModelerLive
    CATTopologicalObjects          \ # NewTopologicalObjects          CATTopologicalObjects
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATOmx                         \ # ObjectModelerCollection        CATOmx
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    CATOMY                         \ # ObjectModelerSystem            ObjectModelerSystem
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPartDesignBase              \ # PartDesignFeature              CATPartDesignBase
    PartFeatureBase                \ # PartFeatureBase                PartFeatureBase
    CATPartInterfaces              \ # PartInterfaces                 CATPartInterfaces
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSkmWireframe                \ # SketcherModeler                CATSkmWireframe
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
    SystemUUID                     \ # System                         SystemUUID
    CATSysTS                       \ # SystemTS                       CATSysTS
    CATTopologicalOperators        \ # TopologicalOperators           CATTopologicalOperators
    CATTopologicalOperatorsLight   \ # TopologicalOperatorsLight      CATTopologicalOperatorsLight
    CATMmrVisProperties            \ # MechanicalModeler              CATMmrVisProperties
    PartFeatureBase                \ # PartFeatureBase                PartFeatureBase

OS = COMMON
#if defined(CATIAR201)
INCLUDED_MODULES_V6_ONLY = $(INCLUDED_MODULES_V6CLIENT_ONLY)\
						  PRTUserExperienceServices   CATPdgSCCP
LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY)     \
	CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATExpressionEngine            \ # CATExpressionEngine            CATExpressionEngine
    CATFbdImportInterfaces         \ # CATFbdImportInterfaces         CATFbdImportInterfaces
    CATInertiaSolverInterfaces     \ # CATInertiaSolverInterfaces     CATInertiaSolverInterfaces
    CATMmrKwdIntegration           \ # CATMmrKwdIntegration           CATMmrKwdIntegration
    CATMmrVisu                     \ # CATMmrVisualization            CATMmrVisu
    CATTPSBaseUseItfIID            \ # CATTPSBaseUseItf               CATTPSBaseUseItfIID
    CATTPSPROUUID                  \ # CATTPSInterfaces               CATTPSPROUUID
    CATTTRSItfAdapter              \ # CATTTRSInterfaces              CATTTRSItfAdapter
    CATTemplateInterfaces          \ # CATTemplateInterfaces          CATTemplateInterfaces
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
    SI0TOPAC                       \ # GenericNaming                  CATGngTopologicalAccess
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATMecModLiveInterfacesUUID    \ # MecModLiveInterfaces           CATMecModLiveInterfacesUUID
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
    CATMMediaPixelImage            \ # MultimediaPixelImage           CATMMediaPixelImage
    CATRmaVisu                     \ # RenderingMaterialVisu          CATRmaVisu
    V6toV5IntegrationBase          \ # V6toV5IntegrationBase          V6toV5IntegrationBase
    V6toV5IntegrationItfCPP        \ # V6toV5IntegrationItf           V6toV5IntegrationItf
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	CATSmoTesselate                \ # CATSurfacicResources           CATSmoTesselate
    SGInfra                        \ # VisualizationFoundation        SGInfra
#endif
#

#if !defined(_DS_COMPUTE_SERVER)
LINK_WITH_V6CLIENTANDV5= \
	CATIAApplicationFrame          \ # CATIAApplicationFrame          CATIAApplicationFrame
#
#if defined(CATIAR201)
INCLUDED_MODULES_V6CLIENT_ONLY = PRTInertia
LINK_WITH_V6CLIENT_ONLY = \
	CATStandardContainer           \ # CATGeneralWorkShopCommand      CATStandardContainer
	DataExchangeAppliAttribute     \ # DataExchangeAppliAttribute     DataExchangeAppliAttribute
	CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
#
#elif defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	CATKnowledgeModeler            \ # KnowledgeModeler               CATKnowledgeModeler
    CATMcoModel                    \ # MechanicalCommands             CATMcoModel
    CATUdfInterfaces               \ # MechanicalCommands             CATUdfInterfaces
    CATVisualization               \ #                                
    CATMmiUUID                     \ #                                
    CATTPSUUID                     \ # 
    CD0WIN                         \ #
             
#
#endif
#endif
