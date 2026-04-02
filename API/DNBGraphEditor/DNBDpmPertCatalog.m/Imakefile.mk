# COPYRIGHT DASSAULT SYSTEMES 2001
#======================================================================
# Imakefile for module DNBDpmPertCatalog
#======================================================================
#
#======================================================================
#
# SHARED LIBRARY 
#
# LOAD MODULE

#BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
BUILT_OBJECT_TYPE=LOAD MODULE


LINK_WITH = ObjectModeler JS0GROUP AC0CATPL AC0SPBAS VE0GROUP CATViz DNBGraphEditor

OS = COMMON

OS = Windows_NT
#LOCAL_CCFLAGS=-FR

