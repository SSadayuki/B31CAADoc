#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
CATMmiUUID \

#else
LINK_WITH_FOR_IID =
#endif
#
# CATMmrApplication
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_BEFORE_CATIAV5R24=$(LINK_WITH_FOR_IID)  ApplicationFrame  \
			CATInteractiveInterfaces \
            JS0GROUP JS0FM \
            ObjectModeler \
            AC0CATNAV CATIAEntity CATLayersAndFilters ProductStructureItf CATProductStructure1 \ 
            SpecsModeler \
            VE0GROUP CATViz \
            Mathematics CATLiteralFeatures InfPubIDL CATMathStream MMInterfaces \
            MecModItfCPP PartItf YP00IMPL CATAxisBody YI00IMPL JS0GROUP \
            CATViz KnowledgeItf CATConstraintModelerItf GN0GRAPH \
            CATGitInterfaces CATSketcherInterfaces CATTerTechnoResultInterfacesUUID \
            SystemUUID CATMmrSys CATMmlSys

#ifdef CATIAV5R24
  LINK_WITH=$(LINK_WITH_BEFORE_CATIAV5R24)\
            CATMmlBRepModel CATMecModLiveInterfaces
#else
  LINK_WITH=$(LINK_WITH_BEFORE_CATIAV5R24)
#endif

 

#INSERTION ZONE NOT FOUND, MOVE AND APPEND THIS VARIABLE IN YOUR LINK STATEMENT
#LINK_WITH = ... $(WIZARD_LINK_MODULES) ...
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES =  \
JS0GROUP JS0FM JS0GROUP MecModItfCPP CATMmiUUID 
# END WIZARD EDITION ZONE
