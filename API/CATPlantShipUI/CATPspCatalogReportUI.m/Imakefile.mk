BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = CATApplicationFrame CATDialogEngine DI0PANV2 \
            JS0FM JS0LIB0 AD0XXBAS AC0SPBAS AS0STARTUP \
            CATEsuUtil CATEsuUUID CATFileMenu CATPspUtilities \
			CATCclInterfaces KnowledgeItf CATLifDictionary CATPspUUID 


SH_LINK_WITH= $(LINK_WITH)


