#
# very strongly inspired by SRU-designed Imakefile.mk 
#
#
BUILT_OBJECT_TYPE = SHARED LIBRARY                                 

ENOVIAPlugCorba_LINK_WITH =     AD0XXBAS ENOVIAPlugInCORBA \
                                AC0XXLNK JS03TRA JS0CORBA CATCsbCORBA \
                                CATCrmOrbInteractiveServices \
                                CATCrmMarkers \
                                PPRDCCServices \
                                CATSysCommunication NS0S7TIM ENOVIAPlugIn

LINK_WITH = $(ENOVIAPlugCorba_LINK_WITH) orbix

# Mode SERVER sinon KO sur AIX/HP - JSY / 12/10/2000
# Forcement tout en mode server   - JSY / 18/12/2000
ENOVIAPlugInCORBA = SERVER
CATCsbCORBA = SERVER  
CATCrmOrbInteractiveServices = SERVER  

OS = AIX                                                             
LOCAL_CCFLAGS = -D_AIX_SOURCE -DNATIVE_EXCEPTION  -DENOVIA_PLUG_TRACE
LOCAL_LDFLAGS = -brtl
CXX_EXCEPTION =
SYS_INCPATH =
SYS_LIBPATH =
#LOCAL_LDFLAGS = -bnoquiet
                                                                     
OS = HP-UX                                                           
LOCAL_CCFLAGS = -D_HPUX_SOURCE -D_REENTRANT -DNATIVE_EXCEPTION -DENOVIA_PLUG_TRACE
CXX_EXCEPTION =
SYS_INCPATH =                                                        
SYS_LIBPATH =                                                        
                                                                     
OS = IRIX                                                            
LOCAL_CCFLAGS = -D_IRIX_SOURCE -DNATIVE_EXCEPTION -DENOVIA_PLUG_TRACE

CXX_EXCEPTION=
LOCAL_LDFLAGS = 
SYS_INCPATH = 
SYS_LIBPATH =
#SYS_LIBS =  -lCsup
                                                                     
OS = SunOS                                                           
LOCAL_CCFLAGS = -D_SUNOS_SOURCE -DNATIVE_EXCEPTION -DENOVIA_PLUG_TRACE
CXX_EXCEPTION =
SYS_INCPATH =                                                        
SYS_LIBPATH =                                                        

OS = Windows_NT
LINK_WITH = $(ENOVIAPlugCorba_LINK_WITH) ITMi
# CATCsbCORBA = CLIENT  
# ENOVIAPlugInCORBA = CLIENT
SYS_LIBS = Wsock32.LIB advapi32.lib user32.lib
LOCAL_CCFLAGS = -DORBIX_DLL -DWIN32_LEAN_AND_MEAN -DWIN32 -DIT_EX_MACROS -D_WINDOWS_SOURCE -DNATIVE_EXCEPTION -DENOVIA_PLUG_TRACE
CXX_EXCEPTION =


OS = alpha_a
BUILD = NO


#OS = win_a
#DELIVERABLE=NO











