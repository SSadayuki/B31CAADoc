#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATIAApplicationFrameUUID \
DraftingFeatureUUID \
DraftingIntUIUUID \
ObjectSpecsModelerUUID \
SketcherInterfacesUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif

#
# DLL of FW DraftingIntUI
#
# 08.03.99 	fgx	Ajout de CATMechanicalModeler et IDCTOOLBARS
# 03.05.99 	fgx	Ajout de CATDraftingFeature, retrait des petits modules correspondants
# 03.09.99 	fgx	Ajout de CATSktAssistant
# 04.11.99	fgx	Ajout CATDuiPropTB
# 25.02.00	fgx	Ajout CATDuiPropTB
# 10.11.00	ppd	Split DraftingFeature => CATAnnotationModeler
# 30.11.00	fgx	Ajout IDCLINEUP
# 11.04.01	lhz	Ajout CATLiteralFeatures
# 10.04.03	ndf	Nettoyage des inutiles
# 30.03.05	flr	Suppression IDCLINEUP

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) \
          JS0GROUP JS0FM \
          DI0PANV2 \
          CATVisualization  \
          CATViz  \
          CATApplicationFrame \
          CATIAApplicationFrame \
          CATDraftingUI \
          CATDraftingInterfaces \
          CATDlgStandard \
          CATObjectModelerBase \
          CATMecModInterfaces \
          CATObjectSpecsModeler \
          CATDuiPropTB \
          CATSketcherInterfaces \
          CATSkuCommands \
          CATMathematics \
          CATMathStream \
          CATAnnotationModeler \
          CATDialogEngine \
          CATDraftingBaseInfra \
          CATDraftingBaseInfraUI \
          CATDraftingInfrastructure \
          CATDraftingInfrastructureUI \
          KnowledgeItf \
          CATFileMenu \
          CATConstraintModelerItf \
          IDFRAME \
          IDV4UTI \
          CATLieUnit \
          CATLiteralFeatures \
          CATMatInterfaces \
          CATLifRelations \
          CATDraftingAnnotationModeler \
          CATAnnotationInterfaces \
          CATInteractiveInterfaces \
          CATDraftingBaseUI \
          DRWPATCHOOSER \
          DibModelerServices 

INCLUDED_MODULES = IDPROP \
                   DraftingIntUIItfCPP \

