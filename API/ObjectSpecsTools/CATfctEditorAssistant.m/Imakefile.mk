# COPYRIGHT DASSAULT SYSTEMES 2004
BUILT_OBJECT_TYPE=LOAD MODULE 

#if os Windows
CXX_WARNINGPROMOTE=CATOstWarningPromote.h
#endif

#if !defined(CATIAR418) || os _DS_COMPUTE_SERVER
LINK_WITH=CATOsmCatalogUtilities
#else
LINK_WITH=CATOsmCatalogUtilities JS0GROUP CATOmx CATObjectModelerBase CATPLMComponentInterfaces CATPLMIntegrationAccess CATPLMServicesItf
#endif
