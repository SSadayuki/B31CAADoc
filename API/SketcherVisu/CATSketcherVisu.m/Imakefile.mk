#@ autoformat 11:01:27

BUILT_OBJECT_TYPE=SHARED LIBRARY

# Pour la partie differente entre V6 et V5
#if defined(CATIAR210)
LINK_WITH_SPECIFIC= \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    CATSktToolsUseItf1             \ # CATSketcherToolsUseItf         CATSktToolsUseItf1
    CATSketcherUseItf              \ # CATSketcherUseItf              CATSketcherUseItf
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    CATConstraintSettings          \ # ConstraintModelerUI            CATConstraintSettings
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
    CATMmrVisu                     \ # CATMmrVisualization            CATMmrVisu
    CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
#else
LINK_WITH_SPECIFIC= \
    CATMechanicalCommands          \
    CATSurfacicInterfaces          \
    CATApplicationFrame            \ 
    CATVisualization CATViz        \
    CATConstraintModelerUI         \
    CATMmuSettings                 \
#endif
#
LINK_WITH= \
    $(LINK_WITH_SPECIFIC)           \
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    CATIAApplicationFrame          \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGraphicProperties           \ # CATGraphicProperties           CATGraphicProperties
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMmrReplace                  \ # MechanicalModeler              CATMmrReplace
    CATMechanicalModelerLive       \ # MechanicalModelerLive          CATMechanicalModelerLive
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherToolsUI             \ # SketcherToolsUI                CATSketcherToolsUI
    CATSktAssistant                \ # SketcherToolsUI                CATSktAssistant
    CATSktSettings                 \ # SketcherToolsUI                CATSktSettings
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSkmWireframe                \ # SketcherModeler                CATSkmWireframe
    MMUIDimVisu                    \ # ConstraintModelerUI            MMUIDimVisu
    Infra2DItfCPP                  \ # Infra2DInterfaces              Infra2DItfCPP
    SketcherItfInfra               \ # Infra2DInterfaces              SketcherItfInfra
    CATObjectModelerItf            \ # ObjectModelerInterfaces        CATObjectModelerItf
    
#
            
#LOCAL_CCFLAGS = -DDYS_DEBUG

OS = IRIX
LOCAL_CCFLAGS = -woff 3115 -G0

