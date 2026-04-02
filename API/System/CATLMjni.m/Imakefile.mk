BUILT_OBJECT_TYPE = SHARED LIBRARY
LINK_WITH = JS0GROUP JS0LCC
COMMON_CCFLAGS = 
JDK_INC = $(JavaROOT_PATH)/include


OS = AIX
LOCAL_CCFLAGS = $(COMMON_CCFLAGS)\
                -I$(JDK_INC) -I$(JDK_INC)/aix
SYS_LIBS = -lodm -lcfg -lpthreads

OS = HP-UX
LOCAL_CCFLAGS = $(COMMON_CCFLAGS)\
                -D_HPUX\
                -I$(JDK_INC) -I$(JDK_INC)/hp-ux
SYS_LIBS = -lCsup -lstream -lstd -lpthread

OS = IRIX
LOCAL_CCFLAGS = $(COMMON_CCFLAGS)\
                -I$(JDK_INC) -I$(JDK_INC)/irix
SYS_LIBS = -lpthread

OS = SunOS
LOCAL_CCFLAGS = $(COMMON_CCFLAGS)\
                -I$(JDK_INC) -I$(JDK_INC)/solaris
SYS_LIBS = -lpthread

OS = Windows_NT
LOCAL_CCFLAGS = $(COMMON_CCFLAGS)\
                -I"$(JDK_INC)" -I"$(JDK_INC)/win32"
#if os intel_a
LOCAL_LD_ADDED_OBJECTS =
#endif

OS = Linux
LOCAL_CCFLAGS = $(COMMON_CCFLAGS) -fwritable-strings\
                -I$(JDK_INC) -I$(JDK_INC)/linux 
LOCAL_CFLAGS = $(LOCAL_CCFLAGS)



