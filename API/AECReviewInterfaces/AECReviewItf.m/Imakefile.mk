#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
LINK_WITH = JS0GROUP ObjectModeler \
            JS0CORBA CATApplicationFrame\
            InfItf CATInfInterfaces  
#
INCLUDED_MODULES = AECReviewItfCPP AECReviewProIDL AECReviewPubIDL

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID= AECReviewInterfacesUUID
#else
LINK_WITH_IID=
#endif

OS = COMMON
