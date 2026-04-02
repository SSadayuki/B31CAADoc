#@ autoformat 17:03:25
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6CLIENTANDV5=
#
LINK_WITH_V6CLIENT_ONLY=
#
INCLUDED_MODULES = PRTDimVisu PRTGenFTA PRTGenDrw

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
	$(LINK_WITH_V6CLIENTANDV5)     \
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATTPSItfCPP                   \ # CATTPSInterfaces               CATTPSItf
    MF0DimInt                      \ # ConstraintModeler              CATConstraintModeler
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    DraftingItfCPP                 \ # DraftingInterfaces             CATDraftingInterfaces
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    GN0GRAPH                       \ # GenericNaming                  CATGngGraph
    GN0NAME                        \ # GenericNaming                  CATGngName
    SI0REPER                       \ # GenericNaming                  CATGngReportUtilities
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    Y300IINT                       \ # GeometricOperators             CATGeometricOperators
    Y30C3XGG                       \ # GeometricOperators             CATGeometricOperators
    Y30E3PMG                       \ # GeometricOperators             CATGeometricOperators
    Y3DYNOPE                       \ # GeometricOperators             CATGeometricOperators
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    YN000M2D                       \ # Mathematics                    CATMathematics
    YN000MAT                       \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    MF0GEOM                        \ # MechanicalModeler              CATMechanicalModeler
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerLive       \ # MechanicalModelerLive          CATMechanicalModelerLive
    BOOPER                         \ # NewTopologicalObjects          CATTopologicalObjects
    CXMODEL                        \ # NewTopologicalObjects          CATTopologicalObjects
    Topology                       \ # NewTopologicalObjects          CATTopologicalObjects
    YI00IMPL                       \ # NewTopologicalObjects          CATTopologicalObjects
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    ON0PROP                        \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPartDesignBase              \ # PartDesignFeature              CATPartDesignBase
    PartDesignFeature              \ # PartDesignFeature              CATPartDesignFeature
    PartFeatureBase                \ # PartFeatureBase                PartFeatureBase
    PartItf                        \ # PartInterfaces                 CATPartInterfaces
    SketcherItf                    \ # SketcherInterfaces             CATSketcherInterfaces
    CO0RCINT                       \ # System                         JS0GROUP
    Collections                    \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
    ListImpl                       \ # System                         JS0GROUP
    NS0SI18N                       \ # System                         JS0GROUP
    SystemUUID                     \ # System                         SystemUUID
    CATSysTS                       \ # SystemTS                       CATSysTS
    BODYNOPE                       \ # TopologicalOperators           CATTopologicalOperators
    TopoOperError                  \ # TopologicalOperators           CATTopologicalOperators
	CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          GMOperatorsInterfaces
	CATTopologicalObjects          \ # NewtopologicalObjects          NewtopologicalObjects
	PrimitivesLight                \ # TopologicalOperatorsLight      TopologicalOperatorsLight
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY)     \
	CATDraftingGenUseItf           \ # CATDraftingGenUseItf           CATDraftingGenUseItf
	CATPartConstraintUseItf        \ # CATPartConstraintUseItf        CATPartConstraintUseItf
    CATSkt2DGeomIntegUseItf        \ # CATSkt2DGeomIntegUseItf        CATSkt2DGeomIntegUseItf
    CATSketcherUseItf              \ # CATSketcherUseItf              CATSketcherUseItf
    CATTPSPROUUID                  \ # CATTPSInterfaces               CATTPSPROUUID
    CATTPSItfBase                  \ # CATTPSInterfacesBase           CATTPSItfBase
    CATTemplateInterfaces          \ # CATTemplateInterfaces          CATTemplateInterfaces
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATDraftingUseItf              \ # DraftingUseItf                 CATDraftingUseItf
	SceneGraphManager              \ # SGManager                      SceneGraphManager
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#endif
#

#if !defined(_DS_COMPUTE_SERVER)
LINK_WITH_V6CLIENTANDV5= \
#
#if defined(CATIAR201)
LINK_WITH_V6CLIENT_ONLY = \
	CATVisController               \ # VisualizationController        CATVisController
#
#elif defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	CATUdfInterfaces               \ # MechanicalCommands             CATUdfInterfaces
    CATViz                         \ #                                
    CATVisualization               \ #                                
    CATTPSUUID                     \ #        
#
#endif
#endif
