#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATSchematicItf  
# FRAMEWORK   :    CATSchPlatformInterfaces
# AUTHOR      :    VSO
# DATE        :    12.2003
#-------------------------------------------------------------------------------------
# DESCRIPTION :    
#-------------------------------------------------------------------------------------
# COMMENTS    :    
#-------------------------------------------------------------------------------------
# MODIFICATIONS     user  date        purpose
#    HISTORY        ----  ----        -------
#
#                  
#=====================================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY

WIZARD_LINK_MODULES = JS0GROUP NS0SI18N Collections \ 
                      JS0FM InfItf \
					                   

LINK_WITH = $(WIZARD_LINK_MODULES)

#INCLUDED_MODULES =  CATPIDProIDL 

 \
JS0GROUP 
# END WIZARD EDITION ZONE
