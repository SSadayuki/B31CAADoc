#======================================================================
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module SimulationTypeLib.m
# Module for compilation of the typelib
#======================================================================
#   Modification History:
#       cre     fbn     07/01/1999      Original implementation.
#       mod     mli     09/04/2003      Updated due to change at DS.
#======================================================================
#
# TYPELIB
#
#======================================================================

BUILT_OBJECT_TYPE=TYPELIB
# no more BUILD_PRIORITY=50

LINK_WITH =         InfTypeLib                      \ #
                    NavigatorTypeLib                \ #
                    PSTypeLib                       \ #
                    SPATypeLib                      \ #
