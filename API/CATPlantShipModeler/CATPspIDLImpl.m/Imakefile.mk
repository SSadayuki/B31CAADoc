#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATSacIDLImpl
# FRAMEWORK   :    CATSchPlatformModeler.edu
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
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = AC0SPBAS AD0XXBAS CD0FRAME CD0WIN CK0FEAT JS0GROUP JS0FM \		     
            ON0PROP YN000MFL CATInfInterfaces \
            CATProductStructure1 ProductStructureProtIDL \
            CATPspUUID \
            CATPspUtilities \	                
            CATEsuUtil \
	        CATPrsAutomation \        
          CATPspItfCPP \
	        CATLiteralFeatures KnowledgeItf CATMathStream \
         CATPspPlantShipItf \
         CATCclInterfaces \
         SystemUUID \
	        CATVisualization CATViz \
          CATPspPropExpImp \
          CATPspPlantShipPubIDL 

SH_LINK_WITH= $(LINK_WITH)


