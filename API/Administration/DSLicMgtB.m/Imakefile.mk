#
# LOAD MODULE
#
BUILT_OBJECT_TYPE=LOAD MODULE
PROGRAM_NAME = DSLicMgtB
LINK_WITH = DI0PANV2 JS0STR JS0FM CATDlgStandard JS0GROUP DSLSArch JS0LIB0 NS0SI18N CATSysMultiThreading JS0ZLIB DSLicMgtDlg SSLArch LCCArch
 
# 
OS = Windows_NT
SYS_LIBS =  wsock32.lib advapi32.lib dnsapi.lib wininet.lib

OS = SunOS
SYS_LIBS= -lpthread -lsocket -lnsl
SUNMATH_LIBS=
FORTRAN_LIBS=

#

OS = Darwin
LOCAL_LDFLAGS = -framework ApplicationServices -framework IOKit

