#@ autoformat 14:06:24
# -------------------------------------------------------

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATGmoMecMod                   \ # GSMModel                       GSMModelBasic
    CATGotInterfaces               \ # GSOInterfaces                  CATGotInterfaces
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0GROUP                       \ # System                         JS0GROUP
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
	CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
	CATSysTS                       \ # SystemTS                       CATSysTS
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	CATApplicationFrame            \ # ApplicationFrame
    CATInteractiveInterfaces       \ # InteractiveInterfaces          CATInteractiveInterfaces                              
	MecModItfCPP                   \ # MecModInterfaces               CATMecModInterfaces
#
#endif
#endif
