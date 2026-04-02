#=====================================================================================
#                          COPYRIGHT DASSAULT SYSTEMES 2001
#-------------------------------------------------------------------------------------
# MODULE      :    CATPspPropExportImport
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
#                   jsk   10/02 R11   migration to XMLParser CAA Interfaces
#
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = AD0XXBAS  SystemUUID  \
            JS0CORBA JS0SCBAK JS03TRA JS0ERROR JS0STR JS0FM NS0S3STR \
            CO0RCDBL CO0RCINT CO0LSTST CO0LSTPV CO0HDICO \
		    CATObjectSpecsModeler \
            JS0GROUP \
            CATRpmXML CATPspUtilities \
            CATLiteralFeatures KnowledgeItf \
			CATPspUUID CATEsuUtil CATProductStructure1 \
			CATPspPlantShipItf \
			CATXMLParserItf

SH_LINK_WITH= $(LINK_WITH)



