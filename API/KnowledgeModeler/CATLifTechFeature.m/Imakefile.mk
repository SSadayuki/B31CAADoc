#
# Imakefile pour CATLifObject
#

BUILT_OBJECT_TYPE=NONE
# BUILT_OBJECT_TYPE=SHARED LIBRARY

# pour referencer le modules prereq
# meme vide, il faut le laisser
LINK_WITH = JS0GROUP YN000MAT NS0SI18N DI0PANV2 \
			CD0FRAME JS0FM Collections AC0SPBAS \
			AC0SPDOC ObjectModeler KnowledgeItf \
			CP0SPEC AC0XXLNK CATVisualization \
			CD0AUTOSTART CATLifKnowPublic CATScriptEngine SystemUUID CATSysCommunication VE0GROUP \
			KnowledgeItf CATCafAutomation\
			CATLiteralFeatures
