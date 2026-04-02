# Makefile for the .idl files
#

BUILT_OBJECT_TYPE= NONE
LINK_WITH=JS0GROUP\
    InfItf\
		KnowledgeItf\
		SketcherItf\
		CATTPSItf\
		CATObjectSpecsModeler\
		CATObjectModelerBase\
		ObjectModeler
INCLUDED_MODULES= MecModItfCPP MecModPubIDL


