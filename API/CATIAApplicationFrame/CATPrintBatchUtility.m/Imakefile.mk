#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

#ifdef CATIAV5R9
LINK_WITH=JS0GROUP JS0FM DI0PANV2 CATApplicationFrame CATViz CATVisualization CATObjectModelerBase CATPrint CATLayersAndFilters InfItf CATBatProtocol CATBatchUtils CATPrtXMLParser CATLightXml CATPrt XMLParserItf
#else
BUILD=NO
#endif



