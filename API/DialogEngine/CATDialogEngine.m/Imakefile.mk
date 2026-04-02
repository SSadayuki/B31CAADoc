#
# SHARED LIBRARY  
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = DI0STATE DI0APPLI DI0GRAF CATDegEditAgent CATCmdDialogAgents

LINK_WITH = CATDegUUID \
            SystemUUID JS0GROUP JS0FM \
		    CATAfrUUID CATApplicationFrame Palette \
		    CATVisUUID CATVisualization CATViz \
            CATGraph \
            DI0PANV2 \
            CATObjectModelerBase \
			CATMathematics CATMathStream \
            CATInteractiveInterfaces

