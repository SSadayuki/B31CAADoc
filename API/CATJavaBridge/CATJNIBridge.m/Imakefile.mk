
BUILT_OBJECT_TYPE= SHARED LIBRARY

LINK_WITH = JS0GROUP JS0FM JS0MT CATAutoItf SystemUUID

OS = win_a
LOCAL_CCFLAGS = -D_WIN9X_SOURCE

OS = solaris_a
SYS_LIBS = -lXm

OS = irix_a
SYS_LIBS = -lXm

OS = irix_a64
SYS_LIBS = -lXm

OS = aix_a
SYS_LIBS = -lXm

OS = aix_a64
SYS_LIBS = -lXm

OS = hpux_b
SYS_LIBS = -lXm

OS = hpux_b64
SYS_LIBS = -lXm
