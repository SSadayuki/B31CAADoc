#
# LOAD MODULE
#

BUILT_OBJECT_TYPE=LOAD MODULE

LINK_WITH = CATPrintBatchGUI CATVisualization CATViz CATObjectModelerBase CATPrint CATPrt \
            JS0GROUP DI0PANV2 CATDlgStandard JS0FM NS0SI18N YN000MFL CATBatchUtils CATLayersAndFilters BatchMonitor CATApplicationFrame CATMathStream

OS = Windows_NT
MKMFC_DEPENDENCY = yes
LOCAL_LDFLAGS = $(SUB_WIN)

OS = SunOS
SYS_LIBS = -lXm
