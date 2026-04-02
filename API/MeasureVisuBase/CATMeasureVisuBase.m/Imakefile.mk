#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif

BUILT_OBJECT_TYPE=SHARED LIBRARY
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) \
            JS0GROUP \
            VE0BASE \
            Mathematics \
            CATMeasureGeometryInterfaces \  #CATIMeasurable
            CATMathStream \
            CATViz \

# System dependant variables
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
