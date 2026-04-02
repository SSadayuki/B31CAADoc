#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAssemblyUIUUID \
CATIAApplicationFrameUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#

COMMON_LINK_WITH= JS0CORBA \
        JS0FM \
        DI0PANV2 \
        CATObjectModelerBase \
        CATIAApplicationFrame \
        CATAssemblyInterfaces \
        CATAssemblyPubIDL

## METTRE CATIAV5R6 ENSUITE...
####ifdef CATIAV5R6
LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMMON_LINK_WITH) CATDlgStandard
####else
###LINK_WITH = $(COMMON_LINK_WITH)
####endif

SH_LINK_WITH= $(LINK_WITH)
