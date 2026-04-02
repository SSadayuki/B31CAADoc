BUILT_OBJECT_TYPE = LOAD MODULE
ENCODING_KEY = System
LINK_WITH = LCCArch DSLSArch SSLArch 

OS = Linux
SYS_LIBS= -lpthread

OS = SunOS
SYS_LIBS= -lpthread -lsocket -lnsl
SUNMATH_LIBS=
FORTRAN_LIBS=

OS = Darwin
SYS_LIBS=-framework CoreServices -framework CoreFoundation -framework IOKit \
 -framework SecurityFoundation -framework Security -framework SecurityInterface -framework AppKit \
 -framework Foundation

OS= iOS
BUILD= NO


OS = Windows_NT
SYS_LIBS =  wsock32.lib advapi32.lib dnsapi.lib wininet.lib Ws2_32.lib Shlwapi.lib Secur32.lib Netapi32.lib
DESCRIPTION = "DSLS Check Tool"
