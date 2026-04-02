# 
BUILT_OBJECT_TYPE = SHARED LIBRARY
COMDYN_MODULE = V4SysCOMD

IMPACT_ON_IMPORT=YES

OS = COMMON
LINK_WITH = \
  V4SysB \
  CATObjectModelerBase \
            CATCdbEntity \
  CATV4Maths \
  BftierV5 \
  V4SysUTIL \
  V4SysMEM \
  V4SysENV \
  CO0RCINT \
  CO0LSTPV \
  JS0LIB0 \
  CATV4Geometry \
  CATV4epsilon \
  CATGeomEva \
  AC0CATPL \
  YP00IMPL \
  CATMathematics \
  CATCGMGeoMath \
  CATMathStream

INCLUDED_MODULES = V4Topo0 V4Topo1 V4Topo2 V4Topo3 \
                   V4Topo4 V4Report V4NBooleen V4TopoDebug \
                   V4APS01

#
OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn

OS = Windows_NT

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
SYS_LIBS = -lF77 -lM77
