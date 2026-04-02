# 
BUILT_OBJECT_TYPE = SHARED LIBRARY

COMDYN_MODULE = V4SysCOMD

IMPACT_ON_IMPORT=YES

OS = COMMON
LINK_WITH = CATCdbEntity \
  CATV4epsilon \
  CATGeomEva \
  CATV4Maths \
  BftierV5 \
  V4SysB \
  V4SysANL \
  V4SysUTIL \
  V4SysMEM \
  V4SysENV \
  CATIAMAO \
  CATIAUDB2 \
  CATMathematics \
            CATMathStream

INCLUDED_MODULES = V4Geom1 V4Geom2 V4Geom3 V4Geom4 \
                   V4Geom5 V4Geom6 V4Geom7 V4Geom8 \
                   V4Geom9 V4GeomPRM \
                   V4MSK

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn

OS = Windows_NT
LOCAL_LDFLAGS = \
/EXPORT:uvare \
/EXPORT:appor

OS = HP-UX
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90
#endif                

OS = hpux_b64
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90 -lcps
#endif                

OS = SunOS
SYS_LIBS = -lF77
