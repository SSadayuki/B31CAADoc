# ============================================================================
# SHARED LIBRARY de PCBoardBase
# ============================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = AC0XXLNK CD0WIN AS0STARTUP \
		NS0S3STR NS0S1MSG JS0FM AC0SPBAS DI0STATE \
		CATVisualization DI0PANV2 ON0FRAME \
     		CATLiteralFeatures CATCclInterfaces


