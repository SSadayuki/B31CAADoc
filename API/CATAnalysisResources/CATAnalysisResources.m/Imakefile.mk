#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID =
#else
LINK_WITH_FOR_IID =
#endif
#
#  module  CATAnalysisRessources
#
#---------------------------------------
BUILT_OBJECT_TYPE= SHARED LIBRARY

OS = COMMON

LINK_WITH=$(LINK_WITH_FOR_IID) \
          JS0CORBA AC0SPBAS \
          CATSAM0Core CATSAM0Explicit CATSamVisuImpl CATSamVisuUUID CATAmtModel \
          CATObjectModelerBase CATMathematics CATMathStream \
		      CATAnalysisInterface CATAnalysisToolkit \
 		      CATVisualization  CATViz \
    		  CATLiteralFeatures KnowledgeItf

INCLUDED_MODULES = CATAnalysisAdaptors

IMPACT_ON_IMPORT = YES

