#@ autoformat 09:06:23
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
    GeometricObjectsUUID           \ # GeometricObjects               GeometricObjectsUUID
    ObjectSpecsModelerUUID         \ # ObjectSpecsModeler             ObjectSpecsModelerUUID
    SystemUUID                     \ # System                         SystemUUID
    SketcherInterfacesUUID         \ #                                
#
#else
LINK_WITH_FOR_IID =
#endif
BUILT_OBJECT_TYPE=SHARED LIBRARY


# Pour la partie differente entre V6 et V5
#if defined(CATIAR210)
LINK_WITH_SPECIFIC= \
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMmrAutomationInterfaces     \ # CATMmrAutomationInterfaces     CATMmrAutomationInterfaces
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    SketcherPubIDL                 \ # CATSketcherIDLItf              SketcherPubIDL
#else
LINK_WITH_SPECIFIC= \
    CATInteractiveInterfaces       \
#endif
		
LINK_WITH= \
    $(LINK_WITH_FOR_IID)           \
    $(LINK_WITH_SPECIFIC)          \
    CATScriptReplayInteractions    \ # AutomationInterfaces           CATScriptReplayInteractions
    CATMmrAutomation               \ # CATMmrAutomation               CATMmrAutomation
    MF0AUTO                        \ # CATMmrAutomation               CATMmrAutomation
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSkmWireframe                \ # SketcherModeler                CATSkmWireframe
    JS0GROUP                       \ # System                         JS0GROUP
    CATInfInterfaces               \ 
#

OS = IRIX
LOCAL_CCFLAGS = -woff 3115
