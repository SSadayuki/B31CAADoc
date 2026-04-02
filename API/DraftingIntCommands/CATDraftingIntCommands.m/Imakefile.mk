#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATDfiUUID \
CATIAApplicationFrameUUID \
CATVisUUID \
ComponentsCatalogsUUID \
DraftingFeatureUUID \
DraftingIntCommandsUUID \
DraftingUIUUID \
GeometricObjectsUUID \
LiteralFeaturesUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
SketcherInterfacesUUID \
SketcherToolsUIUUID \
SystemUUID \
PartInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
# COPYRIGHT DASSAULT SYSTEMES 1996
#=========================================================================================
#
# gros-module DraftingIntCommands
#
# Module des commandes Interactive Drafting
#
#=========================================================================================
#
# 15/04/99      DVR     Creation         
# 18/05/99      fgx     Ajout CATMmuConstraint
# 04/11/99	    fgx	    Ajout CATDuiPropTB
# 15/12/99	    fgx	    Ajout CATDicPositioning
# 17/10/00	    fgx	    Ajout CATDicDimInterrupt
# 20/10/00	    fgx	    Ajout CATMechanicalModeler MechanicalModelerUUID
# 10/11/00	    ppd	    Split DraftingFeature => CATAnnotationModeler
# 30/11/00	    fgx	    Suppression de IDCLINEUP
# 14/05/02      HBH     Ajout de Multimedia/CATMMediaImageDialog.m 
# 23/05/02      HBH     Ajout de CATDicMiscDim
# 20/06/02      HBH     Ajout de Print/PG0DLG.m
# 10/04/03      NDF     Nettoyage des LINK_WITH inutiles
# 28/06/04      NDF     Remove module INCLUDED_MODULE CATDicTextWysiwyg deplace dans DraftingIntDSA
# 09/08/04      NDF     Nouveau module CATDicOLESite
# 03/12/06      PYW     Nouveau module CATDbcReorder

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = $(LINK_WITH_FOR_IID) \
            JS0GROUP \
            JS0FM \
            CATObjectSpecsModeler \
            CATObjectModelerBase \
            CATApplicationFrame \
            DI0PANV2 \
            CATDialogEngine \
            CATDraftingInterfaces \
            CATDraftingBaseInfra \
            CATDraftingBaseInfraUI \
            CATDraftingFeature \
            CATDraftingUI \
            DRWEDI \
            CATDraftingIntUI \
            CATLiteralFeatures \
            CATMathematics \
            CATSketcherInterfaces \
            CATSktAssistant \
            CATSktSettings \
            CATSkuBase \
            CATVisualization \
            CATViz \
            KnowledgeItf \
            CATMecModInterfaces \
            CATIAApplicationFrame \
            CATCafSearch \
            CATAdvancedMathematics \
            CATGeometricObjects \
            CATMmuConstraint \
            CATDfiUUID \
            SystemUUID \
            CATDuiPropTB \
            CATFileMenu \
            CATProductStructure1 \
            CATInfInterfaces \
            CATDraftingInfrastructureUI \
            CATDraftingInfrastructure \
            MechanicalModelerUUID \
            CATPrint \
            IDV4UTI \
            CATAnnotationModeler \
            CATAnnotationModelerUI \
            CATPartInterfaces \
            CATDlgStandard \
            CATMMediaImageDialog \
            CATGviUtilities\
            YI00IMPL \
            PG0DLG \
            CATConstraintModelerItf \
            CATGeometricOperators \
            CATSktToolbox \
            CATFeatureCommands \
            CAT3DXmlImportTools \
            CAT3DXmlLightBaseServices \
            CAT3DXmlBaseServices \
            CATLightXml \
            CATBinaryXml \
            CATXMLParserItf \
            CATDraftingUI \
            CATGraph \
            CATDraftingBaseCommands\
            CATDraftingBaseUI\
            CATDraftingAnnotationModeler\
            CATDiaText\
            PRDCommands \
            CATInteractiveInterfaces \

INCLUDED_MODULES =   CATDicArea \
                     CATDicArrow \
                     CATDicAxisLine \
                     CATDicBalloonDatum \
                     CATDicCenterLine \
                     CATDicCenterLineRef \
                     CATDicLeader \
                     CATDicMultiView \
                     CATDicQDim \
                     CATDicText\
                     CATDicThread \
                     CATDicThreadRef \
                     CATDicDetailDitto \
                     CATDicUtilities \
                     CATDicViewPlane\
                     CATDicWeldingGeo \
                     CATDicWelding \
                     CATDicPainter \
                     CATDicImportFile \
                     CATDicPositioning \
                     CATDicHoleDimTable \
                     CATDicGeomCst \
                     CATDicTable \
                     CATDicPicture \
                     CATDicPasteSpecial \
                     CATDicMultiLeaderEnd \
                     CATDicFeatDim \
                     CATDicMiscDim \
                     CATDicView \
                     CATDicOLESite \
                     CATDicGDT \
                     CATDicLineUp \
                     CATDicActivateFixTogether \
                     CATDicReorder\
                     CATDraftingSktCmds \
                     CATDicDimensionEdition \
                     CATDicAlignView \
                     CATDicSheet \
                                          
OS = aix_a
SYS_LIBS = -lXt

OS = aix_a64
SYS_LIBS = -lXt

OS = IRIX
SYS_LIBS = -lXt
