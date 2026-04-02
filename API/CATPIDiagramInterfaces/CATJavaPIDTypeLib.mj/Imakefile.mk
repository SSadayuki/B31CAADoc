#
# This module generates a Java .jar for this framework's Automation interfaces.
# It is part of the Java/JNI bridge, which enables Java access to Automation interfaces.
# The Java/JNI bridge requires two modules :
# 1/ A Java module (the present module) which is used by Java programs.
# 2/ A C++ JNI module, which enables communication between Java methods and the
#    Automation/C++ implementations.
#

BUILT_OBJECT_TYPE = JAVA

#
# This .jar needs to be linked with the base classes of the Java/JNI bridge
# (CATJavaBridge) and the .jar of the required interfaces frameworks
#

LINK_WITH = CATJavaBridge CATJavaInfTypeLib

#
# The java part of the bridge communicates with the Automation/C++ implementations
# using a JNI C++ shared library. 
# The mandatory IDL_JNI_LIBNAME specifies the name of the mkmk module which
# corresponds to the C++ shared lib.
#

IDL_JNI_LIBNAME = CATJNIPIDTypeLib

# vso - 1/25/2006 - R17- new checking flags module that does not pull in any IDL
# as of today no IDL is exported by this module.
BUILD=NO

