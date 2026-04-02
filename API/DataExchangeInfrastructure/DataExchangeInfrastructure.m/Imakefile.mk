# COPYRIGHT DASSAULT SYSTEMES PROVENCE 2000
#======================================================================
# Imakefile for module DataExchangeInfrastructure.m
#======================================================================
#
# 13/11/2001: YFZ: Suppression du monocodage R6
# 08/01/2004: mef : suppression de CATIdeSettingsItfCPP ( settings IGES )
# 20/01/2004: ARH: Ajout JS0FILE (CHeckFileName)
#
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
OS = COMMON

LINK_WITH_COMMON =	AD0XXBAS JS0CORBA CO0LSTPV CO0LSTST NS0S3STR AC0SPBAS\
					DI0PANV2 JS0FM CD0FRAME JS0CATLM JS0FILE\

LINK_WITH = $(LINK_WITH_COMMON) CK0FEAT CATBatProtocol \
			DataExchangeKernelItfCPP DataExchangeBaseRepsItfCPP \
			KnowledgeItf

CATIA_LSTCOMDYN=NO

OS = AIX
#LOCAL_CFLAGS = -D_IGES_TIME_TMS

OS = IRIX
#LOCAL_CFLAGS = -D_IGES_TIME_TMS

OS = HP-UX
#LOCAL_CFLAGS = -D_IGES_TIME_TMS

OS = SunOS
#LOCAL_CFLAGS = -D_IGES_TIME_TMS

OS = Windows_NT
