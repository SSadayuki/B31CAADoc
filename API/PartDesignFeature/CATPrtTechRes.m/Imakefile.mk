#@ autoformat 16:08:07
#======================================================================
# Imakefile for module CATPrtTechRes.m
#======================================================================
#
#  Apr 2004  Creation: juw
#======================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6CLIENTANDV5=
#
LINK_WITH_V6CLIENT_ONLY=
#

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
	$(LINK_WITH_V6CLIENTANDV5)     \
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATTerTechnoResultInterfacesUUID \ # CATTechResultInterfaces        CATTerTechnoResultInterfacesUUID
    CATTerTechnoResultItf          \ # CATTechResultInterfaces        CATTerTechnoResultItf
    CATDfiUUID                     \ # DraftingInterfaces             CATDfiUUID
    CATDraftingInterfaces          \ # DraftingInterfaces             CATDraftingInterfaces
    DraftingItfCPP                 \ # DraftingInterfaces             CATDraftingInterfaces
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    GN0GRAPH                       \ # GenericNaming                  CATGngGraph
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLifDictionary               \ # LiteralFeatures                CATLiteralFeatures
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATTopologicalObjects          \ # NewTopologicalObjects          CATTopologicalObjects
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPartDesignBase              \ # PartDesignFeature              CATPartDesignBase
    CATPartDesignFeature           \ # PartDesignFeature              CATPartDesignFeature
    CATPartInterfaces              \ # PartInterfaces                 CATPartInterfaces
    JS0GROUP                       \ # System                         JS0GROUP
    SystemUUID                     \ # System                         SystemUUID
    AnalysisTools                  \ # TopologicalOperators           CATTopologicalOperators
    CATTopologicalOperatorsLight   \ # TopologicalOperatorsLight      CATTopologicalOperatorsLight
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
#
    #

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY)     \
    CATDraftingGenUseItf           \ # CATDraftingGenUseItf           CATDraftingGenUseItf
	CATPartUseItf                  \ # CATPartUseItf                  CATPartUseItf
    CATTTRSItf                     \ # CATTTRSInterfaces              CATTTRSItf
    CATTTRSItfAdapter              \ # CATTTRSInterfaces              CATTTRSItfAdapter
    CATTemplateInterfaces          \ # CATTemplateInterfaces          CATTemplateInterfaces
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
    CATDraftingUseItf              \ # DraftingUseItf                 CATDraftingUseItf
    CATMagnitude                   \ # Magnitude                      CATMagnitude
	PartFeatureBase                \ # PartFeatureBase                PartFeatureBase
	CATSysTS                       \ # SystemTS                       CATSysTS
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#endif
#

#if !defined(_DS_COMPUTE_SERVER)
LINK_WITH_V6CLIENTANDV5= \
#
#if defined(CATIAR201)
LINK_WITH_V6CLIENT_ONLY = \
	CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
	CATVisController               \ # VisualizationController        CATVisController
#
#elif defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	CATUdfInterfaces               \ # MechanicalCommands             CATUdfInterfaces
#
#endif
#endif
