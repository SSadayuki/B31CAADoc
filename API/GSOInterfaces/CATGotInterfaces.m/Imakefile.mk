#@ autoformat 06:11:07
#ifdef LOCAL_DEFINITION_FOR_IID
   LINK_WITH_FOR_IID = \
    GSOInterfacesUUID              \ # GSOInterfaces                  GSOInterfacesUUID
#
#else
   LINK_WITH_FOR_IID =
#endif
#
# Imakefile CATGotInterfaces.m
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_FOR_IID)           \
    JS0GROUP                       \ # System                         JS0GROUP
#

# JIT - 25/09/2002 - cleaning : pas de link inutile

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
