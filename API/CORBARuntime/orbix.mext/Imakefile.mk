#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
BUILD=NO

#ifdef MK_ORBIXCPP33
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33

OS=solaris_a
BUILD=YES
#ALIASES_ON_IMPORT=CATCsbPatch orbix

OS=hpux_b
BUILD=YES

OS=aix_a
BUILD=YES
LIBRARY_NAME=orbix.so

OS=aix_a64
#if (defined MK_IBMVAVER) && (MK_IBMVAVER == 16)
#LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/XLC16
#endif
BUILD=YES
LIBRARY_NAME=orbix.so
#else
OS = aix_a
BUILD=YES
LIBRARY_NAME=orbix.so

OS = irix_a
BUILD=YES

OS = solaris_a 
BUILD=YES
OS = hpux_b
BUILD=YES
#endif

