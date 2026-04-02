#=====================================================================================
#                                     CNEXT - CXR4+
#                          COPYRIGHT DASSAULT SYSTEMES 2000+ 
#-------------------------------------------------------------------------------------
# MODULE      :    CATSchBase
# FRAMEWORK   :    CATSchPlatformModeler
# AUTHOR      :    VSO
# DATE        :    1.2000
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

# client site simulation for traces
# LOCAL_CCFLAGS=-DCNEXT_CLIENT 


WIZARD_LINK_MODULES = \
AS0STARTUP \
JS0GROUP \ 
CATObjectSpecsModeler \
CATPspUtilities CATPspUUID


LINK_WITH = $(WIZARD_LINK_MODULES)



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
