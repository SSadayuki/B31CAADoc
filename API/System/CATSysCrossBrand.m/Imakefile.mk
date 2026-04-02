#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
OS = COMMON
BUILD=NO
ENCODING_KEY = System
#CXX_NOPERMISSIVE = YES

OS = Windows_NT

BUILD=YES
SYS_LIBS = vfw32.lib Imm32.lib user32.lib crypt32.lib wintrust.lib psapi.lib iphlpapi.lib ws2_32.lib ole32.lib  gdi32.lib gdiplus.lib 
LINK_WITH = CATIASF JS0CATLM JS0MT




