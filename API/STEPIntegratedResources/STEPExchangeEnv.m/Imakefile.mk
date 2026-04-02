#======================================================================
# COPYRIGHT DASSAULT SYSTEMES PROVENCE 2000
#======================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY

# Compilation conditionelle pour support des UDA.
#LOCAL_CCFLAGS = -DEXCHANGEUDA

LINK_WITH =	STEPPart42 DataExchangeInfrastructure KS0LATE KS0SIMPL KS0STEP \
			JS0CORBA AD0XXBAS AD0SDBAS JS0GROUP\
			DataExchangeKernelItfCPP DataExchangeBaseRepsItfCPP \
			CATSdeSettingItfCPP CATSdeSettingInterfacesUUID \ # Pour les settings
			YN000MAT \ # pour l'extrem Scale
			AC0XXLNK \ # pour le log file access
