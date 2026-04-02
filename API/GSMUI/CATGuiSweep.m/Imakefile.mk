#@ autoformat 10:02:05
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATAuiHandle                   \ # CATApplicationUIResources      CATAuiHandle
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    CATFrrUtilities                \ # FreeStyleResources             CATFreeStyleResources
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
	CATGmoInit                     \ # GSMModel                       GSMModelBasic
    CATGmoInterfaces               \ # GSMModel                       CATGmoInterfaces
    CATGmoAutoNotifCallBack        \ # GSMModelPrivate                CATGmoAutoNotifCallBack
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    CATGuiSettings                 \ # GSMUI                          CATGuiSettings
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    CATGupComponents               \ # GSMUIPrivate                   CATGupComponents
    CATCGMGeoMath                  \ # GeometricObjects               CATCGMGeoMath
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    YN000MAT                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    NS0S3STR                       \ # System                         JS0GROUP
#



OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATViz                         \ # VisualizationBase CATViz
    CATVisualization               \ # Visualization
    CATApplicationFrame            \ # ApplicationFrame
    CATInteractiveInterfaces       \ # InteractiveInterfaces
#
#endif
#endif
