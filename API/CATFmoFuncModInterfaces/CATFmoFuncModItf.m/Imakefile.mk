#@ autoformat 11:03:03
# COPYRIGHT DASSAULT SYSTEMES 2007
#======================================================================
# Imakefile for module CATFmoFuncModItf.m 
#======================================================================
# Fev 2007  Creation
#======================================================================
#
# SHARED LIBRARY 
#
#======================================================================
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

INCLUDED_MODULES = CATFmoFuncModItfCPP

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATFmoFuncModInterfacesUUID    \ # CATFmoFuncModInterfaces        CATFmoFuncModInterfacesUUID
    JS0CORBA                       \ # System                         JS0GROUP
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
#
#else
#if defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
#
#endif
#endif
