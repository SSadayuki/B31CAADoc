# == VVD == - no more CORBA compilation
#BUILD=NO
# == NJ2 == Enabled build again, to fix compilation issues in dependant modules.

BUILT_OBJECT_TYPE=CORBA

#ifdef MK_ORBIXJAVA33
OS=COMMON
LINK_WITH = 

CORBA_JAVA_OPTS = -jQ 
CORBA_JAVA_CS = CLIENT SERVER
CORBA_JAVA_PACKAGE = com.dassault_systemes.catweb.base.util
LOCAL_JAVAFLAGS=-J-ms16m -J-mx96m

OS=irix_a
BUILD=NO
#else
BUILD=NO
#endif
