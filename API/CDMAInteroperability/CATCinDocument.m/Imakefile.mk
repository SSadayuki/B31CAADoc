#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CDMAInteroperabilityUUID \
ObjectModelerBaseUUID \
ProductStructureUUID \
CATPDMBaseUUID
#else
LINK_WITH_FOR_IID = 
#endif
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = CDMAdoc
#
OS = COMMON

CATCinDocLINK_WITH= NS0S3STR JS0XXC0 JS0FILE JS0FM SystemUUID CATCclInterfaces \
					CATObjectModelerBase CATObjectSpecsModeler CATProductStructure1 \
					AC0CATPL AC0SPBAS PR0BASE DI0PANV2 \
					CATIAPrjEntity CATV4mDataStruct \
					CATPrsRep CD0FRAME CATIAEnable\
					CATIAEntity CDMAMapping CDMAServer CATCinDispatcher \
					CATVisualization CATOmsSchemaUtilities CATOmaBinaryFormat\
					CATPDMBaseItfCPP CATPDMBase CATVPMBase \
					CATPDMBaseInterfaces CATCinBBMessage CATSysCommunication CATIPSInteroperability \
					ENOVIVaultClientAPP VVSUrlUtils VVSNetBase\
					CATPDMBaseUI CATInteractiveInterfaces XMLParserItf CATXMLBase CATFileMenu \
					CATNewSaveUI CATCinProductDatabaseImpl CATPrsAutomation CATProductStructureInterfaces \
					CATDraftingInterfaces CK0FEAT CATGraph \
        

LINK_WITH=$(LINK_WITH_FOR_IID)  $(CATCinDocLINK_WITH)
OS = Windows_NT
SYS_LIBS = Wsock32.LIB 
