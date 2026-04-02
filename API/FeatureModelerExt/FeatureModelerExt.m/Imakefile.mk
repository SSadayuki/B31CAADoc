BUILT_OBJECT_TYPE=SHARED LIBRARY

#if os Windows
CXX_WARNINGPROMOTE=CATFmWarningPromote.h
#endif

COMMON_LINK_WITH=JS0GROUP CATOmx ObjectModelerSystem CATObjectModelerBase CATObjectSpecsModeler

#ifdef CATIAR206
LINK_WITH=$(COMMON_LINK_WITH) CATOmbSelectiveLoading CATPLMComponentInterfaces PLMLIC
# CATPLMIdentification CATPLMIdentificationAccess
#else
LINK_WITH=$(COMMON_LINK_WITH)
#endif
