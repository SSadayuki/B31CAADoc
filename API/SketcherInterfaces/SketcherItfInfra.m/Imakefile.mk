#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 2000
#=========================================================================================
# Imakefile du module SketcherItfInfra (gestion de l'undo)
#=========================================================================================
# 21/11/2002    LVA    Creation
#=========================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) JS0GROUP CATObjectModelerItf CATObjectSpecsModeler CATSketcherInterfaces
                                 

OS = IRIX
LOCAL_CCFLAGS = -woff 3115



