# COPYRIGHT DASSAULT SYSTEMES 2001
#

BUILT_OBJECT_TYPE=JAVA

TYPE = COMMON

LINK_WITH = CATJDialog CATJSystem CATJdgAwtObj CATJdgTheme

LOCAL_JAVA_FLAGS=-J-ms16m -J-mx96m



#Build with java target level 1.7 for R26 and above but below R28
#if defined(CATIAV5R26) && !defined(CATIAV5R28)
_MK_TRGOPTS_FORTOOLS = 1.7
#endif

