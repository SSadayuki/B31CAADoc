BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= 


## -------------------------------------------------- ##
OS=Windows_NT
SYS_LIBS = netapi32.lib
RD=\"$(RELEASE_STARTDATE)\"
LOCAL_CCFLAGS	= /D RELEASE_STARTDATE=$(RD) -DRELEASE_SPKLEVEL=\"$(Mkmk_SPKLEVEL)\" -DRELEASE_HFXLEVEL=\"$(Mkmk_HFXLEVEL)\"

### This library is only used on Windows by a .NET library, do not build it on UNIX ###

#
OS = AIX
BUILD=NO

#
OS = HP-UX
BUILD=NO

#
OS = IRIX
BUILD=NO

#
OS = SunOS
BUILD=NO

