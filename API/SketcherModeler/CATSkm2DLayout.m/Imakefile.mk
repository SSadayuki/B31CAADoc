#@ autoformat 09:09:09
#  Imakefile de CATSkm2DLayout

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_FOR_IID =
# Pour la partie differente entre V6 et V5
#if defined(CATIAR210)
LINK_WITH_SPECIFIC= \
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSketcherUseItf              \ # CATSketcherUseItf              CATSketcherUseItf
    CATConstraintModeler           \ # ConstraintModeler              CATConstraintModeler
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    CATProviderItf                 \ # DataCommonProtocolUse          CATProviderItf
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
#else
LINK_WITH_SPECIFIC= \
     YI00IMPL\ #for CATBody
     CATMmiUUID \ #for CATITriContAccess
#endif
#
LINK_WITH= \
      $(LINK_WITH_SPECIFIC)        \
      $(LINK_WITH_FOR_IID)         \
    CATMecModExtendItf             \
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSkmSolver                   \ # SketcherModeler                CATSkmSolver
    CATSkmWireframe                \ # SketcherModeler                CATSkmWireframe
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0CORBA                       \ # System                         JS0GROUP  
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler  
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    CATMathematics                 \ # Mathematics                    CATMathematics
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CK0FEAT                        \ # LiteralFeatures                CATLiteralFeatures
    Infra2DItfCPP                  \ # Infra2DInterfaces              Infra2DItfCPP
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATCGMGeoMath
	

                      

