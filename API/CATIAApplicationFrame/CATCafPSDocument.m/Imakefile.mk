#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATIAApplicationFrameTstUUID \
CATIAApplicationFrameUUID \
CATVisUUID \
ObjectModelerBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
BUILT_OBJECT_TYPE = SHARED LIBRARY
LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP JS0FM CATPrint CATPrt \
                                CATVisualization CATViz DI0PANV2 \
								CATApplicationFrame CATObjectModelerBase Mathematics CATMathStream



