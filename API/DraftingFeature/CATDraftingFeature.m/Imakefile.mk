#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATDfiUUID \
CATIAApplicationFrameUUID \
CATVisUUID \
ComponentsCatalogsUUID \
DraftingInfrastructureUIUUID \
GeometricObjectsUUID \
KnowledgeInterfacesUUID \
LiteralFeaturesUUID \
MechanicalModelerUUID \
NewTopologicalObjectsUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
ProductStructureUUID \
SketcherInterfacesUUID \
SystemUUID \
DraftingFeatureUUID
#else
LINK_WITH_FOR_IID =
#endif

# gros-module CATDraftingFeature -> DraftingFeature

BUILT_OBJECT_TYPE = SHARED LIBRARY

ALIASES_ON_IMPORT = CATDraftingFeature CATDraftingAnnotationModeler

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0FM JS0GROUP \
            CATPrint CATPrt DI0PANV2 CATDialogEngine CATLayoutInfraCatalog \
            CATVisualization  CATViz CATVisVRML CATVisVRML2 CATGraphicProperties \
            CATApplicationFrame CATIAApplicationFrame CATGraph \
            CATGeometricObjects CATGeometricOperators \
            CATMathematics CATAdvancedMathematics CATMathStream CATCGMGeoMath \
            CATTopologicalObjects CATTopologicalOperators \
            CATV4System CATCclInterfaces \
            CATCsaSolid CATGviUtilities \
            CATCdbEntity SystemUUID \
            CATObjectModelerBase CATObjectModelerCATIA CATObjectSpecsModeler \
            CATProductStructure1 CATLiteralFeatures CATGngReportUtilities \
            CATMechanicalModeler CATMecModInterfaces CATConstraintModeler DRWEDITGEO\
            CATSketcherInterfaces CATSketcherToolsUI CATSktAssistant CATSkmWireframe CATPathModeler \
            CATDraftingAnnotation1 CATDanStandard CATDraftingInterfaces CATDfiUUID CATMmiUUID TECHNLNK \
			KnowledgeItf CATDraftingBaseInfraUI CATDraftingInfrastructureUI CATCdbEntity CATDraftingBaseInfra CATDraftingInfrastructure \
			CATAnnotationModeler CATAnnotationModelerUI CATInteractiveInterfaces \
			CATDraftingFeature CATSkuBase CATStandardContainer CATConstraintModelerItf \
			CATPDMBaseItfCPP CATAssemblyInterfaces CATObjectModelerItf CATPDMBase CATVPMBase\
      PartItfCPP CATTerTechnoResultInterfacesUUID CATTerTechnoResultItfCPP SketcherItfInfra CATDraftingAnnotationModeler\
      CATDrwPackage CATMechanicalModelerUI Infra2DItfCPP

INCLUDED_MODULES = DRWFEAT \
                   DRWCAA \
                   DRWFACT \
                   DRWDEFAULT \
                   DRWSTRT \
                   DRWBREP \
                   GDVISU \
                   DRWMARKUP \
                   DRWPATCHOOSER \
                   DRWAttributes \
                   CATDftFeat \
                   CATDftEnoviaIntegration \
                   DraftingFeatureItfCPP \
                   CATDftAssociativity \
                   CATDftPicture \
                   CATDftAxlCtrlThd \
                   CATDftAreaFill \
                   CATDftCplxText

