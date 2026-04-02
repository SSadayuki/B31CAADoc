#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 1996
#=========================================================================================
#
# gros-module CATDuiBridgeR1
#
# Module de passage V5R1 a V5R2.
#
#=========================================================================================
#
# 19/10/98 	mmr	Creation
# 11/10/00 	ppd	Split DraftingFeature => CATAnnotationModeler


BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) JS0GROUP CATObjectModelerBase \
			CATObjectSpecsModeler CATLiteralFeatures CATDraftingInterfaces \
      KnowledgeItf CATMathematics CATVisualization CATViz CATAnnotationModeler CATDraftingInfrastructure \
      CATIAApplicationFrame CATSketcherInterfaces CATGviUtilities DFTInfraUI CATDraftingFeature CATInteractiveInterfaces \
      CATApplicationFrame CATMechanicalModeler
