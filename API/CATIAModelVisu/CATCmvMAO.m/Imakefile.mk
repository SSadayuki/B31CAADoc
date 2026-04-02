#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAModelVisuUUID
#else
LINK_WITH_FOR_IID =
#endif
# 
# 
# 
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = VI0MAO
COMDYN_MODULE = V4SysCOMD

LINK_WITH=$(LINK_WITH_FOR_IID)  \
AC0CATPL \
NS0S3STR \
JS0CORBA \
JS0SCBAK \
VI0GEVUE \
CATIAUDB2 \
CATIAEntity \
CATAIXServices \
V4Geom5 \
V4Maths1 \
V4Maths2 \
V4SysMEM \
V4SysUTIL \
V4Topo0 \
VE0BASE \
CATObjectModelerBase \
CATViz

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
SYS_LIBS = -lftn

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

OS = Windows_NT
