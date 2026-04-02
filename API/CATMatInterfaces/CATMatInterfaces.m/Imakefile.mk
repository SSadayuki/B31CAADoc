#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATMatInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATMatInterfaces
#======================================================================
# CREATED  15 Feb 1999 BY EGO
# MODIFIED xx xxx xxxx BY xxx
#          modification reason   
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  CATApplicationFrame \
            CATObjectModelerBase \
            JS0GROUP \
            CATVisualization \
            CATInfInterfaces

INCLUDED_MODULES = CATMatItfCPP \
                   CATMatProIDL \
                   CATMatPubIDL

