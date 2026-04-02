# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module CATMldSettings.m
#======================================================================
#
#  03/08/2000 : fdm; Creation 
#  05/12/2000 : fdm; Ajout CATDlgStandard
#  09/08/2001 : fdm; Suppression reference inutile
#  08/10/2001 : fdm; Ajout CATMoldInterfaces
#  08/11/2002 : fdm; Ajout CATMldServicesUI (en attendat reorganisation)
#  09/07/2003 : fdm; R13: IF Tooling Parameter
#  01/12/2003 : lch; R14: Add AC0ITEMS
#  24/12/2003 : juw; R14: Add JS0SMT
#  27/04/2004 : lch; R14: JS0SMT pour NT uniquement
#  25/04/2007 : mlh; R17: KnowledgeItf et CATLiteralFeatures
#  24/01/2008 : ffj; R19: SETTING "Select Top Component" >> CATToolingItf
#======================================================================
#
# NONE 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = 
# END WIZARD EDITION ZONE

LINK_WITH = $(LINK_WITH_SPECIFICS) \		
			SELECT \							# CATIAApplicationFrame
			AC0ITEMS \							# FileMenu
			CATMoldItf \						# CATMoldInterfaces
			CATTlgServices \					# CATToolingServices
			CATToolingItf \						# CATToolingInterfaces			
			CATMldServicesUI \					# CATMoldDesignUI
			DI0PANV2 CATDlgStandard \			# Dialog
			AD0XXBAS \							# ObjectModelerBase
			JS0GROUP JS0FM JS0STR \				# System
			JS0SCBAK JS0CORBA NS0S3STR\  		# System
			KnowledgeItf\                       # KnowledgeInterfaces 
			CATLiteralFeatures

SH_LINK_WITH= $(LINK_WITH)

LINK_WITH_SPECIFICS=

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
LINK_WITH_SPECIFICS = JS0SMT
