#
#  library CATAdvancedMachiningInterfaces
#

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = AdvancedMachiningInterfacesUUID ManufacturingInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif

BUILT_OBJECT_TYPE = SHARED LIBRARY


LINK_WITH = $(LINK_WITH_FOR_IID)	AC0XXLNK JS0GROUP\
						CATApplicationFrame\
						CATManufacturingInterfaces			

INCLUDED_MODULES = AdvancedMachiningItfCPP
