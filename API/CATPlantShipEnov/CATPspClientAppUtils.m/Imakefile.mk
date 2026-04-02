#=====================================================================================
#                                     CNEXT - CXR17+
#                          COPYRIGHT DASSAULT SYSTEMES 2006+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATPspClientApplUtils
# FRAMEWORK   :    CATPlantShipEnov
# AUTHOR      :    AGQ
# DATE        :    Aug 2006
#-------------------------------------------------------------------------------------
# DESCRIPTION :    
#-------------------------------------------------------------------------------------
# COMMENTS    :    
#-------------------------------------------------------------------------------------
# MODIFICATIONS     user  date        purpose
#    HISTORY        ----  ----        -------
#
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY

      
      
BUILT_OBJECT_TYPE=SHARED LIBRARY 
CXX_EXCEPTION =  
 
LINK_WITH_EnovPSP = JS0FM JS0GROUP AD0XXBAS \
 XMLUtils xmlxerces \                         
 CATPDMBase \
 CATImmItf  \ 
 CATEnoviaV5AdapterBase \
 CATEnoviaPlugInterfaces \
 CATPspClientXMLAccess \
 CATXMLBase CATImmItf \ 
 SystemUUID
 # CATEsuUtil CATEsuUUID  \

# cannot include this CATImmWtpBase - imply identityCard changes
# to include CATImmWtpImpl which adversely affects packaging

# Cannot include any ENOVIA SERVER code (like VPMTPManager) because
# this module is a CNEXT client module. 

LINK_WITH = $(LINK_WITH_EnovPSP)

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
LINK_WITH = $(LINK_WITH_EnovPSP)
SYS_LIBS = Wsock32.LIB advapi32.lib user32.lib        
LOCAL_CCFLAGS = -D_WINDOWS_SOURCE -DORBIX_DLL -DNATIVE_EXCEPTION      

	 
SH_LINK_WITH= $(LINK_WITH)


