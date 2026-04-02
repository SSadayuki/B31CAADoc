#@ autoformat 06:08:31
# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module CATCamItf.m 
#======================================================================
#
#  Jun 2003  Creation: STX
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
 

LINK_WITH= \
    CATApplicationFrame            \ # ApplicationFrame               CATApplicationFrame
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    JS0CORBA                       \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
#


INCLUDED_MODULES = \
                  CATCamItfCPP
