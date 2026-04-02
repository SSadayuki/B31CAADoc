#@ autoformat 14:06:24
#
# SHARED LIBRARY CATGomUtilities
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6CLIENT_ONLY=
#
LINK_WITH_V6CLIENTANDV5=
#
OS = COMMON
LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_V6CLIENTANDV5)     \
    CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMUtilitiesServices
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATTechTools                   \ # CATMathStream                  CATMathStream
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfResMecMod               \ # CATSurfacicResources           CATSurfResMecMod
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATCDMOperatorsInterfaces      \ # CDMOperatorsInterfaces         CATCDMOperatorsInterfaces
    CATConstraintModeler           \ # ConstraintModeler              CATConstraintModeler
    CATGMAdvancedOperatorsInterfaces \ # GMAdvancedOperatorsInterfaces  CATGMAdvancedOperatorsInterfaces
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    GN0GRAPH                       \ # GenericNaming                  CATGngGraph
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    YN000MAT                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerLive       \ # MechanicalModelerLive          CATMechanicalModelerLive
    ON0PROP                        \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    NS0S3STR                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
#

#
OS = AIX
INSTANCIATION_MODE = -qnotempinc -qNOOPTimize
#

OS = COMMON
#if defined(CATIAR201)

LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY)     \
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATOmx                         \ # ObjectModelerCollection        CATOmx
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#endif

#if !defined(_DS_COMPUTE_SERVER)
LINK_WITH_V6CLIENTANDV5= \
    GSMPubIDL                      \ # CATGSMIDLItf                   CATGSMIDLItf
#
#if defined(CATIAR201)
LINK_WITH_V6CLIENT_ONLY = \
    CATMmrAutomationInterfaces     \ # CATMmrAutomationInterfaces     CATMmrAutomationInterfaces
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    KnowledgeIDLItf                \ # KnowledgeIDLItf                KnowledgeIDLItf
#
#elif defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMcoModel                    \ # MechanicalCommands             CATMcoModel
    CATVisualization               \ #                                
#
#endif
#endif
