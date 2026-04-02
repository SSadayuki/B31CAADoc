#=====================================================================================
#                                     CNEXT - CXR16
#                          COPYRIGHT DASSAULT SYSTEMES 2005
#-------------------------------------------------------------------------------------
# MODULE      :    CATEdbItfCPP.m
# FRAMEWORK   :    CATEngSystemDbModeler
# AUTHOR      :    VSO
# DATE        :    6.2005
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

LINK_WITH = JS0GROUP JS0FM SystemUUID 

SH_LINK_WITH= $(LINK_WITH)
INCLUDED_MODULES = CATEdbProIDL CATEdbItfCPP
