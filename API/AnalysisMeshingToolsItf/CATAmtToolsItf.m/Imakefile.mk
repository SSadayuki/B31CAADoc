#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = MSHGeomTools MSHUITools MSHStudio
#
OS = COMMON

LINK_WITH = \
            CATAmtModel \
            CATTessellation \
            CATDialogEngine \
            DI0PANV2 \
            CATGeometricObjects \
            CATGeometricOperators \
            CATTopologicalObjects \
            CATApplicationFrame \
            CATVisualization \
		    CATViz \
            CATObjectSpecsModeler \
            CATObjectModelerBase \
            CATMathematics \
            CATCGMGeoMath \
            CATMathStream \
            CATCACInterfaces \
            CATAsdJointItfUUID \
            CATGbfModelItf \
            CATStrInterfaces \
            CATAnalysisGPSInterfaces \
            CATAnalysisInterface \
            CATAnalysisToolkit \
            CATSAM0Explicit \
            CATProductStructure1 \
            CATConstraintModelerItf \
            CATMecModInterfaces \
            CATMechanicalModeler \
            JS0GROUP \
            JS0FM \
			CATLiteralFeatures \ 
			KnowledgeItf \
			CATSysAllocator

#


OS = AIX 

OS = IRIX

OS = HP-UX

OS = SunOS

OS = Windows_NT


