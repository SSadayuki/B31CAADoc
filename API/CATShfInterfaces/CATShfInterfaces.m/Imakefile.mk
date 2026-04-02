#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATShfInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
BUILT_OBJECT_TYPE=SHARED LIBRARY
 
INCLUDED_MODULES = CATShfInterfacesCPP CATShfPubIDL CATShfProIDL

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP            \
           MecModItf

# 20.08.01 - FDD - Useless declared           CATApplicationFrame \
