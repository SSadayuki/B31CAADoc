#-------------------------------------------------------------------------------
# COPYRIGHT DASSAULT SYSTEMES CORP 2002
# CATMfgSimulationItf
#-------------------------------------------------------------------------------


#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = CATMfgSimulationInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif

BUILT_OBJECT_TYPE=SHARED LIBRARY

SOURCES_PATH = ProtectedInterfaces
LINK_WITH = CATMathStream 	JS0GROUP JS0FM JS0CORBA AC0SPBAS\
			CATMathematics CATManufacturingInterfaces

INCLUDED_MODULES = CATMfgSimulationItfCPP
