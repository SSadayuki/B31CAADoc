#@ autoformat 06:08:31
# -------------------------------------------------------
#
#             iMakeFile of GSMModel/CATGmoFactory.m
#
# -------------------------------------------------------
# this module included in GSMModel/GSMModelBasic is loaded at the newPart,

# Prereqs for CATGmoFactory
# -----------------------------------------------

BUILT_OBJECT_TYPE=NONE

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH=\
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
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
