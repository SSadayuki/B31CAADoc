#======================================================================
# Imakefile for module CATToolsBase
# 05-03-09 : DGA ; Creation pour Archi ToolsBase
#======================================================================
# 
BUILT_OBJECT_TYPE = NONE

# System dependant variables
OS = COMMON
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
LOCAL_CCFLAGS=-DWNT 


