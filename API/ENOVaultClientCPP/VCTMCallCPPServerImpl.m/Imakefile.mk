
BUILT_OBJECT_TYPE = SHARED LIBRARY 

VAULTCLIENT_LINK_WITH = VaultCPPCORBA       \
                        JS0GROUP            \
                        ENOVIVaultClientAPP \
                        VaultClientRMI      \
                        VaultClientServices


LINK_WITH = $(VAULTCLIENT_LINK_WITH)  orbix

VaultCPPCORBA = SERVER
                                                           
OS = AIX                                                             
LOCAL_CCFLAGS = -D_AIX_SOURCE -DNATIVE_EXCEPTION -D_AIX_PTHREADS_D7
LOCAL_LDFLAGS = -brtl
CXX_EXCEPTION =
SYS_LIBS = 
SYS_INCPATH =
SYS_LIBPATH =
# shared lib multithreadee ORBIXS
                                                                     
OS = HP-UX                                                           
LOCAL_CCFLAGS = -D_HPUX_SOURCE -D_REENTRANT -DNATIVE_EXCEPTION
#LOCAL_CCFLAGS = -D_HPUX_SOURCE -D_CPP_IOSTREAMS -D_REENTRANT -DNATIVE_EXCEPTION 
#SYS_LIBS = -lcma 
SYS_LIBS = 
SYS_INCPATH =                                                        
SYS_LIBPATH =                                                        
CXX_EXCEPTION=
# shared lib non multithreadee ORBIXS
                                                                     
OS = IRIX                                                            
LOCAL_CCFLAGS = -D_IRIX_SOURCE -DNATIVE_EXCEPTION
CXX_EXCEPTION=
LOCAL_LDFLAGS = 
SYS_INCPATH = 
SYS_LIBPATH =
#shared lib non multithreadee ORBIXS
SYS_LIBS =  -lCsup 
                                                                     
OS = SunOS                                                           
LOCAL_CCFLAGS = -D_SUNOS_SOURCE -DNATIVE_EXCEPTION
CXX_EXCEPTION = 
SYS_INCPATH = 
SH_SYS_LIBPATH = $(SYS_LIBPATH)
SYS_LIBPATH =
# shared lib non multithreadee
SYS_LIBS = 
SH_SYS_LIBS = $(SYS_LIBS)


OS = Windows_NT
LINK_WITH = $(VAULTCLIENT_LINK_WITH) 
SYS_LIBS = Wsock32.LIB advapi32.lib user32.lib ITMI.lib
LOCAL_CCFLAGS = -D_WINDOWS_SOURCE -DORBIX_DLL -DNATIVE_EXCEPTION

OS = win_b64
LINK_WITH = $(VAULTCLIENT_LINK_WITH) ITMi
LOCAL_CCFLAGS = -D_WINDOWS_SOURCE -DORBIX_DLL
CXX_EXCEPTION =
#BUILD=NO

OS = aix_a64
#BUILD = NO

OS = irix_a64
BUILD = NO
