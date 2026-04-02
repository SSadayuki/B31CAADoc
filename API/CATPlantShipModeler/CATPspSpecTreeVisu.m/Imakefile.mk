#=====================================================================================
#                                     CNEXT - CXR8
#                          COPYRIGHT DASSAULT SYSTEMES 2001
#-------------------------------------------------------------------------------------
# MODULE      :    CATPspSpecTreeVisu
# FRAMEWORK   :    CATPlantShipModeler
# AUTHOR      :    VSO
# DATE        :    10.2001
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

LINK_WITH = JS0GROUP JS0FM \
  CATObjectModelerBase  \      
  CATMathematics CATMathStream CATIAApplicationFrame \
  CATVisualization CATViz \
  CATProductStructure1 CATEsuUtil CATPspUUID
	  
SH_LINK_WITH= $(LINK_WITH)


