# == VVD == - no more CORBA compilation
# Commented to fix build error
# BUILD=NO

BUILT_OBJECT_TYPE=CORBA

#ifdef MK_ORBIXJAVA33
OS=COMMON
LINK_WITH = PLBObaseCORBA PLBOutilCORBA

CORBA_JAVA_OPTS = -jQ -jPNlsString=com.dassault_systemes.catweb.base.util -jPNLSStringSeq=com.dassault_systemes.catweb.base.util -jPCATFactoryIDL=com.dassault_systemes.catweb.base.catlet.model
CORBA_JAVA_CS = CLIENT
CORBA_JAVA_PACKAGE = com.dassault_systemes.catweb.tree.model

OS=irix_a
BUILD=NO
#else
BUILD=NO
#endif
