#@ autoformat 06:08:31
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
    CATRmaInterfacesUUID           \ # CATRmaInterfaces               CATRmaInterfacesUUID
    CATRdgInterfacesUUID           \ # CATRdgInterfaces               CATRdgInterfacesUUID
#
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATRdgItf
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
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    CATRmaInterfaces               \ # CATRmaInterfaces               CATRmaInterfaces
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
#
 
INCLUDED_MODULES = CATRdgItfCPP \
                   CATRdgPubIDL

