#@ autoformat 10:02:05
#
# Imakefile CATGitInterfaces.m
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
LINK_WITH_V6CLIENT_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    GSMInterfacesCLSID             \ # GSMInterfaces                  GSMInterfacesCLSID
    JS0GROUP                       \ # System                         JS0GROUP
#


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
ALIASES_ON_IMPORT= CATGitInterfaces CATGSMUseItf
#endif
#endif
#endif
