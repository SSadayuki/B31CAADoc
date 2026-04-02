#@ autoformat 06:08:31
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATRscItfCPP
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
    CATIAApplicationFrame          \ # CATIAApplicationFrame          CATIAApplicationFrame
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    JS0GROUP                       \ # System                         JS0GROUP
    CATVisualization               \ # Visualization                  CATVisualization
#

