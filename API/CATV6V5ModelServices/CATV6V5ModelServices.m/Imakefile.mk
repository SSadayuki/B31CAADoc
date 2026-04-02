
BUILT_OBJECT_TYPE = SHARED LIBRARY


INCLUDED_MODULES= CATV6V5MonocodeServices
#

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    AC0SPBAS                       \
    CATMecModLiveUseItf            \
    CATMecModUseItf                \
    JS0CORBA                       \
    CATObjectSpecsModeler          \ #ObjectSpecsModeler AC0SPEXT
    CATMecModInterfaces            \ #MecModInterfaces   MecModItfCPP
#


#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \

#
#endif
#endif
