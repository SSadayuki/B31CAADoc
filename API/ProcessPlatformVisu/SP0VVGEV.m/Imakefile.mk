#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#

OS = COMMON

LINK_WITH = JS0GROUP ObjectModeler               \
            ProcessInterfaces GE0MAIN            \
            JS0FM DI0PANV2 CATDialogEngine       \
            CATApplicationFrame                  \
            DNBGraphEditor ProcessModelerBase    \
			CATVisualization CATViz
