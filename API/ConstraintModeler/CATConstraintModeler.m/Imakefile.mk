# COPYRIGHT DASSAULT SYSTEMES 2002

BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES =  \
   AC0SPBAS \
   AD0XXBAS \
   AS0STARTUP \
   CATAssemblyInterfaces \
   CATCGMGeoMath \
   CATConstraintModelerItf \
   CATInteractiveInterfaces \
   CATLiteralFeatures \
   CATMathematics \
   CATMathStream \
   CATMcoInterfaces \
   CATMechanicalModeler \
   CATMmrDbgTools \
   CATOsmItf \
   CATPartInterfaces \
   CATScriptReplayInteractions \
   CATSketcherInterfaces \
   CATUdfInterfaces \
   CATVisualization \
   CATViz \
   CD0WIN \
   DC01DCM \
   DCMSNEW \
   GN0GRAPH \
   JS0GROUP \
   KnowledgeItf \
   MecModItfCPP \
   SELECT \
   SI0REPER \
   Y30A3HGG \
   YI00IMPL \
   YP00IMPL \
   AnalysisTools
# END WIZARD EDITION ZONE

LINK_WITH = $(WIZARD_LINK_MODULES)	\
			JS0STR					\	# System
			CATOsmIn				\	# ObjectSpecsLegacy


INCLUDED_MODULES = MF0CST MF0DimInt CMInterfaces

ALIASES_ON_IMPORT = CATConstraintModeler CATConstraintModelerItf CATMechanicalModeler CATMecModInterfaces

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
