#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
ComponentsCatalogsUUID \
GenerativeKnowledgeUIUUID \
KnowHowUUID \
KnowledgeUIInfrastructureUUID \
LiteralFeaturesUUID \
ObjectModelerBaseUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID) CATKweScript \
          CATCGMGeoMath CATMathStream  CATFileMenu CATLiteralFeatures CATLiteralsEditor \
          CATGngName CD0FRAME JS0FM JS0STR JS0CORBA JS0SCBAK NS0S1MSG NS0S3STR JS0ERROR \
           AD0XXBAS DI0PANV2 DI0STATE SpecsModeler \
          VE0GROUP OM0EDPRO AC0SPBAS CAPPFRM\
          CATViz CATVisualization CATCclInterfaces CATMecModInterfaces\
		  CATGeometricObjects	CATInfInterfaces CATProductStructure1 \
      CATKWBrowser CATKnowledgeModeler\
      KnowledgeItf CATMathematics \
      CATLifGenerativeParser CATAssemblyInterfaces CATGkwPattern

INCLUDED_MODULES = SY0UI CATLoopUI
# PKTWorkbench




