# COPYRIGHT 1999-2003 DASSAULT SYSTEMES PROVENCE
#======================================================================
# Imakefile for module CATDeStepToAssembly.m
#======================================================================
#
# 11/04/2002: JHH: Ajout de CATViz en R9
# 25/06/2003: ARH: XCAD - Ajout de StepImport,DataExchangeKernelItfCPP,
#                  DataExchangeBaseRepsItfCPP, ProductStructureDataExchange
# 03/07/2003: ARH: Ajout de MecModItfCPP pour traitement model V4
# 30/07/2003: DFB: Ajout de CATMathStream, warning du compilo
# 05/09/2003: JHH: Ajout de CATMultiCADItf pour la gestion du mode MultiCAD
# 21/11/2003: ARH: Ajout de StepExport
# 15/01/2008: ARH: Ajouts pour l'export des FTA
#======================================================================
#
# SHARED LIBRARY 
#
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

# Compilation conditionelle pour support des step avec 3dxml.
#LOCAL_CCFLAGS = -DIMPEXPCGRTO3DXML


INCLUDED_MODULES = StepToAssembly StepImport StepExport
#
LOCAL_CKMFLAGS= -gLate
#
LINK_WITH = JS0CORBA KS0LATE KS0STEP KS0SIMPL AD0XXBAS NS0SI18N \
			   AS0STARTUP CO0LSTPV AC0SPBAS YN000MAT AC0XXLNK  DataExchangeInfrastructure \
            STEPPart42 STEPExchangeEnv CD0FRAME VE0MDL\
			   DataExchangeInfrastructureUI \
			   JS0FM ProductStructureItf DI0PANV2 CATViz \
			   DataExchangeKernelItfCPP DataExchangeBaseRepsItfCPP ProductStructureDataExchange \
			   MecModItfCPP CATMultiCADItf StepCGRFromTess \ 
			   CATMathStream CATConstraintModelerItf \
			   CATTPSUUID CATTPSItf CATVisualization Topology \
			   CATXCADToV5DocFactory JS0ZLIB PolyFactoryImpl PolyMathContainers CATPolyAnalyzeOperators PolyhedralModel CGRFromTessDataImport \
			   CATXMLParserItf \
			   PartDesignDataExchange \

# Enlever le commentaire pour le support des step avec 3dxml var d'env CATDXImpExpStepWith3dxml
#                  Attention il faut ajouter les FW suivant dans IC:
#                      AddPrereqComponent("CATXCADServices",Protected);
#                      AddPrereqComponent("CAT3DXMLXCADAdapter",Protected);


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


