#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAssemblyUIUUID \
ProductStructureUIUUID
#else
LINK_WITH_FOR_IID =
#endif
#
#
# ATTENTION CE MODULE N'A PAS LE DROIT DE PREREQUER LE MODELE
# DONC NE JAMAIS RAJOUTER DANS LE LINK_WITH LES LIB DE MECMOD,
# PRODUCTSTRUCTURE, ASSEMBLY, et autre CATAssCommand ....
#
#
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#

COMMON_LINK_WITH=CATPrsWksPRDWorkshop \
                 AD0XXBAS \
                 SELECT \
                 CD0FRAME \
                 CATDialogEngine \
                 DI0PANV2 \
                 JS0FM \
                 JS0STR \
                 CATWkAssyInterface \
                 CATProductStructureInterfaces \
                 CATAssemblyInterfaces \
                 CATTPSHeadersServices \
                 CATTPSItfCPP \
				 CATAfrSDOView	\


LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMMON_LINK_WITH)

SH_LINK_WITH= $(LINK_WITH)
