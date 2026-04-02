#=====================================================================================
#                          COPYRIGHT DASSAULT SYSTEMES 2001
#-------------------------------------------------------------------------------------
# MODULE      :    CATRpmXML
# FRAMEWORK   :    CATReporterModeler
# AUTHOR      :    VSO
# DATE        :    9.2001
#-------------------------------------------------------------------------------------
# DESCRIPTION :    
#-------------------------------------------------------------------------------------
# COMMENTS    :    
#-------------------------------------------------------------------------------------
# MODIFICATIONS     user  date        purpose
#    HISTORY        ----  ----        -------
#                   bcy    3/28/2002   useless link with irregularities
#                   vso    10/02  R11  migration to XMLParser CAA Interfaces
#
# removed: BIG:xmlicuuc
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = AD0XXBAS \
            JS0CORBA JS0SCBAK JS03TRA JS0ERROR JS0STR JS0FM NS0S3STR \
            CO0RCDBL CO0RCINT CO0LSTST CO0LSTPV CO0HDICO \
            JS0GROUP XMLUtils xmlxerces \
            CATRpmUtilities CATEsuUtil CATXMLParserItf

SH_LINK_WITH= $(LINK_WITH)
