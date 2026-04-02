#@ autoformat 16:08:07
# -----------------------------------------------
#
#      Imakefile of GSMUI/GSMUIBasic.m
#
# -----------------------------------------------

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

INCLUDED_MODULES=CATGuiMecMod

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATGraphicProperties           \ # CATGraphicProperties           CATGraphicProperties
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    PrtEnv                         \ # CATMmrVisualization            CATMmrVisu
    PrtProperties                  \ # CATMmrVisualization            CATMmrVisu
    CATSurfResMecMod               \ # CATSurfacicResources           CATSurfResMecMod
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicSharedItf           \ # CATSurfacicSharedItf           CATSurfacicSharedItf
    CATSurfacicComponents          \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
	CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoMecMod                   \ # GSMModel                       GSMModelBasic
	CATGotInterfaces               \ # GSOInterfaces                  CATGotInterfaces
    CATGraph                       \ # Graph                          CATGraph
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMmrSpecToVisu               \ # MechanicalModeler              CATMmrSpecToVisu
    CATMmrVisProperties            \ # MechanicalModeler              CATMmrVisProperties
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPartInterfaces              \ # PartInterfaces                 CATPartInterfaces
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    NS0S1MSG                       \ # System                         JS0GROUP
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATAfrNavigator                \ # AfrNavigator                   CATAfrNavigator
    CAT3DDimVisuIntf               \ # CAT3DDimVisuInterfaces         CAT3DDimVisuIntf
    CATGSMVersionning              \ # CATGSMTopoServices             CATGSMTopoServices
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMmrLiveUI                   \ # CATMmrLiveUI                   CATMmrLiveUI
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
    CATSysTS                       \ # SystemTS                       CATSysTS
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATGSMVersionning              \ # CATGSMTopoServices             CATGSMTopoServices
    CATIAApplicationFrame          \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    CATMcoModel                    \ # MechanicalCommands             CATMcoModel
    CATViz                         \ #                                
    CATVisualization               \ #                                
    CATApplicationFrame            \ #                                
    CATFeatureCommands             \ #                                
#
#endif
#endif
