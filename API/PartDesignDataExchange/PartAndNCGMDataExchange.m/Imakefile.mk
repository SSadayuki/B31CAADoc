# COPYRIGHT 1999-2001 DASSAULT SYSTEMES PROVENCE
#======================================================================
# Imakefile for module PartAndNCGMDataExchange.m
#======================================================================
#
# 08/09/1999: JHH: Creation
# 25/01/2000: SAB: monocodage pour module axes locaux
# 15/01/2001: JHH: Suppression des #ifdef CAT..V5Ri i<=4 meme en commentaires (mkCheckSource)
# 23/08/2001: JHH: Suppression des LINK_WITH inutiles  ; ATTENTION: M2ToV5 est necessaire
# 04/02/2002: RNO: Ajout de FrFTopologicalOpe pour CleanCurve 2D en R9
# 16/10/2002: CGU: Suppression "monocodage" version obsoletes.
# 07/04/2003: MAX: Ajout des FWs DataExchangeKernelItf & DataExchangeBaseRepsItf pour isolement des itfs XCAD
# 30/07/2003: DFB: Ajout de CATCGMGeoMath,CATMathStream  warning du compilo
# 24/07/2006: JRX: suppression M2ToV5 (demande JNV)
# 08/01/2007: JHH: Ajout de CATMMM (remplace CATVioMMM)
# 06/06/2007: DFB: Ajout de CATExchange3DAnnotationCPP (Mapping Table pour Annotation)
# 22/10/2007: DFB: Ajout de CATViz (Mapping Table pour Annotation)
# 28/01/2008: ARH: Ajout TessPolygon/TessAPI (COPS STEP)
# 28/01/2008: ARH: Ajout YN000FUN (COPS Arrete STEP)
# 11/09/2009: ARH: Ajout MecModItfCPP (Axis Systems STEP)
#======================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH_COMMON =  AC0XXLNK AD0XXBAS JS0CORBA \
	     YN000FUN YN000MAT CO0LSTPV YP00IMPL NS0S3STR YI00IMPL \
	     Primitives Y300IINT DataExchangeInfrastructure \
	     DXM2V5 DataExchImportInterface XGMModel \
	     HybOper BOOPER FrFObjects FrFOpeSur FrFOpeCrv FrFTopologicalOpe \
	     BODYNOPE \
	     PowerFrFOperators CATMMM  Topology\
		 DataExchangeKernelItfCPP DataExchangeBaseRepsItfCPP \
		 CATCGMGeoMath CATMathStream Y30C3XGG\
		 CATExchange3DAnnotationCPP  CATViz \
		 TessPolygon MecModItfCPP TessAPI \
		 ProductStructureDataExchange \
		 PartDesignDataExchange \
		 
LINK_WITH = $(LINK_WITH_COMMON) CATAxisBody

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
