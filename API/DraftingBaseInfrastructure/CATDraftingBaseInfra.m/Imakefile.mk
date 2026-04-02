# COPYRIGHT DASSAULT SYSTEMES 2004
#=========================================================================================
# Imakefile du module CATDraftingBaseInfra
#=========================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = CATDbiStdInfra

LINK_WITH=  JS0GROUP \
            JS0FM \
            CATObjectSpecsModeler \
            CATObjectModelerBase \
            KnowledgeItf \
            CATCclInterfaces \
            CATLifDictionary \
            CATDraftingInterfaces \
            CATLayersAndFilters \
            CATPrint \
            SystemUUID \
            CATVisualization \
            CATMathematics \
            CATGeometricObjects \
            MecModItfCPP \
            CATSketcherInterfaces \
            CATLayoutInfraCatalog \
            DraftingBaseInfrastructureUUID \
            CATViz \
            SketcherItfInfra \
            CATInteractiveInterfaces \
            CATObjectModelerItf \
            CATMmiUUID \
            CATSkmWireframe \
            CATMechanicalModeler \
						CATPDMBaseItfCPP \
            CATXMLParserItf \
            CATMmrDbgTools \
            CATDbiClean \
            CD0SCCP \
            AS0STARTUP \
			CATDibModelerInterfaces \
			JS0ZLIB \

 
ALIASES_ON_IMPORT = CATDraftingBaseInfra CATLayoutInfraCatalog

