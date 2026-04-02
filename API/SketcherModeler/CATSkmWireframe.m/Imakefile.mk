#@ autoformat 11:01:27

BUILT_OBJECT_TYPE=SHARED LIBRARY

# Pour la partie differente entre V6 et V5
#if defined(CATIAR210)
LINK_WITH_SPECIFIC= \       
    CATCDSV5Driver                 \ # CATCDSV5Driver                 CATCDSV5Driver
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMmrAutomationInterfaces     \ # CATMmrAutomationInterfaces     CATMmrAutomationInterfaces
    CATMmrKwdIntegration           \ # CATMmrKwdIntegration           CATMmrKwdIntegration
    CATPLMUIEditability            \ # CATPLMMngtBase                 CATPLMUIEditability
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATConstraintModeler           \ # ConstraintModeler              CATConstraintModeler
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
    CATGMAdvancedOperatorsInterfaces \ # GMAdvancedOperatorsInterfaces  CATGMAdvancedOperatorsInterfaces
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATCGMGeoMath
    KnowledgeIDLItf                \ # KnowledgeIDLItf                KnowledgeIDLItf
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATMecModInterfacesUUID        \ # MecModInterfaces               CATMecModInterfacesUUID
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMecModLiveInterfacesUUID    \ # MecModLiveInterfaces           CATMecModLiveInterfacesUUID
    CATMechanicalModelerLive       \ # MechanicalModelerLive          CATMechanicalModelerLive
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
    CATObjectModelerItf            \ # ObjectModelerInterfaces        CATObjectModelerItf
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATProductStructureInterfaces  \ # ProductStructureInterfaces     CATProductStructureInterfaces
    CATSysTS                       \ # SystemTS                       CATSysTS
    HLRModele                      \ # Tessellation                   CATTessellationHLR
    HLRProject                     \ # Tessellation                   CATTessellationHLRCGM
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
    SketcherPubIDL                 \ #                                
    CATSketcherUseItf              \ #                                
    CATAnnotationPresentation      \ # CATAnnotationPresentation      CATAnnFonts
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
    DataCommonProtocolUse          \ # DataCommonProtocolUse          DataCommonProtocolUse
    PLMCatalogItf                  \
#else
LINK_WITH_SPECIFIC= \
  CATMmiUUID  \
  CATGeometricOperators  \
  CATVisualization CATViz   \
  CATNewTopologicalObjects  CATTopologicalOperators \
  CATProductStructure1  \
  CATBasicTopologicalOpe   \
  FrFAdvancedObjects  \
  CATAdvancedTopologicalOpe \
  VarSweepDriver  CATTessellationHLRCGM CATTessellationHLR 
#endif
#
LINK_WITH= \
    $(LINK_WITH_SPECIFIC)           \
    CATAdvancedMathematics         \ # AdvancedMathematics            CATAdvancedMathematics
    CATFaiItf                      \ # FreeStyleAnalysisInterface     CATFaiItf
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    CATGngGraph                    \ # GenericNaming                  CATGngGraph
    CATGngReport                   \ # GenericNaming                  CATGngReport
    CATInfInterfaces               \ # InfInterfaces                  CATInfInterfaces
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATMmrDbgTools                 \ # MechanicalModeler              CATMmrDbgTools
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerItf            \ # ObjectModelerInterfaces        CATObjectModelerItf
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSkmSolver                   \ # SketcherModeler                CATSkmSolver
    CP0CLIP                        \ # ObjectModelerBase              CATObjectModelerBase
    DataAdmin                      \ # CATDataCompatibilityInfra      DataAdmin
    Infra2DItfCPP                  \ # Infra2DInterfaces              Infra2DItfCPP
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    MechanicalBuildInfra           \ # MechanicalBuildInfra           MechanicalBuildInfra
    MechanicalBuildInfraItfCPP     \ # MechanicalBuildInfraItf        MechanicalBuildInfraItfCPP
    SketcherItfInfra               \ # Infra2DInterfaces              SketcherItfInfra
    WhiteBoxesInfra                \
    CATWBx                         \
    CATCDSUtilities                \
#
OS = IRIX
LOCAL_CCFLAGS = -woff 3115
