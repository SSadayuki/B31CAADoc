#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= SHARED LIBRARY

INCLUDED_MODULES = SP0VVHIE  \
                   SP0VVSEQ  \
                   SP0VVEDR  \
                   SP0VVCMD  \
                   WSPROCESS \
                   SP0VVLIB  \
                   SP0VVDER  \
                   SP0VVITF  \
                   SP0VVPRO  \
                   SP0VVUST  \
                   SP0VVGAN  \
                   SP0VVPRF  \
                   SP0VVMVC  \
                   PositionVisualization 
 

LINK_WITH = JS0GROUP JS0FM                                 \
	        ObjectModeler SpecsModeler                     \
	        AS0STARTUP AC0CATPL VE0GROUP AC0ITEMS          \
	        DI0PANV2 CATDlgStandard                        \
	        CAPPFRM ON0GRAPH VE0GRPH2                      \
	        ProcessModelerBase ProcessInterfaces           \
	        SP0VVPPR SP0VVUTIL SP0VVISP PositionManagement \
	        Mathematics                                    \
	        ApplicationFrame CATDialogEngine               \
	        YP00IMPL OM0EDPRO CK0FEAT                      \
	        CD0AUTOSTART CATScriptEngine CATInfInterfaces  \
	        CATCclInterfaces                               \
	        GE0MAIN DNBGantt DNBGanttItf                   \
	        PV0MAIN                                        \
	        CATViz                                         \
	        KnowledgeItf CATMathStream CATCGMGeoMath	   \
	        DNBGraphEditor                                \
	        DNBResourceBehaviorItfCPP                      \
            CATGraphicProperties                           \
	        CATProductStructureInterfaces                  \
            CATInteractiveInterfaces                      \
	        



#
OS = AIX
#BUILD = NO
#
OS = HP-UX
#BUILD = NO
#
OS = SunOS
#BUILD = NO
#
OS = IRIX
#BUILD = NO
#
OS = Windows_NT
#BUILD = NO









