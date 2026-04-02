#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATPspApplication
# FRAMEWORK   :    CATPlantShipModeler
# AUTHOR      :    AWG
# DATE        :    1.2000
#-------------------------------------------------------------------------------------
# DESCRIPTION :    
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

LINK_WITH = AC0SPBAS AD0XXBAS JS0GROUP JS0CORBA JS0FM \
      ON0PROP  \
      SystemUUID CATProductStructure1 \
      CATEsuUtil \
      CATPspUUID CATPspUtilities CATPspModeler

SH_LINK_WITH= $(LINK_WITH)


