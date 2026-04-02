BUILT_OBJECT_TYPE = NONE

CXX_EXCEPTION =

#if os AIX
  LOCAL_FFLAGS = -I$(FWPATH)\ProtectedInterfaces
  SYS_LIBS = -lxlf -lxlf90 -lxlfpad
#endif
