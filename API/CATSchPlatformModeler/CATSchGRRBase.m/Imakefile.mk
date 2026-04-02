#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATSchGRRBase
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
# removed: SMALL:CD0FRAME CD0WIN BIG:CATDraftingFeature BIG:CATDraftingUI
#          SMALL:YP00IMPL SMALL:VE0GEDIT BIG:CATProductStructure1 
#          BIG:CATSketcherToolsUI BIG:CATSktAssistant BIG:CATSktSettings 
#          BIG:CATSkuBase BIG:CATSkuCommands
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

# client site simulation for traces
# LOCAL_CCFLAGS=-DCNEXT_CLIENT 

LINK_WITH = AC0SPBAS AD0XXBAS JS0GROUP JS0FM \
			ON0PROP YN000MFL \
			CATDraftingInterfaces CATSketcherInterfaces \
			CATVisualization \
			CATSchUUID CATDraftingInfrastructure  \
      CATDraftingInfrastructureUI CATCclInterfaces CATSchUtilities CATEsuUtil CATSchItfCPP

SH_LINK_WITH= $(LINK_WITH)

