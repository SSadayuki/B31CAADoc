BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= \
	CATApplicationFrame            \ # ApplicationFrame			      CATApplicationFrame
	CATAuiHandle				   \ # CATApplicationUIResources	  CATAuiTranslator
    CATCGMGeoMath                  \ # GeometricObjects				  CATCGMGeoMath
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
	CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces 
	CATGMGeometricInterfaces       \ # GeometricObjects				  GeometricObjects
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
	CATGupComponents               \ # GSMUIPrivate		              CATGupComponents 
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces
	CATMathematics                 \ # Mathematics                    CATMathematics
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerUI         \ # MechanicalModelerUI            CATMechanicalModelerUI
	CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf	
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUIResources         \ # CATSurfacicUIResources         CATSurfacicUIResources
	CATVisualization               \ # Visualization				  CATVisualization
    CATViz                         \ # VisualizationBase              CATViz
	DI0PANV2                       \ # Dialog                         DI0PANV2
	KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
	SELECT                         \ # CATIAApplicationFrame          CATIAApplicationFrame
	CATGraphicProperties           \ # CATGraphicProperties          CATGraphicProperties

OS = COMMON

