#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATPspItfCCP
# FRAMEWORK   :    CATPlantShipInterfaces
# AUTHOR      :    VSO
# DATE        :    4.2000
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

LINK_WITH = CATObjectModelerBase  JS0GROUP JS0FM SystemUUID \
            CATApplicationFrame AC0SPBAS KnowledgeItf JS0CORBA \
            CATPspUUID

SH_LINK_WITH= $(LINK_WITH)
