BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= \
    CATMecModExtendItf             \ # CATMecModExtendItf             CATMecModExtendItf
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
	CATSurfResMecMod               \ # CATSurfacicResources           CATSurfacicResources
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    CATGeometricObjects            \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    Mathematics                    \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    Collections                    \ # System                         JS0GROUP
    SystemUUID                     \ # System                         SystemUUID
    CATSysTS                       \ # SystemTS                       CATSysTS
	CATDraftingInterfaces          \ # DraftingInterfaces             CATDraftingInterfaces	
	CATVisualization               \ # Visualization	              CATVisualization
	AS0STARTUP					   \ # ProductStructure		          AS0STARTUP
	CATGMOperatorsInterfaces	   \ # GMOperatorsInterfaces	      CATGMOperatorsInterfaces
	CATGMModelInterfaces		   \ # GMModelInterfaces		      CATGMModelInterfaces
	CATSketcherUseItf              \ # CATSketcherUseItf			  CATSketcherUseItf 
	CATMmlServices				   \ # MechanicalModelerLive     	  CATMmlServices
	CATSurfacicInterfaces		   \ # CATSurfacicInterfaces     	  CATSurfacicInterfaces
   CATConstraintModeler		      \ # ConstraintModeler     	        CATConstraintModeler
   CATIAApplicationFrame		   \ # CATIAApplicationFrame     	  CATIAApplicationFrame

OS = COMMON
