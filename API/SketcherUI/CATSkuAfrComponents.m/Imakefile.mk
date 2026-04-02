#@ autoformat 14:06:24
// COPYRIGHT DASSAULT SYSTEMES 2013
#======================================================================
# Imakefile for module CATSkuAfrComponents
#======================================================================
#  2013/03/25 Creation: jjv
#======================================================================
#

#if defined(CATIAV5R23)
BUILD=NO
BUILT_OBJECT_TYPE=NONE
#else

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = \
CATAfrComponentsModel          \ # AfrComponentsModel             CATAfrComponentsModel
    CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
	CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSketcherUseItf              \ # CATSketcherUseItf              CATSketcherUseItf
    DI0PANV2                       \ # Dialog                         DI0PANV2
    IntroInfra                     \ # IntrospectionInfrastructure    IntroInfra
    CATLifSpecs                    \ # KnowledgeInterfaces            KnowledgeItf
    Mathematics                    \ # Mathematics                    CATMathematics
    CATOMY                         \ # ObjectModelerSystem            ObjectModelerSystem
    CATSketcherInterfaces          \ # SketcherInterfaces             CATSketcherInterfaces
    CATSketcherVisu                \ # SketcherVisu                   CATSketcherVisu
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
    UIVCoreTools                   \ # UIVCoreTools                   UIVCoreTools
	VisuImmersive3D				   \
	CATVisController               \ # VisualizationController        CATVisController
    CATVisFoundation               \ # VisualizationFoundation        CATVisFoundation
    CATVisItf                      \ # VisualizationInterfaces        CATVisItf
	CATSkuCommands				   \
	CATSkuBase					   \
	CATSketcherToolsUI             \ # SketcherToolsUI                CATSketcherToolsUI
	CATSktAssistant                \ # SketcherToolsUI                CATSktAssistant
    CATSktSettings                 \ # SketcherToolsUI                CATSktSettings
	    CATSkm2DLayout                 \ # SketcherModeler                CATSkm2DLayout
    CATSkmWireframe                \ # SketcherModeler                CATSkmWireframe
	CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
	CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
	    CATPartConstraintUseItf        \ # CATPartConstraintUseItf        CATPartConstraintUseItf
#

#endif			
           


