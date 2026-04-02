#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATDfiUUID \
ObjectSpecsModelerUUID \
CATIAApplicationFrameUUID \
LiteralFeaturesUUID \
ProductStructureUUID \
SystemUUID \
MechanicalModelerUUID \
ComponentsCatalogsUUID \
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 2000
#=========================================================================================
# Imakefile du module CATDraftingInfrastructure
#=========================================================================================
# 28/09/2000    jbb     Creation
# 28/03/2003    lhz     Ajout PDM
# 12/03/2004    lhz     Suppression CATPDMBaseInterfaces (inutilise)
#=========================================================================================

ALIASES_ON_IMPORT = CATDraftingBaseInfra CATDraftingInfrastructure

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) 	JS0GROUP CATDraftingInterfaces CATObjectSpecsModeler CATVisualization CATViz CATViz CATMathematics \
                                CATSketcherInterfaces CATObjectModelerBase CATTessellationHLR CATTessellationHLRCGM \
				                        CATProductStructure1 CATMatInterfaces \
                                CATMechanicalModeler CATApplicationFrame CATPrint CATLiteralFeatures KnowledgeItf JS0FM  DI0PANV2  \
				                        CATProductStructure1 AS0STARTUP CATMatInterfaces \
                                CATMecModInterfaces CATCdbEntity SystemUUID CATCclInterfaces  CATMmiUUID CATObjectModelerCATIA \
                        				CATKnowledgeModeler CATGeometricObjects CATSkmWireframe\
                                CATNewTopologicalObjects SketcherItfInfra CATObjectModelerItf \
                                CATPDMBaseItfCPP CATDraftingBaseInfra CATDbiClean CATConstraintModeler CATConstraintModelerItf \
								CATDibModelerInterfaces \ 



INCLUDED_MODULES= CATInfraDftAnn CATDfsStandard CATDrwEnoviaIntegration

OS = IRIX
LOCAL_CCFLAGS = -woff 3115







