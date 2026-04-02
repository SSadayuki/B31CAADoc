#@ autoformat 06:08:31
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATRdgItfCPP
#======================================================================
# CREATED  15 Feb 1999 BY EGO
# MODIFIED xx xxx xxxx BY xxx
#          modification reason   
#======================================================================
#
# NO BUILD
#
BUILT_OBJECT_TYPE=NONE

LINK_WITH = \
    CATApplicationFrame            \ # ApplicationFrame               CATApplicationFrame
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
#

