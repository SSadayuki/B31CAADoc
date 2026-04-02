#@ autoformat 09:12:14

BUILT_OBJECT_TYPE=SHARED LIBRARY

# Pour la partie UUID
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
    CATSketcherUseUUID             \ # CATSketcherUseItf              CATSketcherUseUUID
#else
LINK_WITH_FOR_IID =
#endif

# Pour la partie differente entre V6 et V5
#if defined(CATIAR210)
LINK_WITH_SPECIFIC= \
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
#else
LINK_WITH_SPECIFIC= \
#endif

# le link proprement dit
LINK_WITH= \
    $(LINK_WITH_SPECIFIC)          \
    $(LINK_WITH_FOR_IID)           \
    JS0GROUP                       \ # System                         JS0GROUP
#
