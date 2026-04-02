#@ autoformat 06:08:31
# COPYRIGHT DASSAULT SYSTEMES 2005
# ======================================================================
#

#if defined(_DS_COMPUTE_SERVER)
BUILD=NO
#endif

# TYPE
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
#
# LINK
OS = COMMON
LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    JS0GROUP                       \ # System                         JS0GROUP
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
