#@ autoformat 13:09:27
# COPYRIGHT DASSAULT SYSTEMES 2005
#======================================================================
# Imakefile for module CATSurfacic2DMode.m
#======================================================================
#
#  Apr 2005               Creation: SC
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

# Command creation
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMathematics                 \ # Mathematics                    CATMathematics
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMmlRefPlane                 \ # MechanicalModelerLive          CATMmlRefPlane
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATProductStructureInterfaces  \ # ProductStructureInterfaces     CATProductStructureInterfaces
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
    JS0STR                         \ # System                         JS0GROUP
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResources
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATMecModUIUseItf              \ # CATMecModUIUseItf              CATMecModUIUseItf
    CATTemplateInterfaces          \ # CATTemplateInterfaces          CATTemplateInterfaces
    CATPLMModeler3DInterfaces      \ # PLMModelerBaseInterfaces       CATPLMModeler3DInterfaces
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATApplicationFrame            \ # ApplicationFrame
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATProductStructure1           \ # ProductStructure
    CATUdfInterfaces               \ # MechanicalCommands             CATUdfInterfaces
    CATVisualization               \ # Visualization
    DI0PANV2                       \ # Dialog                         DI0PANV2
#
#endif
#endif
