#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATIAApplicationFrameUUID \
FeatureCommandsUUID \
LiteralFeaturesUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# Imakefile to build FMSELECT.m
#
# 01/09/2000 - rajout de CATCafSearch CATLiteralFeatures LiteralFeaturesUUID 
# 	 					 pour CATExtISearchMagnitude - a valider par JBV

BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = Groupsel CATFecClearHistory CATFecGroupSelectionAUTO

LINK_WITH=$(LINK_WITH_FOR_IID)  AC0SPBAS AD0XXBAS \
								JS0CORBA JS0FM \
								Mathematics CATMathStream \
								YP00IMPL \
								DI0STATE \
                        CATClnBase CATClnSpecs CATCGMGeoMath \
								DI0PANV2 CATDlgStandard \
								CD0EDIT VE0BASE CATViz CATCafSearch \
								CATLiteralFeatures KnowledgeItf CATLiteralsEditor \
								CATInteractiveInterfaces InfPubIDL








