#=====================================================================================
#                          COPYRIGHT DASSAULT SYSTEMES 2001
#-------------------------------------------------------------------------------------
# MODULE      :    CATRpmModeler
# FRAMEWORK   :    CATReporterModeler
# AUTHOR      :    FDK
# DATE        :    01.2004
#-------------------------------------------------------------------------------------
# DESCRIPTION :    
#-------------------------------------------------------------------------------------
# COMMENTS    :    
#		
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = AD0XXBAS  SystemUUID  \
            JS0CORBA JS0SCBAK JS03TRA JS0ERROR JS0STR JS0FM NS0S3STR \
            CO0RCDBL CO0RCINT CO0LSTST CO0LSTPV CO0HDICO \
		    CATObjectSpecsModeler \
            JS0GROUP \
            KnowledgeItf CATLifSpecs CATLiteralFeatures CATEsuUtil \
            CATRpmUtilities CATRpmXML CATRpmReporterItf CATRpmReporterUUID CATDraftingInterfaces \
            CATXMLParserItf

SH_LINK_WITH= $(LINK_WITH)



