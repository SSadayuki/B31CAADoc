#
# LOAD MODULE
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#ifdef CATIAV5R11

LINK_WITH = DI0PANV2  JS0GROUP JS0FM \
            CD0FRAME CATDlgStandard DataExchangeInfrastructure \
            JS0FILE CATBatchUtils CATBatProtocol BatchMonitor CATFileMenu OM0EDPRO



#endif



