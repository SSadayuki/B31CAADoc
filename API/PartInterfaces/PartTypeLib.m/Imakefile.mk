#
#This is used to compile an interface repository file
#

#BUILD=NO
 
BUILT_OBJECT_TYPE=TYPELIB

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
# no more BUILD_PRIORITY=40

LINK_WITH = InfTypeLib KweTypeLib MecModTypeLib 
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \

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
