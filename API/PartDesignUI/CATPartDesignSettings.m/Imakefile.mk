#@ autoformat 11:03:03
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
    ObjectSpecsModelerUUID         \ # ObjectSpecsModeler             ObjectSpecsModelerUUID
    PartInterfacesUUID             \ # PartInterfaces                 PartInterfacesUUID
#
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY PRTFACTORY
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
 
INCLUDED_MODULES = PRTSETTINGS\

COMON_LINK_WITH =  CATPartInterfaces \
                   CATPartDesignFeature\
				   CATPartDesignBase\
                   JS0STR\
                   CATPartDesignUI\

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_FOR_IID)           \
    $(COMON_LINK_WITH)             \
    DI0PANV2                       \ # Dialog                         DI0PANV2
    JS0FM                          \ # System                         JS0FM
#


OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrProperties               \ # AfrProperties                  CATAfrProperties
    CATAfrFoundation               \ # CATAApplicationFrame           CD0FRAME
    
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
OM0EDPRO                       \ # CATIAApplicationFrame          OM0EDPRO 
JS0SETT                        \ # System                         JS0SETT
AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
CD0FRAME                       \ # CATAApplicationFrame           CD0FRAME
#
#endif
#endif
