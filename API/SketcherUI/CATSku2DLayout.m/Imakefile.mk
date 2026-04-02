#@ autoformat 11:11:08
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    SELECT                         \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATConstraintModeler           \ # ConstraintModeler              CATConstraintModeler
    Infra2DItfCPP                  \ # Infra2DInterfaces              Infra2DItfCPP
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
    CATMmuCommands                 \ # MechanicalModelerUI            CATMmuCommands
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSkm2DLayout                 \ # SketcherModeler                CATSkm2DLayout
    JS0CORBA                       \ # System                         JS0GROUP
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrComponentsModel          \ # AfrComponentsModel             CATAfrComponentsModel
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATApplicationFrame            \ #                                
#
#endif
#endif
