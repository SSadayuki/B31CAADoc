#
# The CATIA V5 3DCOM Server CATInteractiveApplicationo
#
# GDE 09/2001 : this module contains code that was originaly delivered in
# the Load Module GW0SRVCX.m. But this code can not be a Load Module as
# it needs the -brtl link option on AIX (because of liborbix), which is very bad
# for performances.

#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#

LINK_WITH = SystemUUID orbix GW0COMUN GW0LIBCX CATCsbInfraCx CATCsbDocsCx \
            JS0FM JS0CORBA JS0SCBAK JS0STR DI0PANV2 CD0WIN CD0FRAME \
            InfItf CATCsbMainInteractive CATCsbLicensing CATCsbCORBA
CATCsbCORBA = SERVER


OS = AIX
LOCAL_CCFLAGS = -D_AIX_SOURCE 
LOCAL_LDFLAGS = -brtl 
CXX_EXCEPTION = 
SYS_INCPATH = 
SYS_LIBS = -lXm -lXt -lX11 

OS = HP-UX
LOCAL_CCFLAGS = -D_HPUX_SOURCE -D_REENTRANT
CXX_EXCEPTION = 
SYS_INCPATH = 
#if os hpux_a
# shared lib non multithreadee
SYS_LIBS = -lcma -lXm -lXt -lX11
#else
# libcma sur HP11 incompatible avec libpthread
SYS_LIBS = -lXm -lXt -lX11
#endif

OS = IRIX
LOCAL_CCFLAGS = -D_IRIX_SOURCE
LOCAL_LDFLAGS = 
CXX_EXCEPTION = 
SH_SYS_LIBPATH = $(SYS_LIBPATH)
SYS_INCPATH = -I/usr/include/Motif1.2 -I/usr/include/X11R5 
SYS_LIBPATH = -L/usr/lib/Motif1.2 -L/usr/lib/X11R5
# shared lib non multithreadee
SYS_LIBS =  -lXm -lXt -lX11 -lgen -lCsup
SH_SYS_LIBS = $(SYS_LIBS)

OS = SunOS
LOCAL_CCFLAGS = -D_SUNOS_SOURCE
CXX_EXCEPTION = 
SYS_INCPATH = 
SH_SYS_LIBPATH = $(SYS_LIBPATH)
SYS_LIBPATH = -Lxgl -L/opt/SUNWits/Graphics-sw/xgl/lib
# shared lib non multithreadee
SYS_LIBS =  -Bdynamic -lXm -lXt -lX11
SH_SYS_LIBS = $(SYS_LIBS)

OS = intel_a
#BUILD=NO
LINK_WITH = GW0COMUN GW0LIBCX CATCsbInfraCx CATCsbDocsCx        \
            JS0FM JS0CORBA JS0SCBAK JS0STR DI0PANV2 \
            CD0WIN CD0FRAME InfItf ITMi CATCsbMainInteractive \
            CATCsbLicensing LicensingFR CATCsbCORBA
CATCsbCORBA = SERVER
LOCAL_CCFLAGS = -D_WINDOWS_SOURCE -DWIN32 -DWIN32_LEAN_AND_MEAN \
                -DIT_EX_MACROS -MD /GX /Od /Zi  -DORBIX_DLL
SYS_LIBS = Wsock32.LIB advapi32.lib user32.lib 

OS = win_b
#BUILD=NO
LINK_WITH = GW0COMUN GW0LIBCX CATCsbInfraCx CATCsbDocsCx        \
            JS0FM JS0CORBA JS0SCBAK JS0STR DI0PANV2 \
            CD0WIN CD0FRAME InfItf ITMi CATCsbMainInteractive \
            CATCsbLicensing LicensingFR CATCsbCORBA
CATCsbCORBA = SERVER

LOCAL_CCFLAGS = -D_WINDOWS_SOURCE -DWIN32 -DWIN32_LEAN_AND_MEAN \
                -DIT_EX_MACROS -MD /GX /Od /Zi  -DORBIX_DLL
SYS_LIBS = Wsock32.LIB advapi32.lib user32.lib 

OS = win_b64
#BUILD=NO
LINK_WITH = GW0COMUN GW0LIBCX CATCsbInfraCx CATCsbDocsCx        \
            JS0FM JS0CORBA JS0SCBAK JS0STR DI0PANV2 \
            CD0WIN CD0FRAME InfItf ITMi CATCsbMainInteractive \
            CATCsbLicensing LicensingFR CATCsbCORBA
CATCsbCORBA = SERVER
LOCAL_CCFLAGS = -D_WINDOWS_SOURCE -DIT_EX_MACROS -DORBIX_DLL
#SYS_LIBS = Wsock32.LIB advapi32.lib user32.lib 

OS = alpha_a
BUILD = NO




OS = win_a
#BUILD=NO
LINK_WITH = GW0COMUN GW0LIBCX CATCsbInfraCx CATCsbDocsCx        \
            JS0FM JS0CORBA JS0SCBAK JS0STR DI0PANV2 \
            CD0WIN CD0FRAME InfItf ITMi CATCsbMainInteractive \
            CATCsbLicensing CATCsbCORBA
CATCsbCORBA = SERVER

LOCAL_CCFLAGS = -D_WINDOWS_SOURCE -DWIN32 -DWIN32_LEAN_AND_MEAN \
                -DIT_EX_MACROS -MD /GX /Od /Zi  -DORBIX_DLL
LOCAL_LDFLAGS = $(SUB_WIN)
SYS_LIBS = Wsock32.LIB advapi32.lib user32.lib 










