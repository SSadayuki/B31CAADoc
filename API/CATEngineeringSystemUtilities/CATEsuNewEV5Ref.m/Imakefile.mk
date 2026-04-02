BUILT_OBJECT_TYPE = LOAD MODULE

OS = COMMON

LINK_WITH =     AC0XXLNK     \
                AC0SPBAS         \
        	AD0XXBAS         \
        	AS0STARTUP       \
        	CATEnoviaV5AdapterBase \
        	CATEsuUUID       \      
                CATEsuUtil       \
            	CATPDMBase       \
            	CATPDMBaseItfCPP \      
                JS03TRA          \
        	JS0CORBA         \              
        	JS0CRYPTEXIT     \
        	JS0GROUP         \
                JS0STR           \  
        	NS0S1MSG         \
                NS0S3STR         \
                SystemUUID       \
                CATProductStructureInterfaces \
                CATEsuProductServices \
             

OS = SunOS                                                           
LOCAL_CCFLAGS = -DNO_NATIVE_BOOL

