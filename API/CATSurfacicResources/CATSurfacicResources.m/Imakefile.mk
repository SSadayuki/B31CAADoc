#@ autoformat 14:06:24
#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE = SHARED LIBRARY


LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6_CLIENT_ONLY=
#
LINK_WITH_V6CLIENTANDV5=
#
MODULEs_V6_ONLY=

INCLUDED_MODULES = \
    CATSurfacicUtilities      \
    CATSurfResError           \
    CATSurfacicSelectionChain \
    CATSurfacicUtilities      \
    $(MODULEs_V6_ONLY)        \
#

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_V6CLIENTANDV5)     \
    YN000FUN                       \ # AdvancedMathematics            CATAdvancedMathematics
    CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMTopoServices
    CATGSMUseItf                   \ # CATGSMUseItf                   CATGSMUseItf
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    MechanicalBuildInfraItfCPP     \ # MechanicalBuildInfraItf        MechanicalBuildInfraItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicInterfacesUUID      \ # CATSurfacicInterfaces          CATSurfacicInterfacesUUID
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATV6V5MonocodeServices        \ # CATV6V5ModelServices           CATV6V5MonocodeServices
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    GN0GRAPH                       \ # GenericNaming                  CATGngGraph
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CK0FEAT                        \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMmrReplace                  \ # MechanicalModeler              CATMechanicalModeler
    MMInterfaces                   \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerLive       \ # MechanicalModelerLive          CATMechanicalModelerLive
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    PolyhedralModel                \ # PolyhedralInterfaces           CATPolyhedralInterfaces
    CATPolyMeshMappingOper         \ # PolyhedralOperators            CATPolyhedralOperators
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    SystemUUID                     \ # System                         SystemUUID
    CATSysTS                       \ # SystemTS                       CATSysTS
#


#if defined(CATIAV5R21)
ALIASES_ON_IMPORT= CATSurfacicResources CATV6V5ModelServices
#endif

#if !defined(_DS_COMPUTE_SERVER)
LINK_WITH_V6CLIENTANDV5= \
    MechanicalBuildInfra           \ # MechanicalBuildInfra           MechanicalBuildInfra
    CATFaiItf                      \ # FreeStyleAnalysisInterface     CATFaiItf
    CATFsiItf                      \ # FreeStyleShapeInterface        CATFsiItf
#endif

#if defined(CATIAR201)
MODULEs_V6_ONLY=CATSurfacicUtilitiesV6Only CATSurfacicResourcesLiveEdition

#if !defined(_DS_COMPUTE_SERVER)
LINK_WITH_V6CLIENT_ONLY = \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CK0AUTOM                       \ # KnowledgeAutomation            CATKweAutomation
    KnowledgeIDLItf                \ # KnowledgeIDLItf                KnowledgeIDLItf
    CATMmrAutomationInterfaces     \ # CATMmrAutomationInterfaces     CATMmrAutomationInterfaces
    CATGSMIDLItf                   \ # CATGSMIDLItf                   CATGSMIDLItf
#endif

LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY)     \
    DataAdmin                      \ # CATDataCompatibilityInfra      DataAdmin
	CATGipMechanical               \ # CATGlobalImportIntegration     CATGipMechanical
    CATGipSpec                     \ # CATGlobalImportIntegration     CATGipSpec
    CATGlobalImportInterfaces      \ # CATGlobalImportInterfaces      CATGlobalImportInterfaces
    CATGlobalImportUUID            \ # CATGlobalImportInterfaces      CATGlobalImportUUID
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    CATLifServices                 \ # KnowledgeModeler               CATKnowledgeModeler
    CATLifDictionary               \ # LiteralFeatures                CATLiteralFeatures
    CATApplicationFrame            \ #                                
    CATVisualization               \ #                                
    CATViz                         \ #                                
    GSMItf                         \ # 
#
#endif
#endif
