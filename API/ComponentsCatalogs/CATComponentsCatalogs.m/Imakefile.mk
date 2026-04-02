#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATVisUUID \
ComponentsCatalogsInterfacesUUID \
ComponentsCatalogsUUID \
FileMenuUUID \
LiteralFeaturesUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
CATMmiUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY


INCLUDED_MODULES = CATCclAUTO \
	CATCclContainer \
	CATCuiEditor \
	CATCuiViewController \
	CATCuiWksCATALOGWorkshop \
	CATCclIntegration \

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP JS0FM JS0FILE \    # System
	CATCclInterfaces CATFdeInterfaces CATCuiOptions \        # ComponentsCatalogs
	ComponentsCatalogsItf \                     # CompCatalogsInterfaces
	AC0CATPL \                                  # ObjectModelerCATIA
	ObjectModeler \                             # ObjectModelerBase
	SpecsModeler \                              # ObjectSpecsModeler
	CD0AUTO ON0FRAME CD0STWIN CATCafAutostart \ # CATIAApplicationFrame
	CD0WIN CD0FRAME CD0SCCP \                   # ApplicationFrame(CATApplicationFrame)
	VE0BASE VE0MDL CATViz \                     # Visualization
	ApplicationFrame \                          # ApplicationFrame
	CATLiteralFeatures \                        # LiteralFeatures
	CATKnowledgeModeler \                       # KnowledgeInterfaces
	CATGraph \                                  # Graph
	DI0PANV2 \                                  # Dialog
	YN000M2D \                                  # Mathematics
	AC0ITEMS CATFmuServices CATInteractiveInterfaces \ #FileMenu	
	CATLiteralsEditor \                         # LiteralsEditor	
	CATMecModInterfaces CATMmiUUID \            # MecModInterfaces
	CATProductStructureInterfaces   \           # ProductStructureInterfaces pour acceder au part number dans le service d'instanciation de parts parametrees
    CATLifSpecs \                                 # KnowledgeInterfaces(CATICkeFunction)
    CATMathStream \                               # Base
    CATOmiClusterItf \                            # Cluster interfaces
    CATCuiBrowser CATPDMBaseEnoviaV5CAA     \     # Link for SupportFrame
	CATPDMBaseItfCPP						\	#check in enovia

