#@ autoformat 11:01:27
#
# SHARED LIBRARY CATGuiGlobalUserSettings.m
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
	CATSurfacicComponents          \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATDlgStandard                 \ # Dialog                         CATDlgStandard
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATGuiUtilities                \ # GSMUI                          CATGuiUtilities
    CATGupComponents               \ # GSMUIPrivate                   CATGupComponents
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CK0FEAT                        \ # LiteralFeatures                CATLiteralFeatures
    YN000MAT                       \ # Mathematics                    CATMathematics
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrProperties               \ # AfrProperties                  CATAfrProperties
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATVisController               \ # VisualizationController        CATVisController
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATViz                         \ # VisualizationBase CATViz
    CATVisualization               \ # Visualization
    CATApplicationFrame            \ # ApplicationFrame
    CATObjectModelerBase           \ # ObjectModelerBase
    CATIAApplicationFrame          \ # CATIAApplicationFrame
#
#endif
#endif
