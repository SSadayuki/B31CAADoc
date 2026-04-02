#======================================================================
# Imakefile for module CATPrtTRCrossHighlight.m
#======================================================================
#
#  Sept 2012  Creation: tzh
#======================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY


LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=


LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
	JS0SCBAK                       \
	JS0CORBA                       \
	JS0FM                          \



#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
CATTPSItfCPPBase               \ # CATTPSInterfacesBase           CATTPSItfCPPBase
CATAfrFoundation               \ # AfrFoundation                  CATAfrFoundation
CATVisController               \ # VisualizationController        CATVisController
#
#else
#if defined(CATIAV5R21)

LINK_WITH_V5_ONLY= \
CATTPSItfCPP               \ # CATTPSInterfaces           CATTPSItfCPPBase
CD0WIN                     \ # ApplicationFrame           CD0WIN
CATVisualization           \ # Visualization              CATVisualization  
                            
#
#endif
#endif
