#@ autoformat 06:10:03
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATSurfResError                \ # CATSurfacicResources           CATSurfacicResources
    CATSurfacicUtilities           \ # CATSurfacicResources           CATSurfacicResources
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    JS0STR                         \ # System                         JS0GROUP
#

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
