BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH01 = JS0GROUP NS0S3STR \
              JS0MT JS0FM       \
              ENOVIAPlugCorba   \
              XMLParserItf
              
LINK_WITH = $(LINK_WITH01)
    
OS=AIX
SYS_LIBS= -lpthread

OS=Windows_NT
#if (defined MK_MSCVER) && (MK_MSCVER < 1900)
   SYS_LIBS= ole32.lib rpcrt4.lib ws2_32.lib Wininet.lib atl.lib
#else
   SYS_LIBS= ole32.lib rpcrt4.lib ws2_32.lib Wininet.lib
#endif
