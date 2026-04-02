#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
LINK_WITH = CATSysMultiThreading

#
OS = AIX

#
OS = HP-UX

#
OS = IRIX

#
OS = SunOS
# Remove the default Fortran libs
FORTRAN_LIBS = 

#
OS = Linux

#
OS = Windows_NT
LOCAL_LDFLAGS = /NODEFAULTLIB:libC.lib
