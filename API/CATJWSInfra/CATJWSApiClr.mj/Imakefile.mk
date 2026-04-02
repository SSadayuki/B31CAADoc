# COPYRIGHT DASSAULT SYSTEMES 2004
#======================================================================
# Imakefile for module CATJWSInfraClr.mj
#======================================================================

BUILT_OBJECT_TYPE=CSHARP

LINK_WITH = CATJSystem CATJWSIType CATJWSInfra CATJWSInfraImpl CATJWSISoap

LOCAL_CSHARP_FLAGS= /r:"vjslib.dll"

#OS = win_b64
# The LINK_WITH modules require J# to build, but
# J# is currently not available on Windows XP 64-bit

BUILD=NO

