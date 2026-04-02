# COPYRIGHT DASSAULT SYSTEMES 2008
#======================================================================
# Imakefile for module ObjectModelerSystem
#======================================================================
#
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 

INCLUDED_MODULES =	CATOMY 
	

LINK_WITH = JS0ZLIB JS0FM @ObjectModelerCollection 

ALIASES_ON_IMPORT= CATOmx ObjectModelerSystem
#if os Windows
LOCAL_LDFLAGS = /ignore:4006
#endif

