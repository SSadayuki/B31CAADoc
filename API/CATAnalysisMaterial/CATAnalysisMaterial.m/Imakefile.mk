# 
# MODULE for Analysis datas in Material library
# 
#---------------------------------------
BUILT_OBJECT_TYPE= SHARED LIBRARY
INCLUDED_MODULES = CATSAMMaterial \

LINK_WITH = JS0GROUP \
			JS0FM \
            CATObjectModelerBase \
			CATObjectSpecsModeler \
			CATLiteralFeatures KnowledgeItf \
			CATMatInterfaces \
			CATMecModInterfaces CATConstraintModelerItf\
			CATVisualization CATViz \
			CATIAApplicationFrame \
			DI0PANV2 \

