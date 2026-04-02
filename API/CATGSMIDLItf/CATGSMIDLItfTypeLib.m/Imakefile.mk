#@ autoformat 10:02:05

#SOURCES_PATH = PublicInterfaces
BUILT_OBJECT_TYPE=TYPELIB

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    MecModTypeLib                  \ # CATMmrAutomationInterfaces     MecModTypeLib
    InfTypeLib                     \ # InfInterfacesTLB               InfTypeLib
    KweTypeLib                     \ # KnowledgeIDLItf                KweTypeLib
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
