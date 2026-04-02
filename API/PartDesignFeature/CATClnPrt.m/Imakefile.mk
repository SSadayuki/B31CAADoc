#@ autoformat 13:09:27
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATClnBase                     \ # CATDataCompatibilityInfra      CATClnBase
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMGeometricInterfaces       \ # GeometricObjects               CATGMGeometricInterfaces
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CK0FEAT                        \ # LiteralFeatures                CATLiteralFeatures
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATClnMecMod                   \ # MechanicalModeler              CATClnMecMod
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATClnSpecs                    \ # ObjectSpecsModeler             CATClnSpecs
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPartDesignBase              \ # PartDesignFeature              CATPartDesignBase
    CATPartDesignFeature           \ # PartDesignFeature              CATPartDesignFeature
    CATPartInterfaces              \ # PartInterfaces                 CATPartInterfaces
    SketcherItf                    \ # SketcherInterfaces             CATSketcherInterfaces
    JS0GROUP                       \ # System                         JS0GROUP
	CATMathStream                  \ # Mathematics                    CATMathematics
  FeatureModelerExt              \ # FeatureModelerExt              FeatureModelerExt
   
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATV6V5ModelServices           \ # CATV6V5ModelServices           CATV6V5ModelServices
	CATVisItf                      \ # VisualizationInterfaces        CATVisItf
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
#
#endif
#endif
