#@ autoformat 06:08:31
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
    CATRscInterfacesUUID           \ # CATRscInterfaces               CATRscInterfacesUUID
#
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATRscItf
#======================================================================
# CREATED  01 Feb 2000 BY EGO
# MODIFIED xx xxx xxxx BY xxx
#          modification reason
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
 
LINK_WITH = \
    $(LINK_WITH_FOR_IID)           \
    CATApplicationFrame            \ # ApplicationFrame               CATApplicationFrame
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    JS0CORBA                       \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
#
 
INCLUDED_MODULES = CATRscItfCPP \
                   CATRscProIDL \
                   CATRscPubIDL

