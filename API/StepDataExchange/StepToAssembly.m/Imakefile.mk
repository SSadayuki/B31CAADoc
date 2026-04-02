#======================================================================
# COPYRIGHT DASSAULT SYSTEMES PROVENCE 2000
#======================================================================
#----------------------------------------------------#
#--                                                --#
#--  Attention il ne sert a rien, si vous voulez   --#
#-- ajouter un link le mettre dans le Imakefile.mk --#
#--         de CATSdeStepToAssembly.m              --#
#--                                                --#
#----------------------------------------------------#
BUILT_OBJECT_TYPE = NONE
#
LOCAL_CKMFLAGS= -gLate

# Compilation conditionelle pour support des step avec 3dxml.
# LOCAL_CCFLAGS = -DIMPEXPCGRTO3DXML

#
LINK_WITH       = JS0CORBA KS0LATE KS0STEP KS0SIMPL AD0XXBAS NS0SI18N \
		  AS0STARTUP CO0LSTPV AC0SPBAS YN000MAT AC0XXLNK DataExchangeInfrastructure \
                  STEPPart42 STEPExchangeEnv CD0FRAME \
			JS0FM ProductStructureItf
#
IMPACT_ON_IMPORT=YES
#
OS = COMMON
# 
CATIA_LSTCOMDYN=NO
#
OS = AIX
#
OS = IRIX
#
OS = HP-UX
#
OS = SunOS
#
OS = Windows_NT


