# ----------------------------------------------------------------
# CATPspSchematicBrowser.m: Schematic Browser
# ----------------------------------------------------------------

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= \
  CATApplicationFrame ON0FRAME CATEsuUUID \ 
  CATPspUUID CATPspUtilities \
  CATDraftingInterfaces \
  DI0PANV2 \
  AD0XXBAS AC0SPBAS AS0STARTUP \
  JS03TRA JS0STR JS0CORBA JS0FM JS0LIB0 JS0SCBAK \
  CATVisualization CATMathematics AC0ITEMS \
  CATEsuUtil CATEsuProductServices CATPspItfCPP

OS = COMMON
