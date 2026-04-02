# COPYRIGHT DASSAULT SYSTEMES 2001
#======================================================================
# Imakefile for module CATOMVault.m
#======================================================================
#
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 

LINK_WITH = JS0GROUP CATObjectModelerBase ENOVIVaultClientAPP VX0TOOLS

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

OS = irix_a64
BUILD = NO
