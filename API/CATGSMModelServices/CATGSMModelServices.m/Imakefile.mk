#@ autoformat 10:02:05
#
# SHARED LIBRARY CATGSMModelServices.m
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
#
OS = COMMON

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    NS0S3STR                       \ # System                         JS0GROUP
#

#
OS = AIX
INSTANCIATION_MODE = -qnotempinc -qNOOPTimize
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
