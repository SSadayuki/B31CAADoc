#=====================================================================================
#                                     CNEXT - CXR14
#                          COPYRIGHT DASSAULT SYSTEMES 2004 
#-------------------------------------------------------------------------------------
# MODULE      :    CATSchPrdDoc
# FRAMEWORK   :    CATSchPlatformModeler
#-------------------------------------------------------------------------------------
# COMMENTS    :    
# This module must be kept as light as possible. It will used to support
# CATProduct document to answer the question whether the document
# has schematic data, the implementation methods will call another interface that
# will pull in additional dlls ONLY WHEN these methods are being called.
#
# Therefore for a scenario where the CATProduct has no schematic data, only the
# dll containing the adhesion of the CATIPrdSchematicInit (that's this module)
# will be required to load Product Structure Document dll.
# For regular CATProduct, the interface methods will NOT be called and therefore
# addition dlls will not be needed.
# For schematic CATProduct, methods like GetEditor will be called. The implementation
# of GetEditor will loaded other dlls through interface calls in GetEditor.
# 
# VSO 1.2004
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0GROUP JS0FM \       
  CATApplicationFrame \
  CATVisualization CATViz CATSchUUID CATProductStructure1

SH_LINK_WITH= $(LINK_WITH)


