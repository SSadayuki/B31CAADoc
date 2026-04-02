# Imakefile of the object TessPolygon
#
BUILT_OBJECT_TYPE= SHARED LIBRARY
#

#ifdef SPATIAL_SPECIFICATION
BUILD = NO
#endif

LINK_WITH =  JS0CORBA
#
OS = COMMON

#
OS = AIX

#
OS = IRIX

#
OS = HP-UX

#
OS = SunOS

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

