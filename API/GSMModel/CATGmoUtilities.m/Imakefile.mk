#@ autoformat 16:08:07

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
    YN000FUN                       \ # AdvancedMathematics            CATAdvancedMathematics
    CATGSMVersionning              \ # CATGSMTopoServices             CATGSMTopoServices
    CATGSMUseItf                   \ # CATGSMUseItf                   CATGSMUseItf
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfResMecMod               \ # CATSurfacicResources           CATSurfResMecMod
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoIntegration              \ # GSMModel                       CATGmoIntegration
    CATGmoInterfaces               \ # GSMModel                       CATGmoInterfaces
    GSMModelBasic                  \ # GSMModel                       GSMModelBasic
    CATGmoAutoNotifCallBack        \ # GSMModelPrivate                CATGmoAutoNotifCallBack
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
    CATGotInterfaces               \ # GSOInterfaces                  CATGotInterfaces
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    YN000MAT                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMmlRefPlane                 \ # MechanicalModelerLive          CATMmlRefPlane
    ON0PROP                        \ # ObjectModelerBase              CATObjectModelerBase
    CATOmx                         \ # ObjectModelerCollection        CATOmx
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    PartItf                        \ # PartInterfaces                 CATPartInterfaces
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
    CATExpressionEngine            \ # CATExpressionEngine            CATExpressionEngine
    CATV6V5MonocodeServices        \ # CATV6V5ModelServices           CATV6V5ModelServices
    CATConstraint2Interfaces       \ # Constraint2Interfaces          CATConstraint2Interfaces
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#endif
#
#if !defined(_DS_COMPUTE_SERVER)
LINK_WITH_V6CLIENTANDV5=\
    CATConstraintModeler           \ # ConstraintModeler              CATConstraintModeler
#
#if defined(CATIAR201)
LINK_WITH_V6CLIENT_ONLY = \
    KnowledgeIDLItf                \ # KnowledgeIDLItf                KnowledgeIDLItf
#
#elif defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGmoWireOperators            \ # GSMModel                       CATGmoWireOperators
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    CATKnowledgeModeler            \ # KnowledgeModeler               CATKnowledgeModeler
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMcoModel                    \ # MechanicalCommands             CATMcoModel
    CATVisualization               \ #                                
#
ALIASES_ON_IMPORT = CATGmoUtilities CATSurfacicResources CATGomUtilities
#endif
#endif
