#@ autoformat 08:03:04
#
#                         Attention, code pas builde en V6 !!!
#
# Pour la partie differente entre V6 et V5
#if defined(CATIAR210)

BUILD=NO

BUILT_OBJECT_TYPE = NONE

#LINK_WITH_SPECIFIC= \
#    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
#    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
#    CATVisItf                      \ # VisualizationInterfaces        CATVisItf

#else

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = SketcherInterfacesUUID 
#else
LINK_WITH_FOR_IID =
#endif

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_SPECIFIC= \
    CATVisualization \

LINK_WITH= \
      $(LINK_WITH_SPECIFIC)        \
      $(LINK_WITH_FOR_IID)         \
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSkmSolver                   \ # SketcherModeler                CATSkmSolver
    CATSkmWireframe                \ # SketcherModeler                CATSkmWireframe
    InteractiveInterfacesUUID      \ # InteractiveInterfaces          InteractiveInterfacesUUID
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    MF0GEOM                        \ # MechanicalModeler              MF0GEOM

#endif
