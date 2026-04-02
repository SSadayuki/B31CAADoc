# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module CAAVisBasics.m
#======================================================================
#
# LOAD MODULE
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = CATVizBase CATMathematics JS0GROUP JS0FM VE0LOD CATMathStream

OS = Windows_NT 
#LOCAL_LDFLAGS = $(SUB_WIN)

OS = SunOS
SYS_LIBS = -lXm -lXt -lX11

OS = AIX
SYS_LIBS = -lXm -lXt -lX11

OS = HP-UX
SYS_LIBS = -lXm -lXt -lX11

OS = IRIX
SYS_LIBS = -lXm -lXt -lX11
LOCAL_CCFLAGS  = -float
LOCAL_CFLAGS   = -float

