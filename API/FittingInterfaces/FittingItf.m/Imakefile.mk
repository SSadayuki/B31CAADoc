#
# Makefile for the shared libray of an interfaces Framework
#
 
BUILT_OBJECT_TYPE= NONE
 
LINK_WITH= JS0GROUP JS0DSPA JS0LOGRP JS0CTYP NS0SI18N \
           JS0CORBA JS03TRA JS0ERROR JS0INF \
#           CATApplicationFrame                        \ # ApplicationFrame
#ObjectModeler SpecsModeler

INCLUDED_MODULES = FittingPubIDL FittingProIDL FittingItfCPP
 
