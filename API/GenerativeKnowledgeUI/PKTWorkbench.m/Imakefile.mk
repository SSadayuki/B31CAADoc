#
# SHARED LIBRARY
#

# BUILT_OBJECT_TYPE=NONE
BUILT_OBJECT_TYPE=SHARED LIBRARY
 

WIZARD_LINK_MODULES = \
          JS0GROUP CATApplicationFrame CATObjectModelerBase \
          CATViz CATVisualization CATProductStructure1 CATLieToolbar CATKnowledgeModeler CATLifSpecs


LINK_WITH = $(WIZARD_LINK_MODULES) 
