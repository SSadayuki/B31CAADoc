#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
ComponentsCatalogsUUID
#else
LINK_WITH_FOR_IID =
#endif
#======================================================================
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATCuiBrowser.m
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH=$(LINK_WITH_FOR_IID)  VE0BASE VE0GRPH2 \
        CATIAApplicationFrame CATInteractiveInterfaces \
        CATObjectModelerBase CATObjectSpecsModeler \
        JS0GROUP JS0CORBA JS0SCBAK JS0STR JS0FM NS0S3STR \
        DI0PANV2 CD0FRAME CD0WIN CO0LSTST CO0LSTPV CO0RCINT \
        CATCclInterfaces CATComponentsCatalogs CATCuiOptions CATCuiCommands \
        CP0SPEC AC0SPBAS AC0SPCHECK AC0SPDOC AC0ITEMS \
        KnowledgeItf CATViz CATMathStream \
        YN000MFL \                                #Mathematics
        CD0AUTOSTART \                            #replay des macros
        CK0FEAT CK0PARAM CATPDMBaseEnoviaV5CAA 

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
