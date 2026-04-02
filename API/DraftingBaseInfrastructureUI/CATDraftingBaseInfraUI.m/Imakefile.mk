# COPYRIGHT DASSAULT SYSTEMES 2004
#=========================================================================================
# Imakefile du module CATDraftingBaseInfraUI
#=========================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH=  JS0FM \
            JS0GROUP \
            CATObjectModelerBase \
			CATObjectSpecsModeler \
            CATMathematics  \
            CATVisualization \
            CATViz \
            CATApplicationFrame \
			CATIAApplicationFrame \
            CATDialogEngine \
            CATSketcherToolsUI \
            CATSktSettings \
            CATSktAssistant \
			CATSkuBase \
            CATSkuCommands \
            CATSketcherVisu \
            DI0PANV2 \
			KnowledgeItf \
			CATGraph \
			CATLiteralFeatures \
			CATLifAutomation \
			CATLifServices \
            CATDraftingInfrastructure \
            CATSketcherInterfaces\
			CATInfInterfaces      \
			SystemUUID  \
            DraftingItfCPP \ 
            MecModItfCPP \ 
			CATPrint \
			DraftingBaseInfrastructureUIUUID \
			CATDraftingBaseInfra \
			CATMechanicalModelerUI \
			CATMecModInterfaces \
			CATMechanicalModeler \
			CATGraphicProperties \
            CATInteractiveInterfaces \
			CATVisVRML2 CATVisVRML \
		    SketcherItfInfra         \ # Infra2DInterfaces         SketcherItfInfra
		    CATObjectModelerItf		 \ # ObjectModelerInterfaces   CATObjectModelerItf
			CATFileMenu              \ #CATIDocumentPreview        CATFileMenu 
			CATSktTransient          \ #SketcherToolsUI            CATSktTransient
      CATDibModelerInterfaces
			





