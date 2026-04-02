# 
IMPACT_ON_IMPORT = YES
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
COMDYN_MODULE = V4SysCOMD
#
INCLUDED_MODULES = CATAIXTools CATAIXEngine CATUNITools CATUNITEngine
#
DUMMY_LINK_WITH = CATIAEntity CATIAMAO  CATIAUDB2 \
  V4SysLMCALL V4SysANL V4SysENV V4SysMEM V4SysUTIL V4SysFILE V4SysB \
  JS0CORBA IDV4ANN IDV4STD CATV4Geometry CATV4epsilon\
  CATV4DataAdmin CATV4ManufacturingBase 
#
#
OS = COMMON
LINK_WITH = $(DUMMY_LINK_WITH)
SYS_LIBPATH = 

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = IRIX
LINK_WITH = $(COMDYN_MODULE) $(DUMMY_LINK_WITH)
SYS_LIBS = -lftn

OS = intel_a
#if (defined MK_MSCVER) && (MK_MSCVER < 1400)
SYS_LIBS = DFORDLL.LIB
#endif

OS = intel_a64

OS = HP-UX
#if os hpux_a
# libf or libcl is for HP 10.20 libF90 for HP 11
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90
#endif

OS = hpux_b64 
#if os hpux_a
# libf or libcl is for HP 10.20 libF90 for HP 11
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90 -lcps 
#endif

OS = SunOS
SYS_LIBS = -lF77
SYS_LIBPATH =
