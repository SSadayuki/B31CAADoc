#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATIAApplicationFrameUUID \
CATMmiUUID \
FileMenuUUID \
LiteralFeaturesUUID \
ObjectModelerBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY          
#
BUILT_OBJECT_TYPE=SHARED LIBRARY


LINK_WITH=$(LINK_WITH_FOR_IID) 	\
                $(LINK_WITH_WIN) \
                CATCGMGeoMath CATMathStream CK0UNIT CK0FEAT OM0EDPRO \
		CATVisualization CATViz JS0GROUP  JS0FM \
		AC0SPBAS \
		ObjectModeler  \
		NS0SI18N  \
		Collections CD0FRAME \
		DI0PANV2 DI0STATE DI0BUILD\
		ON0GREXT ON0MAIN ON0PROP Y3DYNOPE \
		VE0MDL YP00IMPL Mathematics JS0LOGRP \
		KnowledgeItf MecModItf \
		VE0GRPH2 AC0WINLNK  \
		ON0FRAME CATLiteralFeatures CATInteractiveInterfaces CATDialogEngine\
		CATProductStructureInterfaces CATLifAutomation CATKnowledgeModeler CATKweDocument CATInfInterfaces \
		CATFileMenu CATSketcherInterfaces TECHNLNK CATKWBrowser \
		CATLifGenerativeParser CATXDocLinkItf JS0FILE  \
		CATCkeKnowledgeEnoviaLink CATLieKnowledgePattern
#

INCLUDED_MODULES = CK0PARAM  CK0EDIT CATLieDesignTable \
                   CATLoopEditor \
									 CATLieList CATLieScript CATLieSetOfEquations CATLieRights \
                   CATLieEquivalentDimensions 


ALIASES_ON_IMPORT=CATLiteralsEditor CATLieToolbar

LINK_WITH_WIN=

OS= Windows
LINK_WITH_WIN=CATDlgHtml
