BUILT_OBJECT_TYPE=SHARED LIBRARY

#if defined(CATIAR206)
BUILD=NO
#endif

#if os Windows
CXX_WARNINGPROMOTE=CATOsmWarningPromote.h
#endif

LINK_WITH=JS0GROUP CATObjectModelerBase CATObjectSpecsModeler CATInfInterfaces
