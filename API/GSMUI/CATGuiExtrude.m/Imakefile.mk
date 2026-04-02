#@ autoformat 14:06:24
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATAuiHandle                   \ # CATApplicationUIResources      CATAuiHandle
    CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMUtilitiesServices
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
	CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicManipulators        \ # CATSurfacicManipulators        CATSurfacicManipulators
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    CATGmoInit                     \ # GSMModel                       GSMModelBasic
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoAutoNotifCallBack        \ # GSMModelPrivate                CATGmoAutoNotifCallBack
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    CATGuiSettings                 \ # GSMUI                          CATGuiSettings
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    CATGupComponents               \ # GSMUIPrivate                   CATGupComponents
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    YN000MAT                       \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    JS0FM                          \ # System                         JS0FM
    CO0LSTPV                       \ # System                         JS0GROUP
    JS0CORBA                       \ # System                         JS0GROUP
    JS0ERROR                       \ # System                         JS0GROUP
    JS0SCBAK                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
	CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
	CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	VisuDialog                     \ # VisuImmersiveDialog            VisuDialog
	UIVCoreTools                   \ # UIVCoreTools                   UIVCoreTools
	CAT3DAppFeatureUIResources     \ # CAT3DAppFeatureUIResources     CAT3DAppFeatureUIResources
	CAT3DAppDesignUIResources     \ # CAT3DAppDesignUIResources     CAT3DAppDesignUIResources
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	CATLifDictionary               \ # LiteralFeatures                CATLifDictionary
    CATViz                         \ #                                
    CATVisualization               \ #                                
    CATApplicationFrame            \ #                                
#
#endif
#endif
