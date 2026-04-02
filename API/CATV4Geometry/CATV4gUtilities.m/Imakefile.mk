# 
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = CATV4epsilon
IMPACT_ON_IMPORT = YES
COMDYN_MODULE = V4SysCOMD
#
DUMMY_LINK_WITH = CATCdbEntity CATIAMAO CATIAUDB2 \
       V4SysANL V4SysENV V4SysMEM V4SysUTIL V4SysFILE V4SysB V4SysLMCALL \
       CATV4Maths CATV4Geometry JS0CORBA BftierV5 CATMathStream
#
#
OS = COMMON
LINK_WITH = $(DUMMY_LINK_WITH)
SYS_LIBPATH = 
#
OS = aix_a
SYS_LIBPATH = -L/usr/lpp/X11/Motif1.2/lib -L/usr/lpp/X11/lib/R5 -L/usr/lpp/X11/lib
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
#
OS = aix_a64
SYS_LIBPATH = 
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
#
OS = IRIX
LINK_WITH = \
  $(COMDYN_MODULE) \
  $(DUMMY_LINK_WITH)
SYS_LIBS = -lftn
#
OS = Windows_NT
LOCAL_LDFLAGS = \
/EXPORT:overfl
#
OS = intel_a64
SYS_LIBS = libf90.lib
#
OS = HP-UX
SYS_INCPATH =
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90
#endif                
#
OS = hpux_b64 
SYS_INCPATH =
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90 -lcps 
#endif                
#
OS = SunOS
SYS_INCPATH = 
SYS_LIBS = -lF77
SYS_LIBPATH =
