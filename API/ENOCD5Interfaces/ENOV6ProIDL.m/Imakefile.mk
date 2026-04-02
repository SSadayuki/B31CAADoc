# COPYRIGHT DASSAULT SYSTEMES 2015
#======================================================================
# Imakefile for module ENOV6ProIDL
# Module for compilation of the Protected IDL interfaces
#======================================================================
#
# NO BUILD             
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0FM JS0GROUP CATObjectModelerBase

SOURCES_PATH=ProtectedInterfaces
COMPILATION_IDL=YES

