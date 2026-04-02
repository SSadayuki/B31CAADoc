#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATSchVisu
# FRAMEWORK   :    CATSchPlatformModeler
# AUTHOR      :    EHH
# DATE        :    May, 2000
#-------------------------------------------------------------------------------------
# DESCRIPTION :    
#-------------------------------------------------------------------------------------
# COMMENTS    :    
#-------------------------------------------------------------------------------------
# MODIFICATIONS     user  date        purpose
#    HISTORY        ----  ----        -------
#                   bcy   3/28/2002   useless link with irregularities
# removed: BIG:CATDraftingFeature BIG:CATDraftingInfrastructure BIG:CATDraftingInfrastructureUI 
#          BIG:CATDraftingUI SMALL:YP00IMPL BIG:CATGviUtilities SMALL:VE0GEDIT BIG:CATMecModInterfaces 
#          BIG:CATSchItfCPP BIG:CATSkuBase
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

# client site simulation for traces
# LOCAL_CCFLAGS=-DCNEXT_CLIENT 

LINK_WITH = AC0SPBAS AD0XXBAS CD0FRAME CD0WIN JS0GROUP JS0FM \
		ON0PROP YN000MFL  \
		CATVisualization CATSchUUID CATSchUtilities  \
		CATProductStructure1 \
		CATDraftingInfrastructure CATDraftingInterfaces \
		CATSketcherInterfaces SystemUUID \
		CATPrint CATInfInterfaces CATCafAutostart CATEsuUUID ToolsVisu \
        CATIAApplicationFrame CATDraftingInfrastructureUI DI0PANV2

# starting from CATDraftingInterfaces - to the end 
# are there to resolve CATESchASMRootVisu

SH_LINK_WITH= $(LINK_WITH)





