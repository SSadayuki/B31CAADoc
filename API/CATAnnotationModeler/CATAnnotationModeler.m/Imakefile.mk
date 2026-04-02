BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = JS0FM JS0GROUP \
            DI0PANV2 \
            CATVisualization  \
            CATAnnotationInterfaces  \
            CATDibModelerInterfaces  \
            CATViz  CATApplicationFrame CATIAApplicationFrame \
            CATGeometricObjects CATGeometricOperators \
            CATMathematics CATAdvancedMathematics \
            CATTopologicalObjects CATTopologicalOperators \
            V4ToM2 \
            CATCsaSolid \
            CATCdbEntity SystemUUID \
            CATObjectModelerBase CATObjectModelerCATIA CATObjectSpecsModeler \
            CATProductStructure1 CATLiteralFeatures CATGngReportUtilities \
            CATMmrSwitchMode CATMechanicalModeler CATMecModInterfaces CATMechanicalModelerUI \
            CATTTRSItf CATTTRSUUID \
            CATSketcherInterfaces CATSkmWireframe \
            CATDraftingAnnotation1 CATDanStandard CATDraftingInterfaces CATDfiUUID  \
            CATMmiUUID TECHNLNK CATConstraintModelerUI MMUIDimVisu \
            KnowledgeItf CATDraftingInfrastructure CATInteractiveInterfaces ToolsVisu \
            V5ToV4Tools YP0SOLCR CATPartInterfaces  \
            V4Geom1 CATTocV4Utilities CATSolPrimUtilities CATOmbCluster CATUdfInterfaces\
            CATDraftingBaseInfra CATTerTechnoResultInterfacesUUID CATGeomReroute \
            CATGngGraph DraftingItfCPP YP00IMPL CATXMLParserItf CATObjectModelerItf SketcherItfInfra \
            CATPrint CATAnnotationModelerBase \
			CATTerTechnoResultItf \ DibModelerServices

ALIASES_ON_IMPORT = CATAnnotationModeler CATAnnotationInterfaces  
ALIASES_ON_IMPORT = CATAnnotationModeler DibModelerServices

INCLUDED_MODULES = CATAnnCAA \
                   CATAnnToolBox \
                   CATAnnBase \
                   CATAnnDimension \
                   CATAnnDimensionExpert \
                   CATAnnDimensionRep \
                   CATAnnDimensionSubset \
                   CATAnnDimensionSystem \
                   CATAnnFactory \
                   CATAnnStyle \
                   CATAnnV4Container \
                   CATAnnV4Std \
                   LightConnector \
                   CATAnnotationModelerItfCPP \
                   CATAnnV4Annot \
                   CATAnnImageStream \
