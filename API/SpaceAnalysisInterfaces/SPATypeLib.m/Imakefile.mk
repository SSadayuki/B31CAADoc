# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module SPATypeLib.m
#   Module for compilation of the typelib
#======================================================================
#
# Apr 2000  Creation: LJE
#
#======================================================================

BUILT_OBJECT_TYPE=TYPELIB
# no more BUILD_PRIORITY=40

LINK_WITH = InfTypeLib PSTypeLib NavigatorTypeLib

