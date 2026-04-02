BUILT_OBJECT_TYPE= SHARED LIBRARY

LINK_WITH= JS0GROUP\
		   VE0GROUP\
		   CATObjectModelerBase\
           CATDlgStandard         #For migration CATIUserSettings interface (drn 7/10/00)

OS = Windows_NT
LOCAL_CCFLAGS=-FR
