#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATSchDocument
# FRAMEWORK   :    CATSchPlatformModeler
# AUTHOR      :    VSO
# DATE        :    8.2000
#-------------------------------------------------------------------------------------
# DESCRIPTION :    
#-------------------------------------------------------------------------------------
# COMMENTS    :    
#-------------------------------------------------------------------------------------
# MODIFICATIONS     user  date        purpose
#    HISTORY        ----  ----        -------
#                   bcy    3/28/2002   useless link with irregularities
# removed: BIG:CATGraph BIG:CATInteractiveInterfaces BIG:CATMechanicalModeler
#          BIG:CATObjectModelerCATIA BIG:CATSktAssistant BIG:CATSktSettings
#                   vso   8/12/02     as per FKN's request, add
#                                     DraftingInfrastructureUIUUID
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0GROUP JS0FM DI0PANV2 \
  CATObjectModelerBase CATObjectSpecsModeler \      
  CATApplicationFrame CATIAApplicationFrame \
  CATDraftingInterfaces CATSketcherInterfaces AECReviewItf \
  CATDuiSettings CATVisualization CATNavigatorItf \
  CATDraftingFeature CATDraftingUI CATProductStructure1 CATMathematics \      
  CATSchUUID CATSchUtilities CATSketcherToolsUI CATDfiUUID CATCafAutomation \
  CATDraftingInfrastructureUI CATLiteralFeatures CATIAApplicationFrame \
  CATSchItfCPP KnowledgeItf CATLifAutomation CATKnowledgeModeler \
  CATCclInterfaces CATDraftingInfrastructure CATAnnotationModeler  \
  CATEsuUtil CATPDMBaseItf CATPDMBase DraftingInfrastructureUIUUID CATSchUtilities CATPrtBase  \
  CATInteractiveInterfaces CATNavigator2Itf 
	  
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID= CATSchItfUUID ComponentsCatalogsUUID 
#else
LINK_WITH_IID=
#endif	

SH_LINK_WITH= $(LINK_WITH)


