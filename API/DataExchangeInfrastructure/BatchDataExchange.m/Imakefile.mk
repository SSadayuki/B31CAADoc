# COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002
#======================================================================
# Imakefile for test module BatchDataExchange.m
#======================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY
#ifdef CATIAV5R11
#
OS = COMMON
#
LINK_WITH = JS0ERROR JS0CORBA JS03TRA AC0XXLNK AD0XXBAS \
	    NS0S3STR CO0LSTPV CO0RCINT CATBatProtocol CATBatchUtils\
	    DataExchangeInfrastructure
#endif



