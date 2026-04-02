#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATSchUtilities
# FRAMEWORK   :    CATSchPlatformModeler
# AUTHOR      :    VSO
# DATE        :    1.2000
#-------------------------------------------------------------------------------------
# DESCRIPTION :    
#-------------------------------------------------------------------------------------
# COMMENTS    :    
#-------------------------------------------------------------------------------------
# MODIFICATIONS     user  date        purpose
#    HISTORY        ----  ----        -------
#                   bcy   3/28/2002   useless link with irregularities
# removed: BIG:CATComponentsCatalogs BIG:CATDraftingFeature SMALL:YP00IMPL 
#          SMALL:VE0GEDIT BIG:CATSchInterfaces BIG:CATSchUtilities 
#          BIG:CATSkuBase BIG:CATSkuCommands
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

# client site simulation for traces
# LOCAL_CCFLAGS=-DCNEXT_CLIENT 

LINK_WITH = AC0SPBAS AD0XXBAS CD0FRAME CD0WIN JS0GROUP JS0FM \
			ON0PROP CATMathematics \
			CATDraftingInterfaces CATSketcherInterfaces CATDraftingBaseInfraUI \
			CATSketcherToolsUI CATSktAssistant CATSktSettings CATVisualization \
			CATSchUUID CATProductStructure1 \
			CATDraftingUI CATDraftingIntCommands CATCclInterfaces SystemUUID \ 
			CATFileMenu CATSchItfCPP CATDraftingInfrastructure \
			CATEsuUtil CATLiteralFeatures KnowledgeItf CATSchInterfaces \
			JS0GROUP CATSchItfUUID CATSchematicProIDL CATInfInterfaces CATSchIntfUUID 

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATSchIntfUUID CATSchItfUUID
#else
LINK_WITH_IID=
#endif

SH_LINK_WITH= $(LINK_WITH)





