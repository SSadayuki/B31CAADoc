#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= NONE

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

#
OS = AIX

#
OS = HP-UX

#
OS = IRIX

#
OS = SunOS

#
OS = Windows_NT
LOCAL_LDFLAGS = $(SUB_CONS)
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
