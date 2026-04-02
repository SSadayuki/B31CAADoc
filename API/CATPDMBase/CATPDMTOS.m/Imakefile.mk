# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module CATPDMTOS.m
#======================================================================
#
#  Dec 2003  Creation:PPN
#======================================================================
#
# INCLUDED SHARED LIBRARY 
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0FM JS0GROUP CATPDMBaseUUID \
	CATObjectModelerBase CATObjectSpecsModeler\
	CATPrdIntegration\
	CATPDMBase CATPDMBaseInterfaces CATPDMBaseItfCPP\
	DI0PANV2 AC0XXLNK CATPDMBaseContainer\

################
OS = Windows_NT
CXX_EXCEPTION=
LOCAL_CCFLAGS = -GX -DNATIVE_EXCEPTION

OS = win_b64
CXX_EXCEPTION=
LOCAL_CCFLAGS = -DNATIVE_EXCEPTION

################
OS            = win_a
CXX_EXCEPTION=
LOCAL_CCFLAGS = -D_WIN9X_SOURCE -DNATIVE_EXCEPTION

################
OS = IRIX
LOCAL_CCFLAGS      = -DIRIX -DNATIVE_EXCEPTION
CXX_EXCEPTION=
LOCAL_LDFLAGS = -v
CXX_TEMPLATE_INC   = -auto_include
CXX_TEMPLATE_PRELK = -prelink
CXX_TEMPLATE_INST  = -ptused

################
OS = HP-UX
CXX_EXCEPTION =
LOCAL_CCFLAGS = -DNATIVE_EXCEPTION

################
OS = AIX
LOCAL_CCFLAGS = -DNATIVE_EXCEPTION
LOCAL_LDFLAGS = -brtl

################
OS = SunOS
LOCAL_CCFLAGS =  -DNATIVE_EXCEPTION







