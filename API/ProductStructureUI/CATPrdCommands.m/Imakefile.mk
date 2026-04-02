#
# Module : CATPrdCommands.m
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#

LINK_WITH = \
      CD0FRAME JS0FM JS0STR JS0CORBA JS0SCBAK NS0S1MSG NS0S3STR\
      JS0ERROR AD0XXBAS DI0PANV2 \
      CK0FEAT VE0GRPH2\
      VE0BASE VE0MDL YN000MAT YP00IMPL SELECT DI0STATE\
      ProductStructureItf InfItf CATInfInterfaces\
      CATInteractiveInterfaces \
      ObjectModeler SpecsModeler\
      JS0CATLM CATProductStructure2\
      CATPrint AC0ITEMS \
      AS0STARTUP AS0STNAV \
      CATProductStructure1 PRDSettings CATPrsRep \
      CATPrsNumbering CATPrsScene \
      DI0BUILD \
      CATLifSpecs \
      CATPrt CATViz CATMathStream CATCGMGeoMath CATPLMRules TECHNLNK CATOmiClusterItf \
	  JS0GROUP ProductStructureUIUUID 
#


