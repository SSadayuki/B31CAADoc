#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATSchItfCCP
# FRAMEWORK   :    CATSchPlatformModeler
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

LINK_WITH = CATObjectModelerBase CATObjectSpecsModeler JS0GROUP JS0FM SystemUUID \
            ApplicationFrame CATIAApplicationFrame CATSchUUID

SH_LINK_WITH= $(LINK_WITH)
