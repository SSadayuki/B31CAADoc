#@ autoformat 10:02:05

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    JS0GROUP                       \ # System                         JS0GROUP
#

INCLUDED_MODULES=  GSMPubIDL

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATMmrAutomationInterfaces     \ # CATMmrAutomationInterfaces     CATMmrAutomationInterfaces
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    MecModItf \
	InfItf \

#
#endif
#endif
