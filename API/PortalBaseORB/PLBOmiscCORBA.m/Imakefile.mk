# == VVD == - no more CORBA compilation
BUILD = NO

BUILT_OBJECT_TYPE=CORBA

#ifdef MK_ORBIXJAVA33
OS=COMMON
LINK_WITH=PLBObaseCORBA 

CORBA_JAVA_CS = CLIENT
CORBA_JAVA_PACKAGE = com.dassault_systemes.catweb.misc.license
LOCAL_JAVAFLAGS=-J-ms16m -J-mx96m
CORBA_JAVA_OPTS= -jPCATFactoryIDL=com.dassault_systemes.catweb.base.catlet.model

OS=irix_a
BUILD=NO
#else
BUILD=NO
#endif
