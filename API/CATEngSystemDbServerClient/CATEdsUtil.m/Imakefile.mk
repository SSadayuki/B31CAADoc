#=====================================================================================
#                          COPYRIGHT DASSAULT SYSTEMES 2005
#-------------------------------------------------------------------------------------
# CATEdsUtil
# vso - 3/2005
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0CORBA JS0SCBAK JS03TRA JS0ERROR JS0STR JS0FM NS0S3STR \
            CO0RCDBL CO0RCINT CO0LSTST CO0LSTPV CO0HDICO \
            JS0GROUP XMLUtils xmlxerces \
            CATXMLParserItf AD0XXBAS CATMathematics

SH_LINK_WITH= $(LINK_WITH)
