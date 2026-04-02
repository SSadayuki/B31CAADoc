#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATDfiUUID \
CATIAApplicationFrameUUID \
CATVisUUID \
ComponentsCatalogsUUID \
DraftingFeatureUUID \
DraftingUIUUID \
FileMenuUUID \
GeometricObjectsUUID \
InteractiveInterfacesUUID \
LiteralFeaturesUUID \
MechanicalModelerUUID \
NewTopologicalObjectsUUID \
ObjectModelerBaseUUID \
ObjectModelerCATIAUUID \
ObjectSpecsModelerUUID \
ProductStructureUUID \
SketcherInterfacesUUID \
SketcherToolsUIUUID \
SystemUUID          
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 1996
#=========================================================================================
#
# gros-module DRAFTUI
#
# Module des Settings du FW DraftingUI
#
#=========================================================================================
#
# ???		96 	???	Creation
# Juin	98	fgx	Ajout de Cs0SETTINGS et DRWSET pour integration aux commandes Sketcher
# Juin	98	fgx	Ajout de Search pour implementation de CATISearch
# Juil.	98	fgx	Ajout de MF0ROOT pour CATIPrtPart et de CATAIXServices pour cvtoolw
# Aout.	98	dvr	Suppression Cs0SETTINGS
# Dec.	98	fgx	Ajout de PrtEnv et MMInterfaces pour CATDrawingForMechanical
# Janv.	99	ypr	suppression de GDWIN
# Mars	99	fgx	Ajout de IDCTOOLBARS
# Juil. 99    	jbb   	Suppression DRWEVENT
# Nov.  99    	fgx   	Ajout CATDuiPropTB
# fev.	00	tbe	ajout properties sur callout
# Nov.	00	ppd	Split DraftingFeature/CATAnnotationModeler
# fev.	02	gtl	Ajout de CATCaptureTools (multimedia) Save As Raster

BUILT_OBJECT_TYPE = SHARED LIBRARY

ALIASES_ON_IMPORT = CATDraftingUI CATDraftingBaseCommands

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP \
            JS0FM JS0FILE \
            CATObjectModelerBase  \
            CATObjectModelerCATIA \
            CATObjectSpecsModeler \
            CATApplicationFrame   \
            DI0PANV2              \
            CATDialogEngine       \
            CATVisualization CATViz \
            CATIAApplicationFrame \
            CATDlgStandard        \
            CATMathematics        \
            CATTopologicalObjects \
            CATGeometricObjects   \
            CATGviUtilities       \
            CATPrint              \
            CATCaptureTools       \
            CATLiteralFeatures    \
            CATKnowledgeModeler   \
            CATMecModInterfaces   \
            CATInfInterfaces      \
            CATDraftingInterfaces \
            CATDraftingFeature    \
            CATDuiSettings        \
            CATSketcherInterfaces \
            CATSkuBase            \
            CATSktSettings        \
            CATSkuCommands        \
            CATSketcherToolsUI    \
            CATSktAssistant       \
            CATIADataFormat       \
            CATAIXModel           \
            CATV4DataAdmin        \
            CATCafAutomation      \
            CATProductStructure1  \
            CATMechanicalModeler  \
            CATMechanicalModelerUI \
            MMUIDimVisu            \
            CATCafSearch           \
            CATLayersAndFilters    \
            CATLiteralsEditor      \
            CATDfiUUID             \
            CATCclInterfaces       \
            CATDuiPropTB           \
            CATFeatureCommands     \
            SystemUUID             \
            CATFileMenu            \
            CATInteractiveInterfaces    \
            CATFmuServices              \
            CATDraftingInfrastructureUI \
            CATDraftingBaseInfra        \
            CATMmiUUID                  \
            CATLifAutomation            \
            KnowledgeItf                \
            CATDraftingInfrastructure   \
            CATDraftingBaseInfra \
            CATAnnotationModeler        \
            CATAnnotationModelerBase    \
            CATAnnotationModelerUI      \
            CATNavigatorItf             \
            DraftingBaseInfrastructureUIUUID \
            CATCafPublishCtrlToolsOptions \
            CATStandardContainer \
            CATPDMBaseInterfaces \
            CATPDMBaseItfCPP \
            CATPDMBase \
            CATSysAllocator\
            CATFecAutoSave\
            CK0UNIT \
            CATSktToolbox	\
            Infra2DItfCPP \
            CAT3DXmlInterfaces \
            CAT3DXmlBaseServices \
            CATBinaryXml \
            XMLParserItf \
            CATLightXml CAT3DXmlExportServices CAT3DXmlLightBaseServices  \
            CD0AUTOSTART CATDraftingAnnotationModeler CATVPMBase CATSkmWireframe    \
            DI0PANV2 \
			CATDraftingBaseUI \


INCLUDED_MODULES = DRAFTUI \
                   DRWDOC \
                   DRWEDI \
                   GDACQUI \
                   GDCRESHEET \
                   GDEDITSHEET \
                   GDPROPEDIT \
                   CATDrwPropEditCallout \
                   CATDrwCalloutEdition \
                   DRWEXT \
                   DRWHEADERS \
                   DRWVISU \
                   CATDuiMVAnalyse \
                   CATDuiDuplicate \
                   CATDuiStyles \
                   DFTInfraUI \
                   CATDuiUpdate


