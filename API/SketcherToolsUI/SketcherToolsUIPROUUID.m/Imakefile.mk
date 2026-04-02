// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// Imakefile for module SketcherToolsUIPROUUID.m
//
//=============================================================================
// March.  2009  Creation                                              S. Mayer
//=============================================================================


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
