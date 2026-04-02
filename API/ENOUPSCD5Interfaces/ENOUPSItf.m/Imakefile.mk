# COPYRIGHT DASSAULT SYSTEMES 2007
#======================================================================
# Imakefile for module mxcatiav5precond
#======================================================================
#
# Note: this module must be as small as possible
#       because it will be loaded even in case "CATIA V5 - MatrixOne"
#       product is not available
#       (this will mainly occur in DS)
#           CATApplicationFrame \
#			CATCT5Settings \
#			JS0GROUP
#======================================================================
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH = JS0GROUP
