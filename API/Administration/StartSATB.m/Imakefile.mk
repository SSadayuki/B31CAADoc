BUILT_OBJECT_TYPE = LOAD MODULE


SIGNATURE = YES
DESCRIPTION = "V5 Dassault Systemes installer"
SRC_LINK_WITH = StartCore
STATIC_LIBS = yes
CXX_EXCEPTION=

#if os Windows_NT
 BUILD=YES
 LD_ADDED_MANIFEST = CATAppSupportWindowsOS.manifest
#else
 BUILD = NO
#endif
