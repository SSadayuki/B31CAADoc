#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATCommonLayoutItfCCP
# FRAMEWORK   :    CATCommonLayoutInterfaces
# AUTHOR      :    TTM
# DATE        :    2.2002
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

LINK_WITH = JS0GROUP JS0FM SystemUUID \
            ApplicationFrame		

SH_LINK_WITH= $(LINK_WITH)
