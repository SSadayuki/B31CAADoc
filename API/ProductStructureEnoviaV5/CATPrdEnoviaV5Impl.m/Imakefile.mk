#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= SHARED LIBRARY

#INCLUDED_MODULES = AS0STNAV 

LOCAL_CCFLAGS = -DCATPDMLogIntegration -DOldLogFlg

LINK_WITH =  CATObjectModelerBase JS0GROUP JS0FM CATImmItf CATObjectSpecsModeler CATOmiClusterItf\
             CATSysCommunication CATProductStructure1 CATProductStructureInterfaces \
             CATPDMBaseItf CATEnoviaV5AdapterBase CATEnoviaV5AttrMap CATEnoviaV5VPMNav CATPrdEnoviaV5MML\
             CATMathematics CATMathStream CATFileMenu DI0PANV2 CATCclInterfaces CATCclContainer \
             CATApplicationFrame CATVisualization \
             CATEnoviaPlugInterfaces CATEnoviaV5AdapterItf CATPDMBase  CATReconcileImpl \
             CATPDMBaseUI XMLUtils CATWBS \
             CATInteractiveInterfaces  CATPLMRules CATLifDictionary \
             CATEnoviaV5Save CATPDMBase \
			 AC0SPNewXML \
#
OS = AIX
# 
################
OS = HP-UX
################
CXX_EXCEPTION =
LOCAL_CCFLAGS = -DNATIVE_EXCEPTION -DCATPDMLogIntegration -DOldLogFlg
################
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT






















