#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = 

LOCAL_CCFLAGS= -I$(FWPATH)/JS0CORBA.m/LocalInterfaces -I$(FWPATH)/JS0CORBA.m/src -I$(FWPATH)/JS0DSPA.m/LocalInterfaces -I$(FWPATH)/JS0DSPA.m/src -I$(FWPATH)/SystemUUID.m/src -D __CATBBMagic -DCATMAINWIN 
#
OS = Windows_NT
LOCAL_CCFLAGS=  -I "$(FWPATH)/JS0CORBA.m/LocalInterfaces" -I "$(FWPATH)/JS0CORBA.m/src" -I "$(FWPATH)/JS0DSPA.m/LocalInterfaces" -I "$(FWPATH)/JS0DSPA.m/src" -I "$(FWPATH)/SystemUUID.m/src"
SYS_LIBS = netapi32.lib Iphlpapi.lib


OS = SunOS
# Remove the default Fortran libs
FORTRAN_LIBS = 
#BUILD=NO



