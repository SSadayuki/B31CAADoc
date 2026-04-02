# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module CATNewScenesObject.m
#======================================================================
# Fev 2003  Creation: SQU
#======================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
INCLUDED_MODULES = CATNewScenesBase CATNewSceneFeat CATScenePrdDataFeat CATNewSceneDlg CATNewSceneContainer

LINK_WITH_1 = JS0FM JS0GROUP AC0XXLNK AC0SPBAS Scene CATVisualization \
              AS0STARTUP CD0WIN CATMathematics DI0PANV2 OSMInterfacesItf \
              InfItf CATPrsScene ON0FRAME CATNavigatorItf SB0COMF \
              CATProductStructureInterfaces CATNavigator2Itf ToolsVisu CATGraph \
              CATViz CATMathStream CATDMUBase CATGraphicProperties TECHNLNK

#
OS = AIX
LINK_WITH = $(LINK_WITH_1)

#
OS = HP-UX
LINK_WITH = $(LINK_WITH_1)

#
OS = IRIX
LINK_WITH = $(LINK_WITH_1)

#
OS = SunOS
LINK_WITH = $(LINK_WITH_1)

#
OS = Windows_NT
LINK_WITH = $(LINK_WITH_1)
