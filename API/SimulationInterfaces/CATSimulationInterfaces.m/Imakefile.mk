#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
SimulationInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# Makefile for the shared libray of an interfaces Framework
#
 
BUILT_OBJECT_TYPE=SHARED LIBRARY
 
LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP JS0DSPA JS0LOGRP JS0CTYP NS0SI18N \
           JS0CORBA JS03TRA JS0ERROR JS0INF  \
		   InfItf CATInfInterfaces SIMItfCPP
#ObjectModeler SpecsModeler Mathematics

INCLUDED_MODULES = SimulationItf  SimulationPubIDL SimulationProIDL SimulationItfCPP

ALIASES_ON_IMPORT = CATSimulationInterfaces CATMathematics

