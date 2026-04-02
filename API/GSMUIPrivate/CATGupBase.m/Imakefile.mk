#@ autoformat 06:11:14
#ifdef LOCAL_DEFINITION_FOR_IID
   LINK_WITH_FOR_IID = \
#
#else
   LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY CATGupSettings.m
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_FOR_IID)           \
    JS0CORBA                       \ # System                         JS0GROUP
#

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
