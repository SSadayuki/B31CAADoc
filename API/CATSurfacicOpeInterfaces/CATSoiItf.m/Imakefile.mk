#@ autoformat 06:08:31
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
    CATSurfacicOpeInterfacesUUID   \ # CATSurfacicOpeInterfaces       CATSurfacicOpeInterfacesUUID
#
#else
LINK_WITH_FOR_IID =
#endif
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_FOR_IID)           \
#

  
INCLUDED_MODULES= CATSoiItfCPP
# GSMProIDL



OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
#
#endif
#endif
