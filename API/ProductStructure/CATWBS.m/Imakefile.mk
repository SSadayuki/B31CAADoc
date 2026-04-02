# COPYRIGHT DASSAULT SYSTEMES 2002 CATWBS.m
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = JS0GROUP JS0CORBA JS0SCBAK  \
            AD0XXBAS \
            CATObjectSpecsModeler \
            CD0SCCP \
            CATVisualization \
            CATProductStructure1 CATProductStructureInterfaces \
            CATViz
