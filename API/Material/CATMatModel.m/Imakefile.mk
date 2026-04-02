#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATIAApplicationFrameUUID \
CATMatInterfacesUUID \
CATMmiUUID \
FileMenuUUID \
KnowledgeInterfacesUUID \
LiteralFeaturesUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATMatModel
#======================================================================
# CREATED  15 Feb 1999 BY EGO
# MODIFIED xx xxx xxxx BY xxx
#          modification reason   
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY


LINK_WITH=$(LINK_WITH_FOR_IID)  CATApplicationFrame  CATIAApplicationFrame  CATInteractiveInterfaces \
            CATMatInterfaces  CATMatStartUp \
			CATGraph \
            CK0FEAT  \
            CATMathematics \
            CATMecModInterfaces \
            CATAnalysisInterface \
            YI00IMPL YP00IMPL \
            CATObjectModelerBase  CATObjectModelerCATIA  CATObjectSpecsModeler CATOsmItf \
            JS0GROUP  JS0FM \
            DI0PANV2  CATViz  CATVisualization \
            CATPrdIntegration  AS0STARTUP \
            CATFileMenu \
            MF0STARTUP \
            JS0CORBA \
            JS0SCBAK \
            CD0WIN \
            AC0XXLNK \
            CATInteractiveInterfaces \
            CATOsmGenesis \
            CATOmxKernel \
            
#
#
OS = AIX
SYS_INCPATH =
SYS_LIBPATH =
SYS_LIBS =
 
#
#
OS = HP-UX
SYS_INCPATH =
SYS_LIBPATH = 
SYS_LIBS =

#
#
OS = IRIX 
SYS_INCPATH =
SYS_LIBPATH =
SYS_LIBS =
#SYS_LIBS = -lmalloc_cv
 
#
#
OS = SunOS 
SYS_INCPATH =
SYS_LIBPATH =
SYS_LIBS =

#
#
OS = Windows_NT 
#INSERTION ZONE NOT FOUND, MOVE AND APPEND THIS VARIABLE IN YOUR LINK STATEMENT
#LINK_WITH = ... $(WIZARD_LINK_MODULES) ...
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES =  \
 \
JS0GROUP JS0FM AC0XXLNK AC0XXLNK ObjectModelerBaseUUID 
