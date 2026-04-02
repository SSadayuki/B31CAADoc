# COPYRIGHT DASSAULT SYSTEMES 2006
#======================================================================
# Imakefile for module CATClnScene
#======================================================================
# CREATED  07 Jun 2006 BY YRX
# MODIFIED xx xxx xxxx BY xxx
#          modification reason   
#======================================================================
#
# SHARED LIBRARY


BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=  JS0CORBA              \
            JS0FM                 \
            AD0XXBAS              \
            VE0BASE               \
            CD0FRAME              \
            DI0PANV2              \
            YN000MFL              \
            AS0STARTUP            \
            CATObjectSpecsModeler \
            CATObjectModelerCATIA \
            ProductStructureItf   \
            DataAdmin             \
            CATClnBase            \
            CATClnSpecs			  \
			Scene


