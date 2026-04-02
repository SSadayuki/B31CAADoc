BUILT_OBJECT_TYPE= SHARED LIBRARY

LINK_WITH= JS0GROUP\
           JS0FM\
           ObjectModeler\
           VE0GROUP\
           DI0PANV2\
           CAPPFRM\
           Mathematics\
           ApplicationFrame\
           OM0EDPRO\
           DNBGanttItf \
           DNBDPMItf\
		   DNBGanttSettings\
           CATVisualization\
		   CATViz\ #For CATVisualizationBase FW
           CATLiteralFeatures\
		   CATPrint\
           CATDlgStandard \   #For migration CATIUserSettings interface (drn 7/10/00)
		   ProcessInterfaces \
		   CATXMLParserItf \

OS = IRIX
SYS_LIBS = -lXm -lXt -lX11

OS = aix_a64
SYS_LIBS = -lXm -lXt -lX11

OS = aix_a
SYS_LIBS = -lXm -lXt -lX11


OS = Windows_NT
LOCAL_CCFLAGS = -FR



# This is uncommented by AGITH
# SP0BBMDY



#INSERTION ZONE NOT FOUND, MOVE AND APPEND THIS VARIABLE IN YOUR LINK STATEMENT
#LINK_WITH = ... $(WIZARD_LINK_MODULES) ...
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES =  \
JS0GROUP JS0FM JS0GROUP DNBGanttChartUUID  \
DNBGantt 
# END WIZARD EDITION ZONE
