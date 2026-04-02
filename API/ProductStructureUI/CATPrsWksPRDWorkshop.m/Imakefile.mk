#
# Module : CATPrsWksPRDWorkshop.m
#
BUILT_OBJECT_TYPE= SHARED LIBRARY
#

# pour memoire, ceux que j'enleve :
FATTY_LINK_WITH = \
   CATIAEntity DI0STATE VE0GRPH2 YN000MAT JS0XXC0 \
   SpecsModeler ProductStructureItf PRDExport JS0FILE \
   InfPubIDL

LINK_WITH = \
   CD0FRAME JS0STR JS0CORBA JS0SCBAK NS0S1MSG NS0S3STR\
   JS0ERROR AD0XXBAS AS0STARTUP\
   VE0BASE VE0MDL SELECT \
   AS0STNAV \
   ObjectModeler \
   JS0CATLM PRDWorkshop PRDCommands \
   CATViz CATProductStructureInterfaces


