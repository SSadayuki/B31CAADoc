#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = CO0BItf CO0BPubIDL CO0BProIDL CO0OItf  

LINK_WITH =      \
	   CO0LSTPV \
       CO0RCINT \
       JS0CORBA \
       JS0LIB0 \
       JS0SCBAK \
       JS0STR \
       NS0S3STR  \
       CATObjectModelerBase

#
LOCAL_CCFLAGS = 

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

SYS_LIBS = Winmm.lib 
