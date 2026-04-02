#=====================================================================================
#                                     CNEXT - CXR17
#                          COPYRIGHT DASSAULT SYSTEMES 2006 
#-------------------------------------------------------------------------------------
# MODULE      :    CATPspValidation
# FRAMEWORK   :    CATPlantShipModeler
# AUTHOR      :    BPK
# DATE        :    May 2006
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

# client site simulation for traces
# LOCAL_CCFLAGS=-DCNEXT_CLIENT 

LINK_WITH = JS0GROUP   CATPspUUID CATPspUtilities \
            AD0XXBAS AS0STARTUP SpecsModeler CATPspItfCPP \
            CATEsuProductServices CATEsuUtil CATProductStructureInterfaces CATArrangementItfCPP 

SH_LINK_WITH= $(LINK_WITH)
