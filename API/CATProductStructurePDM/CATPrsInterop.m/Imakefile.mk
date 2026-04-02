# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module CATPrsInterop.m
#======================================================================

# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH = JS0GROUP  AC0SPBAS CATMathematics  \
			AC0XXLNK CATProductStructure1 CATPrsRep  CATPDMBase CATPDMBaseItf CATProductStructurePDMUUID\
			CATVPMBase CstModItfCPP XMLParserItf CATPDMBaseInterfaces CATMecModInterfaces \
						
################
OS = Windows_NT
LOCAL_CCFLAGS = -GX

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

