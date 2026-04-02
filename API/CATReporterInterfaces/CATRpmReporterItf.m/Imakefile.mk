#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATRpmReporterItf
# FRAMEWORK   :    CATReporterInterfaces
# AUTHOR      :    VSO
# DATE        :    9.2001
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

WIZARD_LINK_MODULES = JS0GROUP NS0SI18N Collections \ 
                      JS0FM InfItf			     

LINK_WITH = $(WIZARD_LINK_MODULES)

INCLUDED_MODULES = CATRpmReporterPubIDL CATRpmReporterProIDL 
