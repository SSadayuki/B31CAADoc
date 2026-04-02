#@ autoformat 12:03:19
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
    FreeStyleShapeInterfaceUUID    \ # FreeStyleShapeInterface        FreeStyleShapeInterfaceUUID
#
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#

LINK_WITH= \
    $(LINK_WITH_FOR_IID)           \
    ApplicationFrame               \ # ApplicationFrame               CATApplicationFrame
    CATConstraintModelerItf        \ # ConstraintModelerInterfaces    CATConstraintModelerItf
    FreeStyleShapeInterfaceUUID    \ # FreeStyleShapeInterface        FreeStyleShapeInterfaceUUID
    JS0CORBA                       \ # System                         JS0GROUP
    CATVisualization               \ # Visualization                  CATVisualization
#

OS = AIX
SYS_INCPATH = 
SYS_LIBS = 
SYS_LIBPATH = 

OS = HP-UX
SYS_INCPATH =  
SYS_LIBS = 
SYS_LIBPATH =

OS = IRIX
SYS_INCPATH = 
SYS_LIBS = 
SYS_LIBPATH =
