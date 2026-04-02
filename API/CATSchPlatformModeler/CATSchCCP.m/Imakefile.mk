#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATSchCCP
# FRAMEWORK   :    CATSchPlatformModeler
# AUTHOR      :    VSO
# DATE        :    4.01
#-------------------------------------------------------------------------------------
# DESCRIPTION :    
#-------------------------------------------------------------------------------------
# COMMENTS    :    
#-------------------------------------------------------------------------------------
# MODIFICATIONS     user  date        purpose
#    HISTORY        ----  ----        -------
#                   bcy    3/28/2002   useless link with irregularities
# removed: BIG:CATCafAutomation BIG:CATDraftingFeature BIG:CATDraftingInfrastructure 
#          BIG:CATDraftingInfrastructureUI BIG:CATDraftingInterfaces BIG:CATDraftingUI 
#          BIG:CATIAApplicationFrame BIG:CATObjectModelerCATIA BIG:CATProductStructure1 
#          BIG:CATSchItfCPP BIG:CATSketcherToolsUI
#
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0GROUP JS0FM \
			CATObjectModelerBase  CATObjectSpecsModeler \      
			CATSketcherInterfaces CATVisualization \
			CATMathematics \      
			CATSchUUID CATSchUtilities CATDfiUUID  \
			CATSktAssistant CATSktSettings  \
			CATCclInterfaces  CATInteractiveInterfaces CATSkuBase \
      CATLiteralFeatures KnowledgeItf CATDraftingInterfaces CATSchItfCPP \
      CATDraftingInfrastructure  CATDraftingUI CATSchIntfUUID
	  
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID= CATSchItfUUID ComponentsCatalogsUUID 
#else
LINK_WITH_IID=
#endif	

SH_LINK_WITH= $(LINK_WITH)


