#@ autoformat 11:03:03
#======================================================================
# Imakefile for module CATTerTechnoResultItf.m 
#======================================================================
#
#  Feb 2004  Creation: juw
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

INCLUDED_MODULES = CATTerTechnoResultItfCPP

LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATTerTechnoResultInterfacesUUID \ # CATTechResultInterfaces        CATTerTechnoResultInterfacesUUID
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    JS0FM                          \ # System                         JS0FM
    JS0GROUP                       \ # System                         JS0GROUP
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
