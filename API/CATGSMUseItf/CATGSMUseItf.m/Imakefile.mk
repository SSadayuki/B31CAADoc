#@ autoformat 14:06:24
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
#
LINK_WITH_V6_ONLY=
#
LINK_WITH_V6CLIENT_ONLY=
#

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    JS0GROUP                       \ # System                         JS0GROUP
    CATSysTS                       \ # SystemTS                       CATSysTS
	AC0SPBAS     				   \ # ObjectSpecsLegacy	          AC0SPBAS		
#

INCLUDED_MODULES= CATGSMUseItfCPP

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY) \
#endif

#if !defined(_DS_COMPUTE_SERVER)
#if defined(CATIAR201)
LINK_WITH_V6CLIENT_ONLY = \
    CATAfrItf                      \ # AfrInterfaces                  CATAfrItf
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
    CATApplicationFrame            \ # ApplicationFrame
#
#endif
#endif
#endif
