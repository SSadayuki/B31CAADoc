#
BUILT_OBJECT_TYPE = NONE
#

#
# RKN 27/02/2013
# Vectorisation of the fortran compiler has been desactivated
#

###########  AECInterfaces \

DUMMY_LINK_WITH   = \
	  AC0SPBAS \
	  FunctionEditorItfCPP \
	  AD0XXBAS \
	  JS0GROUP \
	  VE0BASE \
	  VE0MDL \
	  YN000MAT \
	  YN000MFL \
      AC0CATPL \
      AC0SPDOC \
      AC0XXLNK \
      AD0XXBAS \
      AS0STARTUP \
      CATCdbEntity \
      CATV4epsilon \
      CATV4Geometry \
      CATV4Maths \
      CATV4Procedural \
      CATV4Topology \
      CD0WIN \
      CDMAdoc \
      IAODependancies \
      SimulationBase \
      DNBSimulationBaseLegacy \
      KinematicsItf \
      SimulationItf \
      PR1BASE \
      V4SysALL \
      V4SysANL \
      V4SysB \
      V4SysENV \
      V4SysFILE \
      V4SysMEM \
      V4SysUTIL \
      YP00IMPL 
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
SYS_LIBS = -lf

OS = IRIX
LINK_WITH = $(COMDYN_MODULE) $(DUMMY_LINK_WITH)
SYS_LIBS = -lftn

OS = SunOS
#ifdef CATIAV5R9
OPTIMIZATION_CPP = -xO4
#endif
SYS_INCPATH = 
SYS_LIBS = -lF77
SYS_LIBPATH =

OS = Windows_NT
# Vectorisation of the fortran compiler has been desactivated
LOCAL_FFLAGS= /Qvec-

#
