#
# CATEngineeringSystemUtilities Product Services 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=   \
JS0FILE \ 
AC0ITEMS \ #FileMenu
Collections \
CATMathematics \
CATObjectModelerBase CATObjectSpecsModeler \
CATLiteralFeatures \
CATAssCouMdl CATAssSelection \
CATMechanicalModeler CATMecModInterfaces \
CATCclInterfaces \
CATProductStructure1 \
CATVisualization \
CATEsuUtil \
KnowledgeItf

#------------
OS = COMMON
