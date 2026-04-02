#@ autoformat 10:02:05
# COPYRIGHT DASSAULT SYSTEMES 2008
#======================================================================
# Imakefile for module CATGSMOperatorsInterfaces.m
#======================================================================
#
#  Oct 2008              Creation: COR
#======================================================================
#
#ifdef LOCAL_DEFINITION_FOR_IID
   LINK_WITH_FOR_IID = \
    CATGSMOperatorsInterfacesUUID  \ # CATGSMOperatorsInterfaces      CATGSMOperatorsInterfacesUUID
#
#else
   LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=

LINK_WITH= \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \    
    JS0GROUP                       \ # System                         JS0GROUP
#
# System dependant variables
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT


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
