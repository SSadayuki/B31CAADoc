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
    CATGSMOperatorsInterfaces      \ # CATGSMOperatorsInterfaces      CATGSMOperatorsInterfaces
    CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMTopoServices
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    CATGupComponents               \ # GSMUIPrivate                   CATGupComponents
    CATGotInterfaces               \ # GSOInterfaces                  CATGotInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATCGMGeoMath
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    CATLifSpecs                    \ # KnowledgeInterfaces            KnowledgeItf
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    NS0S3STR                       \ # System                         JS0GROUP
    CATGomUtilities                \
    CATSurfacicInterfaces          \ 
    CATGmoMecMod                   \
    CATTechTools                   \
    CATClassACoreInterfaces        \
    CATFrrCPMesh                   \
    CATGuiSettings				   \
	CATSurfacicResourcesInit       \
	CATAuiHandle				   \
	CATV6V5ModelServices		   \
	CATGraphicProperties           \
	PrtProperties                  \


#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATOmx                         \ # ObjectModelerCollection        CATOmx
    CATOmxKernel                   \ # ObjectModelerCollection        CATOmxKernel
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
    CATVisController               \
    CATMecModUseItf                \
    CATAfrSelection                \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATViz                         \ # VisualizationBase CATViz
    CATVisualization               \ # Visualization
    CATApplicationFrame            \ # ApplicationFrame
    MecModItfCPP                   \
    SELECT                         \

    
#
#endif
#endif
