#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATVisUUID \
GeometricObjectsUUID \
ObjectModelerBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
#
BARBARELINK = 
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
LINK_WITH= \
  $(LINK_WITH_FOR_IID) \
  $(BARBARELINK)
#	    

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

