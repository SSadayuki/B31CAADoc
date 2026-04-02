#
# LOAD MODULE
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

# LINK_WITH = CATPrintBatchUI CATVisualization CATViz CATObjectModelerBase CATPrint JS0GROUP DI0PANV2 CATDlgStandard JS0FM NS0SI18N YN000MFL CATBatchUtils CATLayersAndFilters BatchMonitor
LINK_WITH = CATVisualization CATViz CATObjectModelerBase CATPrint CATPrt \
            JS0GROUP DI0PANV2 CATDlgStandard JS0FM NS0SI18N YN000MFL \
			CATBatchUtils CATLayersAndFilters BatchMonitor \
			CATInteractiveInterfaces CD0FRAME CATMathStream \
                        CATPrtXMLParser CATLightXml CATXMLParserItf

#OS = Windows_NT
#LOCAL_LDFLAGS = $(SUB_WIN)

OS = SunOS
SYS_LIBS = -lXm
