# COPYRIGHT DASSAULT SYSTEMES 2005
#
# LOAD MODULE for CommonSetupDLLA.m
# Used by VaultClientSetup, VaultClientSetupB, VaultSetup, VaultServerSetupB, PLMDBSetup, PLMDBSetupB,
#         PLMWGSetup, PLMVaultSetup, PLMCoreSetup, PLMClientSetup
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = JS0GROUP CXINSTUTIL JS0INITENV

OS = Windows_NT
SYS_LIBS = Ws2_32.lib

OS = Linux
SYS_LIBS = -lcrypt
