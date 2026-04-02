#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
SketcherInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
BUILT_OBJECT_TYPE = SHARED LIBRARY

OS = COMMON
# Pour la partie differente entre V6 et V5
#if defined(CATIAR210)
LINK_WITH_SPECIFIC= \
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATSketcherUseItf              \ # CATSketcherUseItf              CATSketcherUseItf
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATCGMGeoMath
    CATMecModLiveInterfacesUUID    \ # MecModLiveInterfaces           CATMecModLiveInterfacesUUID
#else
LINK_WITH_SPECIFIC= \
     CATGeometricOperators \
                CATTopologicalObjects \
               CATTopologicalOperators CATFreeFormOperators  \
               CATAdvancedTopologicalOpe CATMmiUUID CATInteractiveInterfaces  \                              
#endif

#
LINK_WITH= \
    $(LINK_WITH_FOR_IID)            \
    $(LINK_WITH_SPECIFIC)           \
    CATAdvancedMathematics         \ # AdvancedMathematics            CATAdvancedMathematics
    CATCGMSkmDataItf               \ # CATCGMSkmDataItf               CATCGMSkmDataItf
    CATCDSPlug2DItf                \ # CATCDSPlug2DItf                CATCDSPlug2DItf
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    JS0GROUP                       \ # System                         JS0GROUP
    TessAPI                        \ # Tessellation                   CATTessellation
    CATWBx                         \
    CATCDS                         \
    CATCDSUtilities                \


