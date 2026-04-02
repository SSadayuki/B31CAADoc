#@ autoformat 14:06:24

BUILT_OBJECT_TYPE=SHARED LIBRARY
#

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6CLIENTANDV5=
#
LINK_WITH_CS_ONLY=
#
LINK_WITH_V6CLIENT_ONLY=

#
LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_CS_ONLY)           \
	  $(LINK_WITH_V6CLIENTANDV5)     \
    CATClnBase                     \ # CATDataCompatibilityInfra      CATClnBase
    CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMUtilitiesServices
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicCln                 \ # CATSurfacicResources           CATSurfacicCln
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CK0FEAT                        \ # LiteralFeatures                CATLiteralFeatures
    Mathematics                    \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATClnMecMod                   \ # MechanicalModeler              CATClnMecMod
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATClnSpecs                    \ # ObjectSpecsModeler             CATClnSpecs
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    Collections                    \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
    CATConstraintModeler           \ # ConstraintModeler              CATConstraintModeler
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
#

OS = COMMON

#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
	  $(LINK_WITH_V6CLIENT_ONLY)     \
	CATGipMechanical               \ # CATGlobalImportIntegration     CATGipMechanical
    CATGipSpec                     \ # CATGlobalImportIntegration     CATGipSpec
    CATGlobalImportInterfaces      \ # CATGlobalImportInterfaces      CATGlobalImportInterfaces
    CATGlobalImportUUID            \ # CATGlobalImportInterfaces      CATGlobalImportUUID
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
    CATMmrKwdIntegration           \ # CATMmrKwdIntegration           CATMmrKwdIntegration
#
#endif

#if defined(_DS_COMPUTE_SERVER)
LINK_WITH_CS_ONLY = 
#else
LINK_WITH_V6CLIENTANDV5=

#
#if defined(CATIAR201)
LINK_WITH_V6CLIENT_ONLY = \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
	  MF0AUTO                        \ # CATMmrAutomation               CATMmrAutomation
    CATMmrAutomationInterfaces     \ # CATMmrAutomationInterfaces     CATMmrAutomationInterfaces
	  KnowledgeIDLItf                \ # KnowledgeIDLItf                KnowledgeIDLItf
#
#elif defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    CATApplicationFrame            \ #                                
    CATVisualization               \ #                                
    CATViz                         \ #
#
#endif
#endif
