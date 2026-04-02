#
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES =  SimulationV4FTN


DUMMY_LINK_WITH   = \
  CATV4epsilon \
  CATV4Geometry \
  CATV4Maths \
  CATV4Procedural \
  CATV4Topology \
  V4SysALL \
  CATCdbEntity \
  CATSiqSimulationV4C \
  CATIABaseIAO 
#
COMDYN_MODULE     = V4SysCOMD
#
OS = COMMON
LINK_WITH = $(DUMMY_LINK_WITH)
SYS_LIBPATH = 

OS = AIX
SYS_LIBS = -lxlf -lxlf90 -lxlfpad

OS = HP-UX
SYS_INCPATH =
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90
#endif

OS = hpux_b64 
SYS_INCPATH =
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS = -lF90 -lcps 
#endif

OS = IRIX
LINK_WITH = $(COMDYN_MODULE) $(DUMMY_LINK_WITH)
SYS_LIBS = -lftn

OS = SunOS
SYS_INCPATH = 
SYS_LIBS = -lF77
SYS_LIBPATH =

# Vectorisation of the fortran compiler has been desactivated
OS = Windows_NT
LOCAL_FFLAGS= /Qvec-

#
