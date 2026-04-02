#@ autoformat 08:10:29
# COPYRIGHT Dassault Systemes 2008
#======================================================================
#
#

BUILT_OBJECT_TYPE=NONE

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
#
OS = Windows_NT

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
