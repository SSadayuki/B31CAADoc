#@ autoformat 11:01:27
#
# SHARED LIBRARY PRTVISU
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    PrtEnv                         \ # CATMmrVisualization            CATMmrVisu
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATOmnMain                     \ # ObjectModelerNavigator         CATObjectModelerNavigator
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    PartItf                        \ # PartInterfaces                 CATPartInterfaces
    JS0CORBA                       \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
    KnowledgeItf                   \ # KnowledgeItf                   KnowledgeItf 
    CATGMModelInterfaces            \ #
    CATMathematics        \ #
    SI0REPER        \ #
#
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATConstraintModeler2Itf       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATVisController               \ # VisualizationController        CATVisController
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
    YP00IMPL                  \ #  
    CATVisItf           \ #
    CATVisFoundation    \ #
    CATVisController    \#
    CATAfrFoundation      \ #
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATViz                         \ # VisualizationBase CATViz
    CATVisualization               \ # Visualization
    CATApplicationFrame            \ # ApplicationFrame
    AS0STARTUP                     \ # ProductStructure
    KnowledgeItf                    \ #
    CATUdfInterfaces                     \ # MechanicalCommands
    CATGMGeometricInterfaces                  \ #
    CATInteractiveInterfaces          \ #
#endif
#endif
 

