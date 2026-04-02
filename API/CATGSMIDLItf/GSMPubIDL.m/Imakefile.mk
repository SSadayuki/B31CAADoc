#
# Makefile for the public idl files
#

BUILT_OBJECT_TYPE = NONE

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

COMPILATION_IDL = YES

SOURCES_PATH=PublicInterfaces
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
