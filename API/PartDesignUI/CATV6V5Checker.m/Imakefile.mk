#@ autoformat 12:02:15
#if defined(CATIAR201)

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

INCLUDED_MODULES =

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
    CATTPSBaseUseItfIID            \ # CATTPSBaseUseItf               CATTPSBaseUseItfIID
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    DraftingItfCPP                 \ # DraftingInterfaces             CATDraftingInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CK0FEAT                        \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMmrTrilogy                  \ # MechanicalModelerLive          CATMmrTrilogy
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    CATOmx                         \ # ObjectModelerCollection        CATOmx
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    NS0S1MSG                       \ # System                         JS0GROUP
    NS0S3STR                       \ # System                         JS0GROUP
    CATVisController               \ # VisualizationController        CATVisController
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
    V6toV5IntegrationItfCPP        \ # V6toV5IntegrationItf           V6toV5IntegrationItfCPP
    V6toV5IntegrationBase          \ # V6toV5IntegrationBase          V6toV5IntegrationBase
#
    
#

#else


BUILD=NO
BUILT_OBJECT_TYPE=NONE

#endif
