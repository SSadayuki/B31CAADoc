# 
BUILT_OBJECT_TYPE = SHARED LIBRARY

COMDYN_MODULE = V4SysCOMD

LINK_WITH = \
  BftierV5 \
  V4SysB \
  V4SysUTIL \
  V4SysMEM \
  V4SysENV \
  CATCdbEntity \
  JS0CORBA \
  CATIAUDB2 \
  CATIAMAO \
  CATV4epsilon \
  V4SysLMCALL \
  V4SysANL \
  CATV4Maths \
  CATV4Geometry \
  CATGeomEva \
  CATV4Topology \
  CATMathematics \
  CATMathStream \
  JS0FILE
            

INCLUDED_MODULES = V4ComProc V4Intgeo CSGUtilities CATSolPrimUtilities CATTopoloServices \
                   V4Proc2 V4Proc2Debug V4Prochlr V4hlrLink V4Poly 
#
IMPACT_ON_IMPORT=YES

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn

OS = Windows_NT

OS = HP-UX
SYS_INCPATH =
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90
#endif                

OS = hpux_b64 
SYS_INCPATH =
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90 -lcps 
#endif                

OS = SunOS
SYS_INCPATH = 
SYS_LIBS = -lF77 -lM77
SYS_LIBPATH =
