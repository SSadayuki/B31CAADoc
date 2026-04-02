#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAApplicationFrameUUID \
InfInterfacesUUID \
ObjectModelerBaseUUID \
SystemUUID \
BatchInfrastructureUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = CD0AUTO

LINK_WITH=$(LINK_WITH_FOR_IID)  CD0AUTOSTART JS0GROUP JS0FM NS0SI18N\
            DI0PANV2 PG0BASE CD0FRAME AC0XXLNK AD0XXBAS VE0GRPH2\
            VE0GROUP  Mathematics CATMathStream Collections InfItf JS0INF JS0LOGRP\
            CD0STWIN CD0SHOW ON0FRAME CATLayersAndFilters GraphicPropertiesToolbar VE0MDL\
            JS0CATLM YP00IMPL CATPrt CATViz CATCGMGeoMath  \
						Search DI0STATE ListImpl SystemUUID BatchInfrastructureUUID \
						CATAutoItf AutomationInterfacesUUID CATBatchUtils \
						CATInteractiveInterfaces CATScriptReplayInteractions


OS = AIX
SYS_LIBS = -lXm -lXt -lX11

OS = IRIX
SYS_LIBS= -lXm -lXt -lX11
