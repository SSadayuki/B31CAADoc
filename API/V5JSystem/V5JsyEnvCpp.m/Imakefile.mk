
BUILT_OBJECT_TYPE = SHARED LIBRARY

JDK_INC = $(JavaROOT_PATH)/include

## -------------------------------------------------- ##
OS=AIX

LOCAL_CFLAGS	= -D_INT16 -D_INT32 -D_AIX43

RD=$(RELEASE_STARTDATE) 
LOCAL_CCFLAGS	= -I$(JDK_INC) -I$(JDK_INC)/aix -D RELEASE_STARTDATE='"$(RD)"' -DRELEASE_SPKLEVEL='"$(Mkmk_SPKLEVEL)"' -DRELEASE_HFXLEVEL='"$(Mkmk_HFXLEVEL)"'
#LOCAL_CCFLAGS	= -I/usr/jdk_base/include -I/usr/jdk_base/include/aix -D RELEASE_STARTDATE='"$(RD)"' -DRELEASE_SPKLEVEL='"$(Mkmk_SPKLEVEL)"' -DRELEASE_HFXLEVEL='"$(Mkmk_HFXLEVEL)"'

## -------------------------------------------------- ##
OS=HP-UX

RD=$(RELEASE_STARTDATE) 
LOCAL_CCFLAGS	= -I$(JDK_INC) -I$(JDK_INC)/hp-ux +z +u4 -D RELEASE_STARTDATE='"$(RD)"' -DRELEASE_SPKLEVEL='"$(Mkmk_SPKLEVEL)"' -DRELEASE_HFXLEVEL='"$(Mkmk_HFXLEVEL)"'

#SYS_INCPATH	= -I$(JDK_INC) -I$(JDK_INC)/hp-ux
#SYS_INCPATH	= -I/opt/java/include -I/opt/java/include/hp-ux
SYS_LIBS	= 
LOCAL_LDFLAGS   = -Wl,-B,immediate -lm -lCsup -lstream -lstd

## -------------------------------------------------- ##
OS=IRIX

RD=$(RELEASE_STARTDATE) 
LOCAL_CCFLAGS	=  -I$(JDK_INC) -I$(JDK_INC)/irix -D RELEASE_STARTDATE='"$(RD)"' -DRELEASE_SPKLEVEL='"$(Mkmk_SPKLEVEL)"' -DRELEASE_HFXLEVEL='"$(Mkmk_HFXLEVEL)"'
#LOCAL_CCFLAGS	=  -I/usr/java/include -I/usr/java/include/irix -D RELEASE_STARTDATE='"$(RD)"' -DRELEASE_SPKLEVEL='"$(Mkmk_SPKLEVEL)"' -DRELEASE_HFXLEVEL='"$(Mkmk_HFXLEVEL)"'

LOCAL_CFLAGS	= 

## -------------------------------------------------- ##
OS=SunOS

RD=$(RELEASE_STARTDATE)
LOCAL_CCFLAGS	= -G -I$(JDK_INC) -I$(JDK_INC)/solaris -D RELEASE_STARTDATE='"$(RD)"' -DRELEASE_SPKLEVEL='"$(Mkmk_SPKLEVEL)"' -DRELEASE_HFXLEVEL='"$(Mkmk_HFXLEVEL)"'
#LOCAL_CCFLAGS	= -G -I/usr/java/include -I/usr/java/include/solaris -D RELEASE_STARTDATE='"$(RD)"' -DRELEASE_SPKLEVEL='"$(Mkmk_SPKLEVEL)"' -DRELEASE_HFXLEVEL='"$(Mkmk_HFXLEVEL)"'

SYS_INCPATH	= 
FORTRAN_LIBS =
SUNMATH_LIBS =

## -------------------------------------------------- ##
OS=Windows_NT
LINK_WITH= JS0GROUP
SYS_LIBS = netapi32.lib
LOCAL_CFLAGS	= /O2
RD=\"$(RELEASE_STARTDATE)\"
LOCAL_CCFLAGS	= /I"$(JDK_INC)" /I"$(JDK_INC)\win32" /D RELEASE_STARTDATE=$(RD) -DRELEASE_SPKLEVEL=\"$(Mkmk_SPKLEVEL)\" -DRELEASE_HFXLEVEL=\"$(Mkmk_HFXLEVEL)\"



