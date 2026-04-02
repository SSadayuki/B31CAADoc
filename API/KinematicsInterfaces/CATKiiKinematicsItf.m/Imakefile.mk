#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
KinematicsInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# LOAD MODULE
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = KinematicsItf KinematicsItfProIDL KinematicsItfPubIDL  KinematicsInterfacesCPP

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP NS0S3STR  CATInfInterfaces ObjectModeler CATApplicationFrame AS0STARTUP


