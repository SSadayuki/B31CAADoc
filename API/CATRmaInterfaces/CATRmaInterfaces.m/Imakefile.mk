#@ autoformat 06:08:31
#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
    CATRmaInterfacesUUID           \ # CATRmaInterfaces               CATRmaInterfacesUUID
#
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATRmaInterfaces
#======================================================================
# CREATED  15 Feb 1999 BY EGO
# MODIFIED xx xxx xxxx BY xxx
#          modification reason   
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= \
    $(LINK_WITH_FOR_IID)           \
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    JS0GROUP                       \ # System                         JS0GROUP
    CATVisualization               \ # Visualization                  CATVisualization
#

INCLUDED_MODULES = CATRmaItfCPP \
                   CATRmaProIDL \
                   CATRmaPubIDL


