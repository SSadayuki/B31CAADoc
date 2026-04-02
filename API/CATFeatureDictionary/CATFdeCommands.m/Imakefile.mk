#======================================================================
# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module CATFdeCommands.m
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH = CATViz VE0BASE CATDialogEngine \
	CATObjectModelerBase CATObjectSpecsModeler \
	CATFdeViewController \
	JS0GROUP JS0CORBA JS0SCBAK JS0STR JS0FM NS0S3STR \
	DI0PANV2 CD0FRAME CD0WIN CO0LSTST CO0LSTPV CO0RCINT \
	CATLiteralFeatures KnowledgeItf CK0PARAM \
	CP0SPEC AC0SPBAS AC0SPCHECK AC0SPDOC \
  AC0PROJECT CATCclInterfaces CATCclAUTO\
	CATFileMenu CATFdeInterfaces CATFdeApplicationExt \
	VE0GEDIT \
	YN000MAT CATPDMBaseItfCPP 

# System dependant variables
# 
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
#LOCAL_CCFLAGS= -DIRIX  -DNATIVE_EXCEPTION
#CXX_EXCEPTION=
#LOCAL_LDFLAGS = -v
#CXX_TEMPLATE_INC    = -auto_include
#CXX_TEMPLATE_PRELK  = -prelink
#CXX_TEMPLATE_INST   = -ptused
OS = SunOS
#
OS = Windows_NT
