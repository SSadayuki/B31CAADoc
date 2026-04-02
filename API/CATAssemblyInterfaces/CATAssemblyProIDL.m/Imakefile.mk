#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAssemblyInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module CATAssemblyProIDL.m 
# (compilation of protected idl interfaces)
#======================================================================
#
#  Sep 2000  Creation                                        CRX
#======================================================================


BUILT_OBJECT_TYPE=SHARED LIBRARY 
INCLUDED_MODULES=CATAssemblyPubIDL
 
LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP

SOURCES_PATH=ProtectedInterfaces PrivateInterfaces
COMPILATION_IDL=YES

