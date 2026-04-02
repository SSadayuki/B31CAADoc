#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATVisUUID \
FunctionEditorInterfacesUUID \
KinematicsInterfacesUUID \
ObjectModelerBaseUUID \
SimulationInterfacesUUID \
InteractiveInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = SimulationV4CPP 
#
###########  AECInterfaces \

DUMMY_LINK_WITH   =  JS0GROUP   \
  CATInfInterfaces \
  KinematicsItf \
  SimulationItf \
  FunctionEditorItfCPP \
  MecModItfCPP \
  CATObjectModelerBase \
  CATObjectSpecsModeler \
  CATGeometricObjects \
  CATGeometricOperators \
  CATNewTopologicalObjects \
  CATMechanicalModeler \
  CATVisualization CATViz \
  CATMathematics \
  CATObjectModelerCATIA \
  CATProductStructure1 \
  CATCdbEntity \
  V4SysALL \
  CATV4epsilon \
  CATSimulationBase \
  CATApplicationFrame \
  CDMAServer \
  CK0FEAT \
  SimulationV4FTN CATNavigatorItf\
  CATInteractiveInterfaces  CATDMUBase CATSketcherInterfaces
#
COMDYN_MODULE     = V4SysCOMD
#
OS = COMMON
LINK_WITH=$(LINK_WITH_FOR_IID)  $(DUMMY_LINK_WITH)
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
LINK_WITH=$(LINK_WITH_FOR_IID)  $(COMDYN_MODULE) $(DUMMY_LINK_WITH)
SYS_LIBS = -lftn

OS = SunOS
SYS_INCPATH = 
SYS_LIBS = -lF77
SYS_LIBPATH =

OS = Windows_NT
#
