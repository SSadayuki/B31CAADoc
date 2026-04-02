#
# CATxPDM copied to CATPDMReconcile because packaging problem
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=	CATApplicationFrame \
			CATFileMenu \
			CATFmuServices \
			CATMathematics \
			CATMathStream \
			CATObjectModelerBase \			
			CATObjectSpecsModeler \
			CATProductStructure1 \
			CATProductStructureInterfaces \
			CATVisHCG \
			CATVisualization \
			JS0FILE \
			JS0GROUP \
			CATOmbDocComposite

#out:
#CATAssemblyInterfaces
#CATLiteralFeatures
#KnowledgeItf
#CATMecModInterfaces
#CATPrint
#CATPrt
#CATViz
#CATxPDMInterfaces
