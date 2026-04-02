# COPYRIGHT Dassault Systemes 2007
#======================================================================
# Imakefile for module CATFmoFuncModInterfacesUUID.m
#======================================================================
# Fev 2007  Creation
#======================================================================
#
# ARCHIVE
#
BUILT_OBJECT_TYPE = ARCHIVE

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
