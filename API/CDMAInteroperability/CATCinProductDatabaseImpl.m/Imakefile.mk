#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CDMAInteroperabilityUUID \
ObjectModelerBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#

CORE_LINK_WITH =	JS0FM JS0XXC0 AC0XXLNK PR0BASE CO0LSTPV \
					CATApplicationFrame CATCclInterfaces \
					CATIProductDatabase CATProductStructure1 CDMAdoc VE0MDL \
					YN000MAT AC0SPBAS CDMAServer DI0PANV2 \
					CDMAMapping CATCinDispatcher CATPrsRep CK0FEAT CATPDMBase CATVPMBase\
					CATPDMBaseItf CATInteractiveInterfaces\
					XMLParserItf CATXMLBase 

LINK_WITH=$(LINK_WITH_FOR_IID)  $(CORE_LINK_WITH)

# System dependant variables
#
OS = AIX
#
OS = HP-UX
CXX_EXCEPTION =
LOCAL_CCFLAGS = -DNATIVE_EXCEPTION

#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
SYS_LIBS = Wsock32.lib
