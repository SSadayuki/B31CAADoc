#
# SHARED LIBRARY for ENOVIA MultiCAD PlugIn
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
ENOVIAPlugIn_LINK_WITH =	JS03TRA ENOVIAPlugInCORBA ENOVIAPlugCorba \
                                AD0XXBAS ECB0CORBA \
                                ENOVIAPlugModeler \
                                CATSysCommunication \
                                AC0XXLNK JS0CORBA ENOVIVaultClientAPP JS0FM \
                                VVSNetBase VVSStreamConsumer VVSUtils VVSCoreStructure VVSUrlUtils \
                                CATCsbCORBA CATCrmOrbInteractiveServices \
                                Headers ENOVIAPlugInSDAM \
								VCTMCallCPPClientImpl \
                                JS0ZLIB 
#
LINK_WITH = $(ENOVIAPlugIn_LINK_WITH) orbix
# JSY 18/12/00 : mode server car ENOVIAPlugCorba tire sur ces libs en 
#                mode server et on ne melange pas les genres ....
ENOVIAPlugInCORBA = SERVER
ECB0CORBA = SERVER
CATCsbCORBA  =  SERVER 

#
OS = AIX
#ifdef MK_ORBIXCPP33
LOCAL_CCFLAGS = -D_AIX_SOURCE -DNATIVE_EXCEPTION
CXX_EXCEPTION=
#endif
LOCAL_LDFLAGS = -brtl
#
OS = HP-UX
#ifdef MK_ORBIXCPP33
LOCAL_CCFLAGS = -D_HPUX_SOURCE -DNATIVE_EXCEPTION
CXX_EXCEPTION=
#endif
#
OS = IRIX
#
OS = SunOS
#ifdef MK_ORBIXCPP33
LOCAL_CCFLAGS = -D_SUNOS_SOURCE -DNATIVE_EXCEPTION
CXX_EXCEPTION=
#endif
#
OS = Windows_NT
LINK_WITH = $(ENOVIAPlugIn_LINK_WITH) ITMi
# ENOVIAPlugInCORBA = CLIENT
# ECB0CORBA = CLIENT
SYS_LIBS = Wsock32.LIB advapi32.lib user32.lib
LOCAL_CCFLAGS = -DORBIX_DLL -DWIN32_LEAN_AND_MEAN -DWIN32 -DIT_EX_MACROS -D_WINDOWS_SOURCE -DNATIVE_EXCEPTION
CXX_EXCEPTION =

#### waiting for pre-requisites build on alpha and win98 (CORBAServerBase)
####  not planned for V5R4
OS = alpha_a
BUILD = NO


##OS = win_a
##DELIVERABLE=NO
