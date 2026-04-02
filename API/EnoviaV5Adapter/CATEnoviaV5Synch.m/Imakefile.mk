# COPYRIGHT DASSAULT SYSTEMES 2002
#======================================================================
# Imakefile for module CATEnoviaV5Synch.m
#======================================================================
#
#  Jun 2003  Creation: Code comming from R11 ProductStructureEnoviaV5/CATPrdEnoviaV5Synch
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

INCLUDED_MODULES = \

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID =      \
SystemUUID               \
ObjectModelerBaseUUID    \
ObjectSpecsModelerUUID   \
CATPDMBaseInterfacesUUID \
EnoviaV5AdapterUUID 
#else
LINK_WITH_FOR_IID =
#endif
 
LINK_WITH = $(LINK_WITH_FOR_IID) JS0GROUP JS0FM \
      CATEnoviaV5AdapterItf CATEnoviaV5AdapterBase \
	  CATPDMBaseItf CATPDMItfOld CATObjectSpecsModeler \  
	  CATApplicationFrame DI0PANV2 CATObjectModelerBase KnowledgeItf \
	  CATEnoviaV5VPMNav CATPDMBase
       

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
