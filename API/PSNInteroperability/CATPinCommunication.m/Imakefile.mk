#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CDMAInteroperabilityUUID \
PSNInteroperabilityUUID  
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE = SHARED LIBRARY 
INCLUDED_MODULES = TalkingToPSN
#
OS = COMMON

CORE_LINK_WITH= PR0BASE AD0XXBAS JS0LIB0 JS0FM JS0XXC0\
	   	        DI0PANV2 DI0STATE CATProductStructure1 \
	            CD0WIN AC0SPBAS CATCinProdStructInterop CDMAServer CATCinProductDatabaseImpl \
				CDMAdoc XCOservices VE0MDL YN000MAT \
				CATCinCommands CATCinDispatcher  \
				CATPrsRep CATCinBBMessage CATPinLauncher CATPDMBase CATVPMBase CATFileMenu \
				XMLParserItf CATXMLBase \
				CATCclInterfaces CATPinServices CATPDMBaseItfCPP

LINK_WITH=$(LINK_WITH_FOR_IID)  $(CORE_LINK_WITH)

#
OS = Windows_NT
SYS_LIBS = Wsock32.lib
