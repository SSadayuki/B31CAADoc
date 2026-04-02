#=====================================================================================
#                                     CNEXT - CXR14
#                          COPYRIGHT DASSAULT SYSTEMES 2004
#-------------------------------------------------------------------------------------
# MODULE      :    CATSchIDLImpl
# FRAMEWORK   :    CATSchPlatformModeler
# AUTHOR      :    VSO
# DATE        :    1.2004
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

# client site simulation for traces
# LOCAL_CCFLAGS=-DCNEXT_CLIENT 

LINK_WITH = AC0SPBAS AD0XXBAS CD0FRAME CD0WIN CK0FEAT JS0GROUP JS0FM \
			ON0PROP YN000MFL  \
			AECReviewItf CATDraftingInterfaces CATSketcherInterfaces \
			CATVisualization \
			CATSchUUID CATProductStructure1  \
            CATCclInterfaces SystemUUID CATSchInterfaces  \
            CATSchUtilities CATSchItfCPP MF0GEOM CATSkmWireframe CATEsuUtil \
			CATDraftingInfrastructure CATSchematicPubIDL CATSchIDLBasicImpl CATInfInterfaces

SH_LINK_WITH= $(LINK_WITH)


