#@ autoformat 16:08:07
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

BUILD = YES

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    GraphicPropertiesToolbar       \ # CATIAApplicationFrame          CATIAApplicationFrame
	CATMathStream                  \ # CATMathStream                  CATMathStream
	CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
	CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
	CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
	CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
	CATGmoUtilities                \ # GSMModel                       CATGmoUtilities
	MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
	AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
	CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    AC0XXLNK                       \ # ObjectModelerBase              CATObjectModelerBase
    CATOMY                         \ # ObjectModelerSystem            ObjectModelerSystem
	SceneGraphManager              \ # SGManager                      SceneGraphManager
	CATSysTS                       \ # SystemTS                       CATSysTS
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	SGInfra                        \ # VisualizationFoundation        SGInfra
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    CATViz                         \ #                                
    CATVisualization               \ #                                
    CATApplicationFrame            \ #                                
#
#endif
#endif
