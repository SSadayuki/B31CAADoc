#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATIAApplicationFrameUUID \
CATMatInterfacesUUID \
ObjectModelerBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATMatController
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
            CATIAApplicationFrame \
            CATMatInterfaces \
            DI0PANV2 \
            CATMathematics \
            CATMatModel CATMatStartUp \
            CATObjectModelerBase \
            CATObjectSpecsModeler \
            JS0GROUP JS0FM \
            CATViz \
            CATVisualization \
            CATMatView \
            AS0STARTUP \

#
#
OS = aix_a
SYS_LIBPATH =
SYS_LIBS = -lXm -lXt -lX11
 
#
#
OS = aix_a64
SYS_INCPATH = 
SYS_LIBPATH =
SYS_LIBS = -lXm -lXt -lX11

#
#
OS = HP-UX
SYS_INCPATH =
SYS_LIBPATH = 
SYS_LIBS = -lXm -lXt -lX11

#
#
OS = IRIX 
SYS_INCPATH = -I/usr/include/Motif1.2 -I/usr/include/X11R5 -I/MIT/X11R5/include
SYS_LIBPATH =
SYS_LIBS = -lXm -lXt -lX11 -lgen
#SYS_LIBS = -lXm -lXt -lX11 -lgen -lmalloc_cv
 
#
#
OS = SunOS 
SYS_INCPATH = -I/usr/include/Motif1.2 -I/usr/include/X11R5 -I/MIT/X11R5/include
SYS_LIBPATH =
SYS_LIBS = -lXm -lXt -lX11 -ldl

#
#
OS = Windows_NT 
