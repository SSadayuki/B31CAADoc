#
# Makefile for the .idl files
# which are in the PublicInterfaces directory
#
 
BUILT_OBJECT_TYPE=NONE

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
#BUILD=NO 
#
# Flags for the idl compilation
#
SOURCES_PATH=PublicInterfaces
COMPILATION_IDL=YES
 
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
