#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
MechanicalModelerUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
SketcherInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#@ autoformat 11:01:27

BUILT_OBJECT_TYPE=SHARED LIBRARY

# Pour la partie differente entre V6 et V5
#if defined(CATIAR210)
LINK_WITH_SPECIFIC= \
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    CATMecModLiveInterfacesUUID    \ # MecModLiveInterfaces           CATMecModLiveInterfacesUUID
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
#else
LINK_WITH_SPECIFIC= \
     CATMmiUUID     \                                
#endif
#
LINK_WITH= \
    $(LINK_WITH_FOR_IID)            \
    $(LINK_WITH_SPECIFIC)           \
    CATClnBase                     \ # CATDataCompatibilityInfra      CATClnBase
    CATClnSpecs                    \ # ObjectSpecsModeler             CATClnSpecs
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSkmSolver                   \ # SketcherModeler                CATSkmSolver
    CATSkmWireframe                \ # SketcherModeler                CATSkmWireframe
    JS0GROUP                       \ # System                         JS0GROUP
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATSketcherUseItf              \ # CATSketcherUseItf              CATSketcherUseItf
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATClnMecMod                   \ # MechanicalModeler              CATClnMecMod
    CATClnCstMod                   \ # ConstraintModeler              CATClnCstMod
    


