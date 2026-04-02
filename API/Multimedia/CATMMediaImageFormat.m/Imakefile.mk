BUILT_OBJECT_TYPE = EL LIBRARY

LINK_WITH = JS0GROUP CATViz CATMMediaImageFile CATMMediaPixelImage $(SNOWBOUND)


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

OS = solaris_a64
SYS_LIBS = -lX11
SNOWBOUND = 

OS = intel_a
SYS_LIBS = gdiplus.lib
SNOWBOUND = snbdcm

OS = win_b
SYS_LIBS = gdiplus.lib
SNOWBOUND = snbdcm

OS = win_b64
SYS_LIBS = gdiplus.lib
SNOWBOUND = snbdcm64

OS = intel_a64
SYS_LIBS = gdiplus.lib
SNOWBOUND = 

OS = win_a
SYS_LIBS = gdiplus.lib
SNOWBOUND = snbdcm
