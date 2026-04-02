#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAApplicationFrameUUID \
DraftingUIUUID
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 1998
#=========================================================================================
#
# CATDuiSettings
#
# Module des Settings du Drafting
#
#=========================================================================================
#
# Mai		98 	fgx	Creation
# Juin	98	fgx	Ajout de Cs0SETTINGS pour integration aux commandes Sketcher
# Juin	98	fgx	Ajout de CK0UNIT, CK0FEAT CATKnowledgeModeler et AC0SPBAS pour la gestion des unites dans le panel
# Juin	98	pbu	Suppression de de CK0UNIT 

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=JS0GROUP \
          JS0FM \
          DI0PANV2 \
          VE0BASE \
          YN000M2D \
          CATViz \
          CATMathStream \
			    CATObjectSpecsModeler \
			    CATObjectModelerBase \
			    CATApplicationFrame \
			    CATIAApplicationFrame \
			    CATDlgStandard \
			    KnowledgeItf \
			    CATLiteralFeatures \
			    CATSktSettings \
			    CATSketcherToolsUI \
			    CATDraftingInterfaces \
			    CATDraftingBaseInfra \
			    CATDraftingBaseInfraUI
