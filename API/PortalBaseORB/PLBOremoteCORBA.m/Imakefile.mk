# == VVD == - no more CORBA compilation
BUILD=NO

BUILT_OBJECT_TYPE=CORBA

#ifdef MK_ORBIXJAVA33
OS=COMMON
LINK_WITH=PLBObaseCORBA PLBOtreeCORBA

CORBA_JAVA_CS = CLIENT
CORBA_JAVA_PACKAGE = com.dassault_systemes.catweb.base.catlet.model
LOCAL_JAVAFLAGS=-J-ms16m -J-mx96m
CORBA_JAVA_FILTER=

OS=irix_a
BUILD=NO
#else
BUILD=NO
#endif
