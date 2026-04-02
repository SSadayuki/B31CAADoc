# COPYRIGHT DASSAULT SYSTEMES 2002
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = \
   AC0SPBAS \
   AD0XXBAS \
   AS0STARTUP \
   CATAssemblyInterfaces \
   CATCGMGeoMath \
   CATConstraintModeler \
   CATConstraintModelerItf \
   CATConstraintModelerUI \
   CATConstraintSettings \
   CATDialogEngine \
   CATDlgStandard \
   CATFecServices \
   CATGraph \
   CATGraphicProperties \
   CATInteractiveInterfaces \
   CATLifDictionary \
   CATMathematics \
   CATMathStream \
   CATMechanicalModelerUI \
   CATMecModInterfaces \
   CATMmiUUID \
   CATMmuSettings \
   CATPrsScene \
   CATSketcherInterfaces \
   CATSketcherToolsUI \
   CATSktAssistant \
   CATSktSettings \
   CATVisualization \
   CATViz \
   CATVizIterators \
   CD0FRAME \
   CD0WIN \
   CK0PARAM \
   DI0PANV2 \
   JS0FM \
   JS0GROUP \
   JS0SCBAK \
   KnowledgeItf \
   MF0DimInt \
   MF0STARTUP \
   SELECT \
   ToolsVisu \
   YI00IMPL \
   YP00IMPL \
# END WIZARD EDITION ZONE

LINK_WITH = $(WIZARD_LINK_MODULES)	\
			JS0STR					              \ # System
      CO0RCINT                      \ # System
      CO0RCDBL                      \ # System
      MecModItfCPP                  \ # MecModInterfaces


# System dependant variables
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
