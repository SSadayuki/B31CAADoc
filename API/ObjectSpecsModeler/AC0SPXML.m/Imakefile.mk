BUILT_OBJECT_TYPE=SHARED LIBRARY

#if os Windows
CXX_WARNINGPROMOTE=CATOsmWarningPromote.h
#endif

LINK_WITH=@ObjectModelerCollection CATObjectModelerBase CATObjectSpecsModeler AD0XXBAS
