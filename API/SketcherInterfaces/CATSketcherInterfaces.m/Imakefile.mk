#@ autoformat 07:01:11
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
    SketcherInterfacesUUID         \ # SketcherInterfaces             SketcherInterfacesUUID
#
#else
LINK_WITH_FOR_IID =
#endif
#
# Makefile for the shared libray of an interfaces Framework
# 
BUILT_OBJECT_TYPE=SHARED LIBRARY


# Pour la partie differente entre V6 et V5
#if defined(CATIAR210)
INCLUDED_SPECIFIC= 
#else
ALIASES_ON_IMPORT = CATSketcherInterfaces CATSketcherUseItf SketcherPubIDL SketcherProIDL

INCLUDED_SPECIFIC=      \
      SketcherProIDL    \
      SketcherPubIDL    \
#endif

LINK_WITH= \
    $(LINK_WITH_FOR_IID)           \
    $(INCLUDED_SPECIFIC)           \
    CATObjectModelerItf            \ # ObjectModelerInterfaces        CATObjectModelerItf
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATSketcherUseItf              \ # CATSketcherUseItf              CATSketcherUseItf
    JS0GROUP                       \ # System                         JS0GROUP
    JS0INF                         \ # System                         JS0GROUP
#

INCLUDED_MODULES = $(INCLUDED_SPECIFIC)    SketcherItf SketcherItfCPP
