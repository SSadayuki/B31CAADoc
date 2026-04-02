#
# LOAD MODULE
#
#
# LOAD MODULE
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = DI0PANV2 JS0STR JS0FM JS0GROUP CATDlgStandard JS0ZLIB LCCArch DSLSArch SSLArch
#      
# CATAfrItf ObjectModelerSystem CATAfrFoundation #\

OS = Windows_NT
#LOCAL_CCFLAGS=-D__JS0LCC
SYS_LIBS =  wsock32.lib advapi32.lib dnsapi.lib wininet.lib
LOCAL_LDFLAGS = /NODEFAULTLIB:msvcirt.lib /NODEFAULTLIB:libcmt.lib 


#LINK_WITH =  DI0PANV2 JS0STR JS0FM  JS0GROUP CATDlgStandard  JS0DSLIC JS0DSLUTILS JS0ZLIB JS0MT ObjectModelerSystem CATAfrFoundation SystemUUID LCCArch HTTPArch DSLSArch SSLArch #\
#Logon Matrix One V6   JS0LCC         ObjectModelerSystem CATAfrFoundation



OS = Darwin
SYS_LIBS=-framework CoreServices -framework CoreFoundation -framework IOKit

