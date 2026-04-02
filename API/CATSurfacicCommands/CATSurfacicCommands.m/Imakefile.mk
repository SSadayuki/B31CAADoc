BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= CATDialogEngine \
           CATGraph \
           CATVisualization \
           CATObjectModelerBase \
           CATObjectSpecsModeler \
           CATMechanicalModeler \
           CATMechanicalModelerUI \
           CATMecModInterfaces \
           CATMmuCommands \
           CATMechanicalModelerLive \
           CATMechanicalModelerUI \
	       CATMechanicalCommands \
	       CATInteractiveInterfaces\
           SketcherItf \
           AS0STARTUP \
           KnowledgeItf\
           JS0FM NS0S3STR \
           DI0PANV2 CD0FRAME CD0SHOW \
           PartItf \
           YP00IMPL \
           CATGMModelInterfaces \
           CATGitInterfaces \
		   CATLifDictionary

#OS = AIX
#
#OS = HP-UX
#
#OS = IRIX
#
#OS = SunOS
#
#OS = Windows_NT
