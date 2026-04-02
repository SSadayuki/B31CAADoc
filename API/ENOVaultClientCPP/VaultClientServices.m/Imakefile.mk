#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = 
#else
LINK_WITH_FOR_IID =
#endif

BUILT_OBJECT_TYPE = SHARED LIBRARY 

                                                                     
OS = AIX                                                             
LINK_WITH= ENOVIVaultClientAPP JS0GROUP XMLUtils xmlxerces xmlicuuc VaultClientRMI
## xerces-c_1 icuuclib xerces-c1_0 icu-uc
LOCAL_CCFLAGS = -D_AIX_SOURCE -DNATIVE_EXCEPTION -D_AIX_PTHREADS_D7
CXX_EXCEPTION =
SYS_INCPATH =
SYS_LIBPATH =
# shared lib multithreadee ORBIXS
                                                                     
OS = HP-UX                                                           
LINK_WITH= ENOVIVaultClientAPP JS0GROUP XMLUtils xmlxerces xmlicuuc VaultClientRMI
## xerces-c_1 icuuclib xerces-c1_0 icu-uc
LOCAL_CCFLAGS = -D_HPUX_SOURCE -D_REENTRANT -DNATIVE_EXCEPTION
#LOCAL_CCFLAGS = -D_HPUX_SOURCE -D_CPP_IOSTREAMS -D_REENTRANT -DNATIVE_EXCEPTION 
#SYS_LIBS = -lcma 
SYS_INCPATH =                                                        
SYS_LIBPATH =                                                        
CXX_EXCEPTION=
# shared lib non multithreadee ORBIXS
                                                                     
OS = IRIX                                                            
LOCAL_CCFLAGS= -DIRIX
CXX_EXCEPTION=
LOCAL_LDFLAGS = -v
CXX_TEMPLATE_INC    = -auto_include
CXX_TEMPLATE_PRELK  = -prelink
CXX_TEMPLATE_INST   = -ptused
LINK_WITH= ENOVIVaultClientAPP JS0GROUP XMLUtils xmlxerces xmlicuuc VaultClientRMI
## xerces-c_1 icuuclib xerces-c1_0 icu-uc
LOCAL_CCFLAGS = -DIRIX -D_IRIX_SOURCE -DNATIVE_EXCEPTION
SYS_INCPATH = 
SYS_LIBPATH =
#shared lib non multithreadee ORBIXS
SYS_LIBS =  -lCsup
                                                                     
OS = SunOS                                                           
LINK_WITH= ENOVIVaultClientAPP JS0GROUP XMLUtils xmlxerces xmlicuuc VaultClientRMI
## xerces-c_1 icuuclib xerces-c1_0 icu-uc
LOCAL_CCFLAGS = -D_SUNOS_SOURCE -DNATIVE_EXCEPTION
CXX_EXCEPTION = 
SYS_INCPATH = 
SH_SYS_LIBPATH = $(SYS_LIBPATH)
SYS_LIBPATH =
# shared lib non multithreadee
SYS_LIBS =
SH_SYS_LIBS = $(SYS_LIBS)


OS = Windows_NT
LOCAL_CCFLAGS= -GX
LINK_WITH = ENOVIVaultClientAPP JS0GROUP XMLUtils xmlxerces xmlicuuc VaultClientRMI ITMi 
## xerces-c_1 icuuclib
SYS_LIBS = Wsock32.LIB advapi32.lib user32.lib 
##xerces-c_1.lib icuuclib.lib
LOCAL_CCFLAGS = -D_WINDOWS_SOURCE -DORBIX_DLL -DNATIVE_EXCEPTION

OS = win_b64
LINK_WITH = ENOVIVaultClientAPP JS0GROUP XMLUtils xmlxerces xmlicuuc VaultClientRMI ITMi
LOCAL_CCFLAGS = -D_WINDOWS_SOURCE -DORBIX_DLL
CXX_EXCEPTION =
#BUILD=NO

OS = aix_a64
#BUILD=NO

OS = irix_a64
BUILD=NO
