#@ autoformat 11:01:27
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
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoAutoNotifCallBack        \ # GSMModelPrivate                CATGmoAutoNotifCallBack
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    CATGupComponents               \ # GSMUIPrivate                   CATGupComponents
    CATGotInterfaces               \ # GSOInterfaces                  CATGotInterfaces
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    JS0ERROR                       \ # System                         JS0GROUP
    JS0SCBAK                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATMmrVisu                     \ # CATMmrVisualization            CATMmrVisu
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
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
