#@ autoformat 16:08:07
#
# THIS MODULE IS LOADED AT WORKBENCH INIT:
# DO NOT ADD ANY MODULE WITHOUT DEEP THINKING
#
#
# SHARED LIBRARY CATGmoIntegration
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6CLIENTANDV5=
#
LINK_WITH_V6CLIENT_ONLY=
#

OS = COMMON
LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_V6CLIENTANDV5)     \
    YN000FUN                       \ # AdvancedMathematics            CATAdvancedMathematics
    CATLifExpressions              \ # CATExpressionEngine            CATExpressionEngine
    CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMTopoServices
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfResMecMod               \ # CATSurfacicResources           CATSurfResMecMod
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    CATGMAdvancedOperatorsInterfaces \ # GMAdvancedOperatorsInterfaces  CATGMAdvancedOperatorsInterfaces
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoInterfaces               \ # GSMModel                       CATGmoInterfaces
    CATGmoUtilities                \ # GSMModel                       CATGmoUtilities
    CATGmoFactory                  \ # GSMModel                       GSMModelBasic
    CATGmoInit                     \ # GSMModel                       GSMModelBasic
    CATGmoMecMod                   \ # GSMModel                       GSMModelBasic
    CATGmoAutoNotifCallBack        \ # GSMModelPrivate                CATGmoAutoNotifCallBack
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    CATGotInterfaces               \ # GSOInterfaces                  CATGotInterfaces
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    YN000MAT                       \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    ObjectModeler                  \ # ObjectModelerBase              CATObjectModelerBase
    CATOmx                         \ # ObjectModelerCollection        CATOmx
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    ListImpl                       \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
    SystemUUID                     \ # System                         SystemUUID
    CATSysTS                       \ # SystemTS                       CATSysTS
#


#    CATCloudEditorItf \

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY)     \
	CATFbdImportInterfaces		   \ # CATFbdImportInterfaces		  CATFbdImportInterfaces
	CATGSMUseItf                   \ # CATGSMUseItf                   CATGSMUseItf
    CATTemplateInterfaces          \ # CATTemplateInterfaces          CATTemplateInterfaces
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATMecModInterfacesUUID        \ # MecModInterfaces               CATMecModInterfacesUUID
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	PartItf                        \ # PartInterfaces                 CATPartInterfaces
    SGInfra                        \ # VisualizationFoundation        SGInfra
#endif
#

#if !defined(_DS_COMPUTE_SERVER)
LINK_WITH_V6CLIENTANDV5= \
    SELECT                         \ # CATIAApplicationFrame          CATIAApplicationFrame
    DraftingItfCPP                 \ # DraftingInterfaces             CATDraftingInterfaces
    SpaceAnalysisItf               \ # SpaceAnalysisInterfaces        CATSaiSpaceAnalysisItf
#
#if defined(CATIAR201)
LINK_WITH_V6CLIENT_ONLY = \
    CATAnnotationUseItf            \ # CATAnnotationUseItf            CATAnnotationUseItf
    CATDraftingGenUseItf           \ # CATDraftingGenUseItf           CATDraftingGenUseItf
    CATDibModelerInterfaces        \ # DibModelerInterfaces           CATDibModelerInterfaces
    CATDraftingUseItf              \ # DraftingUseItf                 CATDraftingUseItf
#
#elif defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATMcoModel                    \ # MechanicalCommands             CATMcoModel
    CATViz                         \ #                                
    CATVisualization               \ #                                
    CATMmiUUID                     \ #                                
#
#endif
#endif

