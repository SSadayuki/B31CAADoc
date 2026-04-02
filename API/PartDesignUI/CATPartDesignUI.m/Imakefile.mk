#@ autoformat 17:03:25
#
# SHARED LIBRARY PartDesignUI
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES_V5_ONLY=
INCLUDED_MODULES_V6_ONLY= CATPDGUESCCP 

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY= 
#

INCLUDED_MODULES = \
                   PartDesignUI \
                   PRTCRECHAMFER \
                   PRTCREFILLEDG PRTCREFILLFAC PRTCREFILLVAR PRTMODFILL \
                   PRTCREFILLTRI \
                   PrtHoleUI \
                   PrtOperationUI \
                   PRTCRESCALING \
                   PRTDRAFTUI \
                   PRTNOTIF PRTTOOLS \
                   PRTEDITPATTERN PRTPATTCOM \
                   PrtMirrorUI \
                   PrtPrismUI \
                   PrtMultiPrismUI \
                   PrtRevolUI \
                   PrtShellUI \
                   PrtSplitUI \
                   PrtSweepUI \
                   PrtStiffUI \
                   PrtThickUI \
                   PrtTrimUI \
                   PrtCloseUI \
                   PrtOffsetUI \
                   PrtRemoveFaceUI \
                   PrtThreadUI \
                   PrtThreadAnalysis \
                   PRTInsertInNewBodyUI \
                   PrtSolidCombineUI \
                   PrtAlignUI \
                   PrtSewingUI \
                   PrtPositionImportUI \
                   PRTAUTOFILLETUI \
                   CATPrtTechResUI \
				   PrtDeleteBoolInCTXUI \
				   PrtDraftBothSidesUI \
				   PRTAUTODRAFTUI \
				   PRTCCPABLE \
				   PRTSECTIONING \
				   PRTINTERRUPT \
				   PRTDEFEATURINGUI \
				   PrtColorManagement \
				   PrtVidPanel \
            $(INCLUDED_MODULES_V5_ONLY)           \
            $(INCLUDED_MODULES_V6_ONLY)           \
#

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATAuiHandle                   \ # CATApplicationUIResources      CATAuiHandle
    CATGSMUseItf                   \ # CATGSMUseItf                   CATGSMUseItf
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATMmFunctionalItfCPP          \ # CATMmFunctionalInterfaces      CATMmFunctionalItf
    CATMmrAutomation               \ # CATMmrAutomation               CATMmrAutomation
    MF0AUTO                        \ # CATMmrAutomation               CATMmrAutomation
    PrtEnv                         \ # CATMmrVisualization            CATMmrVisu
    SketcherPubIDL                 \ # CATSketcherIDLItf              SketcherPubIDL
    CATSurfacicCommands            \ # CATSurfacicCommands            CATSurfacicCommands
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATTerTechnoResultInterfacesUUID \ # CATTechResultInterfaces        CATTerTechnoResultInterfacesUUID
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    CATConstraintSettings          \ # ConstraintModelerUI            CATConstraintSettings
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0APPLI                       \ # DialogEngine                   CATDialogEngine
    DI0GRAF                        \ # DialogEngine                   CATDialogEngine
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    DraftingItfCPP                 \ # DraftingInterfaces             CATDraftingInterfaces
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    SI0REPER                       \ # GenericNaming                  CATGngReportUtilities
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    Y300IINT                       \ # GeometricOperators             CATGeometricOperators
    Y3DYNOPE                       \ # GeometricOperators             CATGeometricOperators
    InfItf                         \ # InfInterfaces                  CATInfInterfaces
    Infra2DItfCPP                  \ # Infra2DInterfaces              Infra2DItfCPP
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CK0FEAT                        \ # LiteralFeatures                CATLiteralFeatures
    CATLiteralsEditor              \ # LiteralsEditor                 CATLiteralsEditor
    YN000M2D                       \ # Mathematics                    CATMathematics
    YN000MAT                       \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMmrReplace                  \ # MechanicalModeler              CATMechanicalModeler
    MF0GEOM                        \ # MechanicalModeler              CATMechanicalModeler
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerLive       \ # MechanicalModelerLive          CATMechanicalModelerLive
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    YI00IMPL                       \ # NewTopologicalObjects          CATTopologicalObjects
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    ON0GREXT                       \ # ObjectModelerBase              CATObjectModelerBase
    ON0PROP                        \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPartDesignBase              \ # PartDesignFeature              CATPartDesignBase
    PartDesignFeature              \ # PartDesignFeature              CATPartDesignFeature
    PRTVISU                        \ # PartDesignUI                   PRTVISU
    PartFeatureBase                \ # PartFeatureBase                PartFeatureBase
    PartItf                        \ # PartInterfaces                 CATPartInterfaces
    CATProductStructureInterfaces  \ # ProductStructureInterfaces     CATProductStructureInterfaces
    SketcherItf                    \ # SketcherInterfaces             CATSketcherInterfaces
    CATSktAssistant                \ # SketcherToolsUI                CATSktAssistant
    CATSkuBase                     \ # SketcherUI                     CATSkuBase
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    JS0INF                         \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
    BODYNOPE                       \ # TopologicalOperators           CATTopologicalOperators
    CATTopologicalOperatorsLight   \ # TopologicalOperatorsLight      CATTopologicalOperatorsLight
	CATSurfacicUIResources         \ #
	GN0GRAPH                       \
#

OS = COMMON
#if defined(CATIAR201)

LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATAfrProgressTask             \ # AfrStandard                    CATAfrProgressTask
    CAT3DAppFeatureUIResources     \ # CAT3DAppFeatureUIResources     CAT3DAppFeatureUIResources
	CAT3DAppDesignUIResources      \ # CAT3DAppDesignUIResources     CAT3DAppDesignUIResources
    CAT3DMMechanical               \ # CAT3DMMIInterfaces             CAT3DMMechanical
    CATLiveShapeExposedInterfaces  \ # CATLiveShapeExposedInterfaces  CATLiveShapeExposedInterfaces
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATMmrAutomation               \ # CATMmrAutomation               CATMmrAutomation
    CATMmrAutomationInterfaces     \ # CATMmrAutomationInterfaces     CATMmrAutomationInterfaces
    CATPartIDLItf                  \ # CATPartIDLItf                  CATPartIDLItf
    CATSurfacicUserExperienceItf   \ # CATSurfacicUserExperienceItf   CATSurfacicUserExperienceItf
    CATTPSPROUUID                  \ # CATTPSInterfaces               CATTPSPROUUID
    CATTPSItfCPPBase               \ # CATTPSInterfacesBase           CATTPSItfBase
    CATTTRSItf                     \ # CATTTRSInterfaces              CATTTRSItf
    CATTemplateInterfaces          \ # CATTemplateInterfaces          CATTemplateInterfaces
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
    CATView                        \ # CATView                        CATView
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATDluItfCPP                   \ # DraftingLiveReviewUIInterfaces CATDraftingLiveReviewUIItf
    CATGngGraph                    \ # GenericNaming                  CATGngGraph
    IntroInfra                     \ # IntrospectionInfrastructure    IntroInfra
    KnowledgeIDLItf                \ # KnowledgeIDLItf                KnowledgeIDLItf
    CATKnowledgeUIItf              \ # KnowledgeUIItf                 CATKnowledgeUIItf
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATMecModInterfacesUI          \ # MecModInterfacesUI             CATMecModInterfacesUI
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
    CATMMediaPixelImage            \ # MultimediaPixelImage           CATMMediaPixelImage
    CATPLMModeler3DInterfaces      \ # PLMModelerBaseInterfaces       CATPLMModelerBaseInterfaces
    VisuDialog                     \ # VisuImmersiveDialog            VisuDialog
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	CATVisImmersivePanel           \ # VisuImmersiveUI                CATVisImmersivePanel
#
#else
#if defined(CATIAV5R21)
INCLUDED_MODULES_V5_ONLY = PrtConvertToHybridUI

LINK_WITH_V5_ONLY= \
    CATUdfInterfaces               \ # MechanicalCommands             CATUdfInterfaces
    CATViz                         \ #                                
    CATVisualization               \ #                                
    CATApplicationFrame            \ #                                
    AS0STARTUP                     \ #                                
    CATTPSUUID                     \ #                                
#
#endif
#endif
