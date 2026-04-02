#@ autoformat 16:08:07
# -----------------------------------------------
#
#      Imakefile of GSMUI/GSMModelBasic.m
#
# -----------------------------------------------
 
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6CLIENT_ONLY=
#
LINK_WITH_V6CLIENTANDV5=
#

INCLUDED_MODULES=CATGmoInit CATGmoMecMod CATGmoFactory CATGmoPlaneOfReference

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_V6CLIENTANDV5)     \
    CATGSMVersionning              \ # CATGSMTopoServices             CATGSMTopoServices
    CATClnBase                     \ # CATDataCompatibilityInfra      CATClnBase
    DataAdmin                      \ # CATDataCompatibilityInfra      DataAdmin
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicResourcesInit       \ # CATSurfacicResources           CATSurfacicResourcesInit
    CATSurfacicSharedItf           \ # CATSurfacicSharedItf           CATSurfacicSharedItf
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGmoInterfaces               \ # GSMModel                       CATGmoInterfaces
	CATGotInterfaces               \ # GSOInterfaces                  CATGotInterfaces
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATGeometricObjects
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATLiteralFeatures             \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMmlRefPlane                 \ # MechanicalModelerLive          CATMmlRefPlane
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATOmx                         \ # ObjectModelerCollection        CATOmx
    CATObjectModelerNavigator      \ # ObjectModelerNavigator         CATObjectModelerNavigator
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPartInterfaces              \ # PartInterfaces                 CATPartInterfaces
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
    CATConstraintModeler           \ # ConstraintModeler              CATConstraintModeler
    MechanicalBuildInfraItfCPP     \ # MechanicalBuildInfraItf        MechanicalBuildInfraItf
    CATGomUtilities                \ # GSMModelPrivate                CATGomUtilities
#

OS = COMMON

#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY)     \
	CATTPSItfBase                  \ # CATTPSInterfacesBase           CATTPSItfBase
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
    CATMagnitude                   \ # Magnitude                      CATMagnitude
    CATMmlSys                      \ # MechanicalModelerLive          CATMmlSys
    SGInfra                        \ # VisualizationFoundation        SGInfra
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
    CATConstraintModeler2Itf       \ # Constraint2Interfaces          CATConstraint2Interfaces
#
#endif

#if !defined(_DS_COMPUTE_SERVER)
LINK_WITH_V6CLIENTANDV5=\
#
#if defined(CATIAR201)
LINK_WITH_V6CLIENT_ONLY = \
    SELECT                         \ # CATIAApplicationFrame          CATIAApplicationFrame
#
#elif defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    SELECT                         \ # CATIAApplicationFrame          CATIAApplicationFrame
	CATTPSItf                      \ # CATTPSInterfaces               CATTPSItf
    CATKnowledgeModeler            \ # KnowledgeModeler               CATKnowledgeModeler
    CATMcoModel                    \ # MechanicalCommands             CATMcoModel
    CATMmrSys                      \ # MechanicalModeler              CATMmrSys
    CATViz                         \ #                                
    CATVisualization               \ #                                
#
#endif
#endif
