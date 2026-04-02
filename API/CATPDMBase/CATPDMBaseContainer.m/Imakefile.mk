# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module CATPDMBaseContainer.m
#======================================================================

# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH = JS0GROUP AD0XXBAS AC0SPBAS CATObjectModelerCATIA \
		    CATProductStructure1 CATPDMBase XMLUtils   \
         	CATPDMBaseItfCPP XMLParserItf CATXMLBase
		
################
OS = Windows_NT
LOCAL_CCFLAGS = -EHsc

OS = win_b64
CXX_EXCEPTION=
LOCAL_CCFLAGS = -DNATIVE_EXCEPTION

################
OS            = win_a
LOCAL_CCFLAGS = -D_WIN9X_SOURCE 

################
OS = IRIX
LOCAL_CCFLAGS      = -DIRIX 
CXX_TEMPLATE_INC   = -auto_include
CXX_TEMPLATE_PRELK = -prelink
CXX_TEMPLATE_INST  = -ptused

################
OS = HP-UX

################
OS = AIX
LOCAL_LDFLAGS = -brtl

################
OS = SunOS

