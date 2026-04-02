# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module CATClnSch.m - VSO 2003
#======================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH = JS0GROUP CATObjectSpecsModeler CATClnSpecs CATClnBase \
  CATObjectModelerBase ObjectModelerBaseUUID AC0SPBAS \
  CATSchUtilities CATLiteralFeatures KnowledgeItf CATSchUUID

SH_LINK_WITH= $(LINK_WITH)


