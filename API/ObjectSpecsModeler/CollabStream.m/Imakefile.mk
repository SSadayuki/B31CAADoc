BUILT_OBJECT_TYPE=SHARED LIBRARY 

#if os Windows
CXX_WARNINGPROMOTE=CATOsmWarningPromote.h
#endif

COMMON_LINK_WITH=	@ObjectModelerCollection \
									AC0SPBAS CATObjectModelerBase CATObjectSpecsModeler

ALIASES_ON_IMPORT = CATOmx CollabStream

#ifdef (CATIAR206)
LINK_WITH=$(COMMON_LINK_WITH) ObjectModelerSystem CATPLMTos CATOmbSelectiveLoading
#else
LINK_WITH=$(COMMON_LINK_WITH) JS0FM
#endif
