# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module CATDataBrowse.m
#======================================================================
#
#  Oct 2003  Creation: Pour le Paste du Master
#======================================================================
#
# NONE
#

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID =  	
#else
LINK_WITH_FOR_IID =
#endif


BUILT_OBJECT_TYPE = SHARED LIBRARY


LINK_WITH =$(LINK_WITH_FOR_IID) CATObjectModelerBase \	 # ObjectModelerBase/CP0CLIP->CATUnicodeString
								CATObjectModelerCATIA \  # ObjectModelerCATIA/AC0CATPL->CATIV4ToV5ToCATProdCont
								CATViz	\				 # VizualisationBase/CATVizBase->CATPathElement
								JS0CORBA \				 # CATBaseUnknown								
								CATOmaBinaryFormat \     # ObjectModelerCATSDM\CATIACBFormat->CATFormat
								CATProductStructureInterfaces CATPrsAutomation \	 # ProductStructure\AS0AUTO->CATIAProductImpl
								AS0STARTUP \			 # ProductStructure\AS0STARTUP->CATIProduct
								MecModItfCPP CATCdbEntity
							
