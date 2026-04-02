# COPYRIGHT DASSAULT SYSTEMES 2002
#
# Module : CATWBSUI.m
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = JS0GROUP JS0CORBA JS0SCBAK JS0FM \
            AD0XXBAS \
            CATObjectSpecsModeler \
            CATMathematics YP00IMPL \
            CATFileMenu \
            CD0SCCP CATDialogEngine DI0PANV2 SELECT \
            CATVisualization \
            CATWBS CATProductStructure1 CATProductStructureInterfaces \
            CATProductStructure2 CATPrsWkbPrsConfiguration \
            CATMathStream CATCGMGeoMath CATViz

