#
# Makefile for .tplib files
#
#This is used to compile an interface repository file
#
BUILT_OBJECT_TYPE=TYPELIB
# no more BUILD_PRIORITY=60

LINK_WITH = InfTypeLib CATGitTypeLib PSTypeLib KweTypeLib MecModTypeLib CATAssemblyTypeLib 

