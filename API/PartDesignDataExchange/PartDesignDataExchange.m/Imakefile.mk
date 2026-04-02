# COPYRIGHT 1999-2002 DASSAULT SYSTEMES PROVENCE
#======================================================================
# Imakefile for module PartDesignDataExchange.m
#======================================================================
#
# 08/09/1999: JHH: Creation
# 10/01/2000: JHH: Ajout de DXM2V5
# 13/09/2000: ABM: Ajout de CATMmiUUID
# 15/01/2001: JHH: Suppression des #ifdef CAT..V5Ri i<=4 meme en commentaires (mkCheckSource)
# 23/08/2001: JHH: Suppression des LINK_WITH inutiles
# 23/11/2001: JHH: Suppression monocodage R6
# 11/04/2002: JHH: Suppression monocodage R7; ajout de CATViz en R9
#  16/10/2002: C. Guinamard : 5uppression "monocodage" version obsoletes.
# 21/10/2002: DFB: Detection d'invalidite geometrique R11 (avec Marie-Line)
# 07/04/2003: MAX: Ajout des FWs DataExchangeKernelItf & DataExchangeBaseRepsItf pour isolement des itfs XCAD
# 30/07/2003: DFB: Ajout de CATCGMGeoMath,CATMathStream CATConstraintModelerItf warning du compilo
# 02/12/2004: DFB: Ajout du module de CATTPSXCADInterfaces
# 08/01/2007: JHH: Suppression CATVioMMM
#======================================================================
#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE = SHARED LIBRARY


LINK_WITH_COMMON =  AC0XXLNK AD0XXBAS JS0CORBA VE0MDL AC0SPBAS\
	     CO0LSTPV YP00IMPL NS0S3STR YI00IMPL \
	     DataExchangeInfrastructure DataExchangeInfrastructureUI MF0STARTUP\
	     MecModItf BOOPER \
	     CD0FRAME\
		 JS0FM \
         PartAndNCGMDataExchange DXM2V5 \
		 CATLayersAndFilters CATMmiUUID PartItfCPP YN000MAT\
		 DataExchangeKernelItfCPP DataExchangeBaseRepsItfCPP \
		 CATCGMGeoMath CATMathStream CATConstraintModelerItf \

LINK_WITH = $(LINK_WITH_COMMON) CATInteractiveInterfaces CATViz \
			CATInteractiveInterfaces CATViz \
			VE0MDL CATTPSItf CATTPSUUID  \
			MecModItfCPP CATMechanicalModeler DraftingItfCPP CATConstraintModeler\
			CATGitInterfaces \
         	AS0STARTUP \	   							# ProductStructure
			CATExchange3DAnnotationCPP \				# CATTPSXCADInterfaces
         	CATXCADServices         \				   # CATXCADServices	
         	CATAxisBody			\
			XCADAnnotationDataExchange \
			CATTTRSItf CATTTRSUUID \
			KnowledgeItf \                       # pour le Knowledge
			#CATTPSXCADExport			\  				# CATTPSXCADExport			


OS = AIX

#
OS = HP-UX

#
OS = IRIX

#
OS = SunOS

#
OS = Windows_NT

#INSERTION ZONE NOT FOUND, MOVE AND APPEND THIS VARIABLE IN YOUR LINK STATEMENT
#LINK_WITH = ... $(WIZARD_LINK_MODULES) ...
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES =  \
PartDesignDataExchange
# END WIZARD EDITION ZONE
