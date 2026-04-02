#if defined ( CATIAV5R20 )
BUILT_OBJECT_TYPE = NONE
#else

#if (os iossimul_a || os iosdevice_a)
BUILT_OBJECT_TYPE=ARCHIVE
#else
BUILT_OBJECT_TYPE=SHARED LIBRARY
#endif

INCLUDED_MODULES = CATOpDataItf

#if os intel_a
OPTIMIZATION_CPP = /O2
#else
#endif

OS = Windows_NT
# SYS_LIBS = psapi.lib

#endif
