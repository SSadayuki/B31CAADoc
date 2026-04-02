# COPYRIGHT 2003 DASSAULT SYSTEMES PROVENCE
#======================================================================
# Imakefile for module ProductStructureDataExchange.m
#======================================================================
#
# 05/05/2003: JHH: Creation a partir de la version R11
#                  Ajout de DataExchangeBaseRepsItfCPP, DataExchangeKernelItfCPP
#======================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

# Compilation conditionelle pour support des step avec 3dxml.
#LOCAL_CCFLAGS = -DIMPEXPCGRTO3DXML

LINK_WITH = JS0GROUP AD0XXBAS AS0STARTUP AC0SPBAS \
            DataExchangeInfrastructure DataExchangeBaseRepsItfCPP DataExchangeKernelItfCPP \
            XCADAnnotationDataExchange \
            PartDesignDataExchange \
            CATTPSItf \
			   ProductStructureItf CATConstraintModelerItf Mathematics \
			   CATMathStream CATVisualization CATViz \
            CATXCADToV5DocFactory \
            CD0FRAME\
            JS0FM \
			MecModItfCPP
			 
			 
# Enlever le commentaire pour le support des step avec 3dxml var d'env CATDXImpExpStepWith3dxml	
#                  Attention il faut ajouter les FW suivant dans IC:
#                      AddPrereqComponent("CAT3DXMLXCADAdapter",Protected);
#                      AddPrereqComponent("CATMultiCADInterfaces",Protected);
#                  Et Dans ImakeFile enlever le commantaire sur le define IMPEXPCGRTO3DXML		 
			 
			 
			 
#			 CATExchange3DAnnotationCPP \				# CATTPSXCADInterfaces
#			 CATTPSXCADExport						\	# CATTPSXCADExport
#			 CATTPSItf \
#			 CATTPSUUID

OS = AIX

#
OS = HP-UX

#
OS = IRIX

#
OS = SunOS

#
OS = Windows_NT
