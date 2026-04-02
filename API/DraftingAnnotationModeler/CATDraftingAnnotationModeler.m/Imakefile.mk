BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = CATMathematics \
            JS0FM \
            JS0GROUP \
            CATViz \
            CATVisualization \
            CATObjectModelerItf \
            CATObjectModelerBase \
            CATObjectSpecsModeler \
            CATGMModelInterfaces  \
            CATTTRSItf \ # CATTTRSInterfaces
            CATTTRSUUID \ # CATTTRSInterfaces
            KnowledgeItf \
            CATLiteralFeatures \
            CATInteractiveInterfaces \
            CATMecModInterfaces \
            CATSketcherInterfaces \
            CATDraftingInterfaces \
            CATDraftingBaseInfra \
            CATDraftingBaseInfraUI \
            CATDraftingInfrastructure \
            CATAnnotationModelerBase \
            CATAnnotationInterfaces \
            CATAnnotationModeler \
            CATPrint \
            CATGraphicProperties \
            CATProductStructure1 \
            CATCclInterfaces \
            CATVisVRML2 CATLayoutInfraCatalog \
            CATDibModelerInterfaces \
            SystemUUID \                  
            DibModelerServices \                 

INCLUDED_MODULES = DraftingAnnotationModelerItfCPP \
                   CATDftText \
                   CATDftGDT \
                   CATDftTable \
	                 CATDftBalloon \
                   CATDftCoordDimension \
                   CATDftDatumFeature \
	                 CATDftDatumTarget \
                   CATDftRough \
                   CATDftLeader \
		               CATDftWelding \
                   CATDftAnnotationBase \
                   CATDftRTFParser \
                   CATDftAnnFactory \
                   CATAnnCallout \
                   CATAnnApplicativeText \
                   CATAnnIndicEdge \



