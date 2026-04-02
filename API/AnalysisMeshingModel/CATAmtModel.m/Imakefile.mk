
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = MSHModel 
#
OS = COMMON

LINK_WITH = \
            CATSysAllocator \
            JS0GROUP \
		    JS0ERROR \
		    VE0GRPH2 \
            CATGraphicProperties \
            CATVisualization \
		    CATViz \
            CATObjectModelerBase \
            CATObjectModelerCATIA \
            CATObjectSpecsModeler \
            KnowledgeItf \
            CATGeometricObjects \
            CATGeometricOperators \
            CATProductStructure1 \
            CATMecModInterfaces \
            CATTopologicalObjects \
            CATTopologicalOperators \
			CATCGMGeoMath \
			CATMathStream \
            CATMathematics \
            CATAnalysisInterface \           
            CATAnalysisToolkit \
            CATApplicationFrame \
            CATInteractiveInterfaces \
            CATGitInterfaces

OS = AIX 

OS = IRIX

OS = HP-UX

OS = SunOS

OS = Windows_NT
