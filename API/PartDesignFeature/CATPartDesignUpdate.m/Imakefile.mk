#@ autoformat 16:08:07
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
INCLUDED_MODULES = PRTREPLACE PRTBEHAVIOR PRTInvDir PRTNewBody PRTCutPaste \
                   PRTCCP PRTExternalView PrtElementToMove PrtAncestry

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
	$(LINK_WITH_V6CLIENTANDV5)     \
    CATGSMVersionning              \ # CATGSMTopoServices             CATGSMTopoServices
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATMmFunctionalItfCPP          \ # CATMmFunctionalInterfaces      CATMmFunctionalItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    SI0REPER                       \ # GenericNaming                  CATGngReportUtilities
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLifRelations                \ # KnowledgeModeler               CATKnowledgeModeler
    YN000M2D                       \ # Mathematics                    CATMathematics
    YN000MAT                       \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    MF0GEOM                        \ # MechanicalModeler              CATMechanicalModeler
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    ON0PROP                        \ # ObjectModelerBase              CATObjectModelerBase
    CATOmx                         \ # ObjectModelerCollection        CATOmx
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPartDesignBase              \ # PartDesignFeature              CATPartDesignBase
    PartDesignFeature              \ # PartDesignFeature              CATPartDesignFeature
    PartFeatureBase                \ # PartFeatureBase                PartFeatureBase
    PartItf                        \ # PartInterfaces                 CATPartInterfaces
    CATProductStructureInterfaces  \ # ProductStructureInterfaces     CATProductStructureInterfaces
    SketcherItf                    \ # SketcherInterfaces             CATSketcherInterfaces
    CO0RCINT                       \ # System                         JS0GROUP
    ListImpl                       \ # System                         JS0GROUP
    NS0SI18N                       \ # System                         JS0GROUP
    SystemUUID                     \ # System                         SystemUUID
    CATSysTS                       \ # SystemTS                       CATSysTS
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY)     \
	CATTemplateInterfaces          \ # CATTemplateInterfaces          CATTemplateInterfaces
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
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
	CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    CATUdfInterfaces               \ # MechanicalCommands             CATUdfInterfaces
    CATViz                         \ #                                
    CATVisualization               \ #                                
#
#endif
#endif
