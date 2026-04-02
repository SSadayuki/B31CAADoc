#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAApplicationFrameUUID \
InteractiveInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# Imakefile to build a load
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

# LINK_WITH= JS0ERROR JS0CORBA JS0FM JS0SCBAK JS03TRA JS0STR CO0LSTPV DI0PANV2 \
#           VE0MDL VE0BASE ApplicationFrame NS0S3STR  \
#           AD0XXBAS AC0XXLNK CAPPFRM InfItf  \
#           CATCafVisuFilters CATLayersAndFilters CATCafSearch

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0CORBA JS0FM JS0SCBAK JS03TRA JS0STR CO0LSTPV DI0PANV2 \
           VE0MDL  ApplicationFrame NS0S3STR  \
           AD0XXBAS CAPPFRM  \
					 CATLifSpecs DI0STATE \
           CATVisualization CATViz CATLayersAndFilters  CATCafSearch \
					 CATInteractiveInterfaces WindowsAndViews InfItf
