#MF1: Previous Imakefile.mk commented
#BUILT_OBJECT_TYPE = CORBA
#
#LINK_WITH = CATCsbCORBA ECB0CORBA
#
#CORBA_BUILD_TYPE = SHAREDLIBRARY
#
#CORBA_CPP_CS = SERVER CLIENT
#
#CORBA_CPP_OPTS = -A -B
#
#SYS_LIBS = -lorbix
#
#OS = AIX
#BUILD=NO 
##if os aix_a64
#LOCAL_CCFLAGS=-DSIXTY_FOUR_BIT_LONGS
##endif
#LOCAL_LDFLAGS = -brtl
#
#
#OS = Windows_NT
#BUILD=NO 
#SYS_LIBS = ITMI.lib
#LOCAL_CCFLAGS = -DORBIX_DLL -DWIN32_LEAN_AND_MEAN -DWIN32 -DIT_EX_MACROS
#------------------------------------------------------------------------------------
BUILT_OBJECT_TYPE = SHARED LIBRARY

ENOVIAPlugInCORBAImpl_LINK_WITH = CATCsbCORBA ECB0CORBA

CATCsbCORBA = SERVER 
ECB0CORBA = CLIENT

LINK_WITH = $(ENOVIAPlugInCORBAImpl_LINK_WITH) orbix                     
                                                                      
OS = AIX                                                              
LOCAL_CCFLAGS = -D_AIX_SOURCE -DNATIVE_EXCEPTION  -DFOR_CATIA_V4
LOCAL_LDFLAGS = -brtl
CXX_EXCEPTION =                                                       
SYS_INCPATH =                                                         
SYS_LIBPATH =                                                         

OS = Windows_NT      
LINK_WITH = $(ENOVIAPlugInCORBAImpl_LINK_WITH) ITMi                          
SYS_LIBS = Wsock32.LIB advapi32.lib user32.lib                        
LOCAL_CCFLAGS = -D_WINDOWS_SOURCE -DORBIX_DLL -DNATIVE_EXCEPTION     -DFOR_CATIA_V4  


