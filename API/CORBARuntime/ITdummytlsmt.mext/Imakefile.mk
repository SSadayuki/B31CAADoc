#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
BUILD=NO

#ifdef MK_ORBIXCPP33
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33

OS=aix_a
BUILD=YES
LIBRARY_NAME=ITdummytlsmt.so

OS=aix_a64
#if (defined MK_IBMVAVER) && (MK_IBMVAVER == 16)
#LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/XLC16
#endif
BUILD=YES
LIBRARY_NAME=ITdummytlsmt.so

OS=hpux_b
BUILD=YES
#else
OS=hpux_b
BUILD=YES

OS=aix_a 
BUILD=YES
LIBRARY_NAME=ITdummytlsmt.so

OS=irix_a
BUILD=YES

OS=solaris_a
BUILD=YES
#endif

