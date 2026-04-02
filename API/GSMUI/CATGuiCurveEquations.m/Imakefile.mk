#@ autoformat 11:10:31
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
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    CATLifSpecs                    \ # KnowledgeInterfaces            KnowledgeItf
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CK0PARAM                       \ # LiteralsEditor                 CATLiteralsEditor
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    JS0SCBAK                       \ # System                         JS0GROUP
#



OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	VisuDialog                     \ # VisuImmersiveDialog            VisuDialog
	UIVCoreTools                   \ # UIVCoreTools                   UIVCoreTools
    SGInfra                        \ # VisualizationFoundation        SGInfra
	CAT3DAppFeatureUIResources     \ # CAT3DAppFeatureUIResources     CAT3DAppFeatureUIResources
	CAT3DAppDesignUIResources      \ # CAT3DAppDesignUIResources      CAT3DAppDesignUIResources
	IntroInfra                     \ # IntrospectionInfrastructure    IntroInfra 
	CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
	ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATViz                         \ #                                
    CATVisualization               \ #                                
    CATApplicationFrame            \ #  
    CATInteractiveInterfaces       \ #                              
#
#endif
#endif
