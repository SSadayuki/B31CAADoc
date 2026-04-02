#@ autoformat 11:11:08
#
# SHARED LIBRARY CATGuiGraph
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicComponents          \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    AC0SPDOC                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CO0RCINT                       \ # System                         JS0GROUP
	CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrComponentsModel          \ # AfrComponentsModel             CATAfrComponentsModel
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATMmrVisu                     \ # CATMmrVisualization            CATMmrVisu
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATViz                         \ # VisualizationBase CATViz
    CATVisualization               \ # Visualization
    CATApplicationFrame            \ # ApplicationFrame
#
#endif
#endif
