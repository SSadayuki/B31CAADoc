#
# This module generates a JNI shared library for this framework's Automation interfaces.
# It is part of the Java/JNI bridge, which enable Java access to Automation interfaces.
# The Java/JNI bridge consists of two modules:
# 1/ A Java module which is manipulated Java java programs.
# 2/ A C++ JNI module (the present module), which enables communication between
#    Java methods and the the Automation/C++ implementations.
#


BUILT_OBJECT_TYPE = SHARED LIBRARY

#
# The JNI shared library needs to be linked with the base classes of the 
# Java/JNI bridge (JS0GROUP AND CATJNIBridge) and the shared libs of the required 
# interfaces frameworks
#

LINK_WITH = JS0GROUP CATJNIBridge InfItf ProcessInterfaces


#INSERTION ZONE NOT FOUND, MOVE AND APPEND THIS VARIABLE IN YOUR LINK STATEMENT
#LINK_WITH = ... $(WIZARD_LINK_MODULES) ...
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES =  \
 \
JS0GROUP JS0FM JS0GROUP 

