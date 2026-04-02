#=====================================================================================
#                                     CNEXT - CXR14
#                          COPYRIGHT DASSAULT SYSTEMES 2004
#-------------------------------------------------------------------------------------
# MODULE      :    CATCpuCptMembership
# FRAMEWORK   :    CATCompartmentUI
# AUTHOR      :    EHH
# DATE        :    1.2004
#-------------------------------------------------------------------------------------
# COMMENTS    :    
#-------------------------------------------------------------------------------------
# MODIFICATIONS     user  date        purpose
#    HISTORY        ----  ----        -------
#
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

# client site simulation for traces
# LOCAL_CCFLAGS=-DCNEXT_CLIENT 

LINK_WITH = CATApplicationFrame CATDialogEngine DI0PANV2 \
  JS03TRA JS0STR JS0CORBA JS0FM JS0LIB0 JS0SCBAK AS0STARTUP \
  AD0XXBAS AC0SPBAS ON0FRAME YN000MAT \
  CATVisualization CATEsuUtil CATSktAssistant CATDMUBase \
  CATPspUtilities CATPspUUID CATPspApplication CATPspUIUtils \  
  CATCptUUID CATEsuUUID CATEsuProductServices 

SH_LINK_WITH= $(LINK_WITH)
