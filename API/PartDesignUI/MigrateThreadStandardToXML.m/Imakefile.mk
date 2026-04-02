#@ autoformat 13:05:20
##===========================================================================
## COPYRIGHT DASSAULT SYSTEMES 2013 - CATIA
##===========================================================================
## JAN, 2013 - Creation: OZL
##===========================================================================
## MigrateThreadStandardToXML implementation
##===========================================================================
## This file is used to define the MigrateThreadStandardToXML module requirements
##===========================================================================
#

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \ 
    InfInterfacesUUID              \ #                                
#
#else
LINK_WITH_FOR_IID =
#
#endif
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

#
OS = COMMON

#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
					BatchMonitorUI                 \ # BatchMonitorUI                 BatchMonitorUI
					PLMBatchDataAccess             \ # PLMBatchDataAccessInterfaces   PLMBatchDataAccess
					PLMBatchDataAccessUI           \ # PLMBatchDataAccessInterfaces   PLMBatchDataAccessUI
					PLMBatchServices               \ # PLMBatchDataAccessInterfaces   PLMBatchServices
					CatXmlItfBase                  \ # XMLParserItf                   CatXmlItfBase
					CatXmlItfExt                   \ # XMLParserItf                   CatXmlItfExt
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
					CATFileMenu	\
					BatchMonitor	\
					XMLParserItf	\
#
#endif
#endif
#

LINK_WITH= \
			$(LINK_WITH_V5_ONLY)			\
			$(LINK_WITH_V6_ONLY)			\
			$(LINK_WITH_FOR_IID)           \
			DataAdmin                      \ # CATDataCompatibilityInfra      DataAdmin
			DI0PANV2                       \ # Dialog                         DI0PANV2			
			CATLifSpecs						\ # KnowledgeInterfaces            KnowledgeItf
			CK0FEAT							\
			CATBatProtocol					\
			CATBatchUtils	\			
			KnowledgeItf	\	
			AC0XXLNK		\								
			CK0FEAT                        \ # LiteralFeatures                CATLiteralFeatures
			ObjectModeler                  \ # ObjectModelerBase              CATObjectModelerBase
			ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
			JS0FM                          \ # System                         JS0FM
			JS0GROUP                       \ # System                         JS0GROUP
#	
