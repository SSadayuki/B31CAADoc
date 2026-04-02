#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
BUILD=NO

#ifdef MK_ORBIXCPP33
#else
OS = aix_a
BUILD=YES
LIBRARY_NAME=it_cdrmt.so

OS = irix_a
BUILD=YES

OS = solaris_a 
BUILD=YES

OS = hpux_b
BUILD=YES
#endif

