#@ autoformat 10:02:05
#ifdef LOCAL_DEFINITION_FOR_IID
   LINK_WITH_FOR_IID = \
    CATSurfacicSharedItfUUID       \ # CATSurfacicSharedItf           CATSurfacicSharedItfUUID
#
#else
   LINK_WITH_FOR_IID =
#endif

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    JS0GROUP                       \ # System                         JS0GROUP
#

INCLUDED_MODULES=


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
