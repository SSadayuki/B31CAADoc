#@ autoformat 12:03:19
#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = \
    CAAFreeStyleItf                \ # CAAFreeStyleItf                CAAFreeStyleItf
    CATClassACoreInterfacesUUID    \ # CATClassACoreInterfaces        CATClassACoreInterfacesUUID
    JS0CORBA                       \ # System                         JS0GROUP
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

OS= SUN
SYS_INCPATH = 
SYS_LIBS = 
SYS_LIBPATH =
#INSERTION ZONE NOT FOUND, MOVE AND APPEND THIS VARIABLE IN YOUR LINK STATEMENT
#LINK_WITH = ... $(WIZARD_LINK_MODULES) ...
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = \
    CATClassACoreInterfaces        \ # CATClassACoreInterfaces        CATClassACoreInterfaces
    CATClassACoreInterfacesUUID    \ # CATClassACoreInterfaces        CATClassACoreInterfacesUUID
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
#
# END WIZARD EDITION ZONE
