#@ autoformat 10:02:05
#ifdef LOCAL_DEFINITION_FOR_IID
   LINK_WITH_FOR_IID = \
    ObjectSpecsModelerUUID         \ # ObjectSpecsModeler             ObjectSpecsModelerUUID
#
#else
   LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY CATGSMModel.m
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
#
OS = COMMON

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    $(LINK_WITH_FOR_IID)           \
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
    CATGSMModelServices            \ # CATGSMModelServices            CATGSMModelServices
    CATGSMUseItf                   \ # CATGSMUseItf                   CATGSMUseItf
    CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    NS0S3STR                       \ # System                         JS0GROUP
	CATSurfacicInterfaces          \ # CATSurfacicInterfaces          CATSurfacicInterfaces
#

#
OS = AIX
INSTANCIATION_MODE = -qnotempinc -qNOOPTimize


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
