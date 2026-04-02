#
# SHARED LIBRARY CATMmuCommands
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= CATDialogEngine \
           CATGraph \
           CATVisualization \
           CATInfInterfaces CATUdfInterfaces \
		       CATMathematics \
           CATFeatureCommands CATFecUtilities CATFmuLinks CATFileMenu \
           CATLifRelations CATObjectModelerBase CATObjectSpecsModeler \
           CATMechanicalModeler CATMechanicalModelerUI \
           CATMecModInterfaces CATMmiUUID\
           CATMmrApplication \
		       CATMechanicalCommands \
		       CATInteractiveInterfaces\
           PartItf SketcherItf AS0STARTUP \
           CATCafSearch CATLifSpecs CATLifDictionary KnowledgeItf\
           JS0GROUP JS0CORBA JS0SCBAK JS0STR JS0FM NS0S3STR \
           DI0PANV2 CD0FRAME CD0WIN CD0SHOW CO0LSTST CO0LSTPV CO0RCINT CATDlgStandard\
           CP0SPEC AC0SPBAS AC0SPCHECK AC0SPDOC \
           CATShmInterfaces CATGngReportUtilities ToolsVisu CATGeometricObjects CK0UNIT \
           CATGraphicProperties CATMathStream CATMmrReplace CATMmrSys CATViz \
           YI00IMPL CATMmlBRepModel CATMechanicalModelerLive GN0GRAPH 

#OS = AIX
#
#OS = HP-UX
#
#OS = IRIX
#
#OS = SunOS
#
#OS = Windows_NT
