#
# Plant Arrangement Mode 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=   \
JS0FM JS0SCBAK \
ArrUtility

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=
#else
LINK_WITH_IID=
#endif

#------------
OS = COMMON
