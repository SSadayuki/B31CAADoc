#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATSchematicItf
# FRAMEWORK   :    CATSchPlatformInterfaces
# AUTHOR      :    VSO
# DATE        :    12.2000
#-------------------------------------------------------------------------------------
# DESCRIPTION :    
#-------------------------------------------------------------------------------------
# COMMENTS    :    
#-------------------------------------------------------------------------------------
# MODIFICATIONS     user  date        purpose
#    HISTORY        ----  ----        -------
#
#                   bcy    3/28/2002   useless link with irregularities
#                                     removed: CD0FRAME CD0WIN CD0APPLI 
#                   vso    2/13/2004  add DraftingItf for new IDL
#=====================================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY

WIZARD_LINK_MODULES = JS0GROUP NS0SI18N Collections \ 
            JS0FM InfItf \
					  ProductStructureItf DraftingItf \                  

LINK_WITH = $(WIZARD_LINK_MODULES)

INCLUDED_MODULES = CATSchematicPubIDL CATSchematicProIDL 

 \
JS0GROUP 
