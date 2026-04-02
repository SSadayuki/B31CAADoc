#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CDMAInteroperabilityUUID \
ProductStructureUUID
#else
LINK_WITH_FOR_IID =
#endif
#
OS = COMMON

BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = CATIPSInteroperability CATIProductDatabase  

CORE_LINK_WITH =	JS0SETT NS0S3STR YN000MAT  CDMAMapping \
					PR0BASE CO0LSTPV VE0MDL \
					CATCinDocument AC0XXLNK CATProductStructure1 AC0SPBAS \
					CATCinDispatcher AC0CATPL CATCinServer \
					CATPrsRep JS0XXC0 CATPDMBase CATVPMBase CATCinBBMessage CATPDMBaseItfCPP \
					CATCinProductDatabaseImpl CD0WIN XMLParserItf CATXMLBase \
   
LINK_WITH=$(LINK_WITH_FOR_IID)  $(CORE_LINK_WITH)
# System dependant variables
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
SYS_LIBS = Wsock32.lib
