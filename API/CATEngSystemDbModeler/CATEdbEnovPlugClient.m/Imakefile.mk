#=====================================================================================
#                          COPYRIGHT DASSAULT SYSTEMES 2005
#-------------------------------------------------------------------------------------
# CATEdbEnovPlugClient
# vso - 3/2005
# ehh - 2/2006 - Add modules for new ENOVIA client services
# ehh - 3/2006 - Remove modules for new ENOVIA client services - causes too many
#                packaging issues.
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY 
CXX_EXCEPTION =  
 
LINK_WITH_ECDB = JS0FM JS0GROUP AD0XXBAS SystemUUID \
 XMLUtils xmlxerces \                         
 CATPDMBase CATEnoviaV5AdapterBase CATEnoviaPlugInterfaces \
 TECHNLNK CATEdbUUID CATEdbUtil CATEdsUtil CATXMLBase CATImmItf CATEdbCRUDImpl

# cannot include this CATImmWtpBase - imply identityCard changes
# to include CATImmWtpImpl which adversely affects packaging

# Cannot include any ENOVIA SERVER code (like VPMTPManager) because
# this module is a CNEXT client module. vso 6/2005

LINK_WITH = $(LINK_WITH_ECDB)

# System dependant variables
OS = AIX        
LOCAL_CCFLAGS = -D_AIX_SOURCE -DNATIVE_EXCEPTION            
SYS_INCPATH =        
SYS_LIBPATH =        
LOCAL_LDFLAGS = -brtl
      
OS = HP-UX        
LOCAL_CCFLAGS = -D_HPUX_SOURCE -D_REENTRANT -DNATIVE_EXCEPTION        
SYS_INCPATH =        
SYS_LIBPATH =        
      
OS = IRIX        
LOCAL_CCFLAGS = -D_IRIX_SOURCE -DNATIVE_EXCEPTION        
LOCAL_LDFLAGS =               
SYS_INCPATH =        
SYS_LIBPATH =        
#SYS_LIBS =  -lCsup        
      
OS = SunOS        
LOCAL_CCFLAGS = -D_SUNOS_SOURCE -DNATIVE_EXCEPTION              
SYS_INCPATH =        
SYS_LIBPATH =        
      
OS = Windows_NT        
LINK_WITH = $(LINK_WITH_ECDB)
SYS_LIBS = Wsock32.LIB advapi32.lib user32.lib        
LOCAL_CCFLAGS = -D_WINDOWS_SOURCE -DORBIX_DLL -DNATIVE_EXCEPTION      
