#@ autoformat 17:03:25
#
# SHARED LIBRARY CATGuiUtilities
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES_V5_ONLY = 
INCLUDED_MODULES_V6_ONLY = 

INCLUDED_MODULES= \
   $(INCLUDED_MODULES_V5_ONLY) \
   $(INCLUDED_MODULES_V6_ONLY) \

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

LINK_WITH_FOR_CLSID= \
    GSMInterfacesCLSID             \ # GSMInterfaces                  GSMInterfacesCLSID
    SystemUUID                     \ # System                         SystemUUID
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_FOR_CLSID)         \
    CATAuiHandle                   \ # CATApplicationUIResources      CATAuiHandle
	CATGraphicProperties           \ # CATGraphicProperties           CATGraphicProperties
    CATGSMModelServices            \ # CATGSMModelServices            CATGSMModelServices
    CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMTopoServices
    CATGSMUseItf                   \ # CATGSMUseItf                   CATGSMUseItf
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    PrtProperties                  \ # CATMmrVisualization            CATMmrVisu
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicSharedItf           \ # CATSurfacicSharedItf           CATSurfacicSharedItf
    CATSurfacicComponents          \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATFrrUtilities                \ # FreeStyleResources             CATFreeStyleResources
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
    CATGuiMultiple                 \ # GSMUI                          CATGuiMultiple
    CATGupComponents               \ # GSMUIPrivate                   CATGupComponents
    CATGotInterfaces               \ # GSOInterfaces                  CATGotInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMathematics                 \ # Mathematics                    CATMathematics
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    MF0GEOM                        \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
#



OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CAT3DAppFeatureUIResources     \ # CAT3DAppFeatureUIResources     CAT3DAppFeatureUIResources
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATSurfacicUserExperienceItf   \ # CATSurfacicUserExperienceItf   CATSurfacicUserExperienceItf
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    IntroInfra                     \ # IntrospectionInfrastructure    IntroInfra
	CATKnowledgeUIItf              \ # KnowledgeUIItf                 CATKnowledgeUIItf
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
    SGInfra                        \ # SGInfra                        SGInfra
    SceneGraphManager              \ # SGManager                      SceneGraphManager
    CATSysTS                       \ # SystemTS                       CATSysTS
    VisuDialog                     \ # VisuImmersiveDialog            VisuDialog
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	UIVCoreTools                   \ # UIVCoreTools                   UIVCoreTools
	CATGuiSettings                 \ # GSMUI                          GSMUI
	CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
	CATVisImmersivePanel           \ # CATVisImmersivePanel           VisuImmersiveUI
	CATGuiThickness                \ # GSMUI                          GSMUI
	CATGuiSphere                   \ # GSMUI                          CATGuiSphere
	CATGuiCurveEquations           \ # GSMUI                          CATGuiCurveEquations
	CATGuiCurve                    \ # GSMUI                          CATGuiCurve
	CATGuiNearest                  \ # GSMUI                          GSMUI
	CATGuiLaw					   \ # GSMUI                          CATGuiLaw
	CATGuiOnSupport				   \ # GSMUI                          CATGuiOnSupport
	CATAfrSelection				   \ # AfrSelection                   CATAfrSelection
	CATGuiMultiple				   \ # GSMUI                          CATGuiMultiple
	CATGuiCircle                   \ # GSMUI                          GSMUI
	CATGuiInverse                  \ # GSMUI                          CATGuiInverse
	CATGuiOffset                  \ # GSMUI                          CATGuiOffset
	CATGuiContour                  \ # GSMUI                          GSMUI
#
INCLUDED_MODULES_V6_ONLY = \
    CATGuiVIDPanel \
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMcoModel                    \ # MechanicalCommands             CATMcoModel
    CATViz                         \ #                                
    CATVisualization               \ #                                
    CATApplicationFrame            \ #                                
#
ALIASES_ON_IMPORT = CATGuiUtilities CATGSMUIV5only CATGupComponents
INCLUDED_MODULES_V5_ONLY = \
    CATGSMUIV5only \
#
#endif
#endif
