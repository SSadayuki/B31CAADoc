# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module Material.m
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE = SHARED LIBRARY 

INCLUDED_MODULES = CATMaterialCAA2
 
LINK_WITH = JS0GROUP \
            CATMatInterfaces  CATMatModel 

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
