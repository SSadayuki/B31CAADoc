#@ autoformat 07:11:19
# COPYRIGHT DASSAULT SYSTEMES 2004
#======================================================================
# Imakefile for module CATTerTechnoResultToPropagate.m
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
 
LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
    CATTerTechnoResultInterfacesUUID \ # CATTechResultInterfaces        CATTerTechnoResultInterfacesUUID
    CATTerTechnoResultItf          \ # CATTechResultInterfaces        CATTerTechnoResultItf
    CATTerTechnoResultItfCPP       \ # CATTechResultInterfaces        CATTerTechnoResultItf
	CATTerTechnoResultServices     \ # CATTechResult                  CATTerTechnoResultServices
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    GN0GRAPH                       \ # GenericNaming                  CATGngGraph
    CATMathematics                 \ # Mathematics                    CATMathematics
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMechanicalModeler           \ # MechanicalModeler              CATMechanicalModeler
    CATMechanicalModelerLive       \ # MechanicalModelerLive          CATMechanicalModelerLive
    CATObjectModelerBase           \ # ObjectModelerBase              CATObjectModelerBase
    ObjectModelerSystem            \ # ObjectModelerSystem            ObjectModelerSystem
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    CATPartInterfaces              \ # PartInterfaces                 CATPartInterfaces
    JS0FM                          \ # System                         JS0FM
    JS0CORBA                       \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
    SystemUUID                     \ # System                         SystemUUID
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
