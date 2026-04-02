#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
FittingInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = G60I0FIT FittingItf  FittingPubIDL FittingProIDL FittingItfCPP

LINK_WITH=$(LINK_WITH_FOR_IID)  NS0S3STR                        \
                                InfItf                          \
                                Mathematics                     \ # Mathematics
                                CATMathStream                   \ # Mathematics
                                CATApplicationFrame             \ # ApplicationFrame


OS = COMMON

