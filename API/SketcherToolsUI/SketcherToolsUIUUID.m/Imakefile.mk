// March 2009  Modification:                                           S. Mayer
//  Ce module n'est plus un module d'archive, il sert à rediriger 
//  les clients qui le reference vers les 2 nouveaux modules d'archive:
//  Le module d'archive dans SketcherToolsUI\SketcherToolsUIPROUUID.m dedie aux interfaces
//  protected et le module SketcherToolsUseItf/CATSktToolsUseItfIID.mdedie aux interfaces public
//=============================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
BUILD = NO
# plt, Sep 21, 2009: ALIASES_ON_IMPORT = SketcherToolsUIPROUUID CATSktToolsUseItfIID
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
