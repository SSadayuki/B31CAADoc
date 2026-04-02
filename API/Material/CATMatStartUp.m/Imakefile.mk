# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATMatStartUp
#======================================================================
# CREATED  15 Feb 1999 BY EGO
# MODIFIED xx xxx xxxx BY xxx
#          modification reason   
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = CATObjectSpecsModeler \
            AC0SPBAS \
            AC0SPDOC \
            CP0SPEC \
            JS0GROUP \
            DI0PANV2 \
            CATViz

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
