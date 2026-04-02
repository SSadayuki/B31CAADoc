#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
InterferenceUUID
#else
LINK_WITH_FOR_IID =
#endif

BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = O20COLLI CATVpsCollision

LINK_WITH_BASE=$(LINK_WITH_FOR_IID) YN000MFL VE0BASE \
                                    CO0LSTPV YN000MAT \
                                    JS0CORBA JS0ERROR \
                                    Vps CATVoxelServices \
                                    CATSysMultiThreading \
                                    CATMathStream CATViz \
                                    CATIntInterfaces \
                                    CATIntMeasurement \
                                    #LODDMU \

LINK_WITH=$(LINK_WITH_BASE)

#
OS = AIX

#
OS = HP-UX

#
OS = SunOS


#
OS = IRIX

#
OS = Windows_NT
