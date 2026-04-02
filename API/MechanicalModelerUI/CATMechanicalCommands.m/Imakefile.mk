#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
MechanicalCommandsUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# CATMechanicalCommands
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_BEFORE_CATIAV5R24=$(LINK_WITH_FOR_IID)  ApplicationFrame  \
	CATInteractiveInterfaces CATFileMenu \
      DI0PANV2 DI0STATE \
      JS0GROUP JS0FM \
      ObjectModeler \
      SpecsModeler \
      VE0GROUP  \
      Mathematics CATTesHLRUtilities CATLiteralFeatures InfPubIDL CATViz CATMathStream \
	  CATMmrReplace CATMmrSys MecModItfCPP CATMechanicalModeler AS0STARTUP PartItf CATMechanicalModelerUI  \
      KnowledgeItf VE0GEDIT YI00IMPL GN0GRAPH

#ifdef CATIAV5R24
  LINK_WITH = $(LINK_WITH_BEFORE_CATIAV5R24)
#else
  LINK_WITH = $(LINK_WITH_BEFORE_CATIAV5R24)\
        CATMmlBRepModel

#endif

INCLUDED_MODULES = CATMcoCCP CATMmuApplicativeAttributesAndColors

ALIASES_ON_IMPORT=CATMechanicalCommands CATInteractiveInterfaces CATUdfInterfaces CATMcoModel CATMmrReplace


