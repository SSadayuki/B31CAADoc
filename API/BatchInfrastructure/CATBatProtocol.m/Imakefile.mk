#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#

LINK_WITH=  JS0GROUP JS0CRYPTEXIT SystemUUID CATXMLParserItf CATComServices CATBatchUtils CATSysMultiThreading CATLic CATBatCAAGrid

OS = SunOS
SYS_LIBS = -lsocket

OS = HP-UX
CXX_EXCEPTION = 


OS = Windows_NT
SYS_LIBS = wsock32.lib

OS=IRIX
CXX_EXCEPTION=

############################################################################



