# 
BUILT_OBJECT_TYPE = SHARED LIBRARY

COMDYN_MODULE = V4SysCOMD

IMPACT_ON_IMPORT=YES
#
OS = COMMON
LINK_WITH = \
  V4SysUTIL \
  V4SysMEM \
  V4SysB \
  V4SysENV \
  CATMathematics \
  CATMathStream
INCLUDED_MODULES = V4Util3 \
                   V4Maths1 V4Maths2 \


OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn

OS = Windows_NT
LOCAL_LDFLAGS = \
/EXPORT:adrarc \
/EXPORT:adrcar \
/EXPORT:cadis \
/EXPORT:cor \
/EXPORT:cor2d \
/EXPORT:cor3d \
/EXPORT:corde2 \
/EXPORT:corde3 \
/EXPORT:darcos \
/EXPORT:darsin \
/EXPORT:deri2d \
/EXPORT:deri3d \
/EXPORT:deriv \
/EXPORT:dersec \
/EXPORT:devor \
/EXPORT:duvet \
/EXPORT:fmat4 \
/EXPORT:fmat6 \
/EXPORT:fmat61 \
/EXPORT:fosfor \
/EXPORT:parbis \
/EXPORT:parvis \
/EXPORT:prosca \
/EXPORT:tamul \
/EXPORT:tenc3d \
/EXPORT:tencol \
/EXPORT:tenl3d \
/EXPORT:tenlig \
/EXPORT:vor \
/EXPORT:xptln \
/EXPORT:ygones \
/EXPORT:ygone2 \
/EXPORT:fmat2 \
/EXPORT:fmat8 \
/EXPORT:fmat81 \
/EXPORT:ipur \
/EXPORT:surf \
/EXPORT:surder \
/EXPORT:surtou \
/EXPORT:surfdv \
/EXPORT:dsurfu

OS = HP-UX
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90
#endif                

OS = HPUX_b64
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90 -lcps
#endif                

OS = SunOS
SYS_LIBS = -lF77 -lM77


