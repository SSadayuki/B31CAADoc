#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
ObjectSpecsModelerUUID
#else
LINK_WITH_FOR_IID =
#endif
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES =

# On est prie de respecter l'ordre alphabetique
LINK_WITH=$(LINK_WITH_FOR_IID)  AD0XXBAS \
            JS0GROUP \
            NS0S3STR \
            CATAssemblyInterfaces \
            CATAssCouMdl \
            CATAssSelection \
            CATClnBase \
            CATClnSpecs \
            CATMechanicalModeler \
            CATObjectSpecsModeler \
						CATProductStructure1 \
						CATVisualization \
						KnowledgeItf \
            CATConstraintModeler MF0DimInt \
            CATConstraintModelerItf \
            CATMecModInterfaces \
            CATViz \
			AC0XXLNK	\
			CATPDMBaseItfCPP	\


