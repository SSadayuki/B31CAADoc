BUILT_OBJECT_TYPE= NONE

LINK_WITH = \
	CATCclContainer ComponentsCatalogsItf InfItf \ #ComponentsCatalogs
	JS0GROUP \			#System
	AC0CATPL \			#ObjectModelerCATIA
	ObjectModeler \			#ObjectModelerBase
	SpecsModeler \			#ObjectSpecsModeler
	CD0AUTO ON0FRAME CD0STWIN \	#CATIAApplicationFrame
	CD0WIN CD0FRAME \ 		#ApplicationFrame(CATApplicationFrame)
	VE0BASE VE0MDL \		#Visualization
	CATLiteralFeatures \	#LiteralFeatures
	CATGraph \              #Graph
    CATKnowledgeModeler     #KnowledgeModeler

#	CATIALibraryEditor \		#CATIAModelEditor
#	CATMecModInterfaces \		#MecModInterfaces


