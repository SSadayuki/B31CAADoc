#@ autoformat 09:06:23
LINK_WITH_FOR_IID =

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= \
    $(LINK_WITH_FOR_IID)           \
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    CATMathStream                  \ # CATMathStream                  CATMathStream
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    CATCGMGeoMath                  \ # GeometricObjects               CATCGMGeoMath
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherUseItf              \ # CATSketcherUseItf              CATSketcherUseItf
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSktAssistant                \ # SketcherToolsUI                CATSktAssistant
    CATSketcherToolsUI             \ # SketcherToolsUI                CATSketcherToolsUI 
    CATVisualization               \ # Visualization                  CATVisualization      
    CATSktSettings                 \ # SketcherToolsUI                CATSktSettings
	CP0CLIP                        \ # ObjectModelerBase              CATObjectModelerBase
          
#


