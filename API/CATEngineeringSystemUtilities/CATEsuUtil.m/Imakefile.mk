#
# CATEngineeringSystemUtilities Utilities 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=   \
  CD0FRAME \
  ON0FRAME \
  DI0PANV2 \
  JS03TRA JS0STR JS0CORBA JS0FM JS0LIB0 JS0SCBAK JS0GROUP \
  AD0XXBAS CATVisualization CATProductStructure1 CATProductStructureInterfaces \
  AC0SPBAS CATMathematics CATSketcherInterfaces CATSktSettings \
  CATPDMBase CATEnoviaV5AdapterBase \
  SystemUUID \
  CATCclInterfaces CATLiteralFeatures CATEsuUUID CATGeometricObjects \
  MMInterfaces O20COLLI CATEsuProductServices CATSkmWireframe CATPDMBaseEnoviaV5CAA
  

#------------
OS = COMMON

