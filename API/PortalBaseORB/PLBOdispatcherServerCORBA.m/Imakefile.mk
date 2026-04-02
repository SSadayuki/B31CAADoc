# == VVD == - no more CORBA compilation
BUILD = NO

BUILT_OBJECT_TYPE = CORBA

#ifdef MK_ORBIXJAVA33
OS=COMMON
LINK_WITH=PLBOutilCORBA

CORBA_JAVA_CS = SERVER CLIENT
CORBA_JAVA_OPTS = -jQ -jPNlsString=com.dassault_systemes.catweb.base.util
#CORBA_JAVA_CS = CLIENT
CORBA_JAVA_PACKAGE = com.dassault_systemes.portalbaseorb.plbodispatcherserver
LOCAL_JAVAFLAGS=-J-ms16m -J-mx96m

OS=irix_a
BUILD=NO
#else
BUILD=NO
#endif
