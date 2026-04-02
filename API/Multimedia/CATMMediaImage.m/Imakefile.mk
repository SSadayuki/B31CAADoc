#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = CATMMediaImageBase CATMMediaImageFile CATMMediaImageCodec

LINK_WITH = JS0GROUP JS0FM DI0PANV2 CATViz CATMMediaPixelImage $(SNOWBOUND)

OS = AIX
SYS_LIBS = -lX11
SNOWBOUND = snbdcm

OS = IRIX
LOCAL_LDFLAGS = -Wl,-woff,16 -Wl,-woff,110
SYS_LIBS = -lX11
SNOWBOUND = snbdcm

OS = irix_a64
LOCAL_LDFLAGS = -Wl,-woff,16 -Wl,-woff,110
SYS_LIBS = -lX11
SNOWBOUND = 

OS = HP-UX
SYS_LIBS = -lX11
SNOWBOUND = snbdcm

OS = hpux_b64
SYS_LIBS = -lX11
SNOWBOUND = 

OS = SunOS
SYS_LIBS = -lX11
SNOWBOUND = snbdcm

## @linux mcf 2004-06-01.14:10:37 [Linux support] ##
OS = Linux
SYS_LIBS = -lX11
SNOWBOUND = snbdcm

OS = solaris_a64
SYS_LIBS = -lX11
SNOWBOUND =

OS = intel_a
SNOWBOUND = snbdcm

OS = win_b
SNOWBOUND = snbdcm

OS = win_b64
SNOWBOUND = snbdcm64

OS = intel_a64
SNOWBOUND = 

OS = win_a
SNOWBOUND = snbdcm
