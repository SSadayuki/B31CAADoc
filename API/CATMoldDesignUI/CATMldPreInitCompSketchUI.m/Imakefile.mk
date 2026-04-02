# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CAADiePreInitCompSkechUI.m
#======================================================================
#
#  10/04/2003 : fdm; Creation
#======================================================================
#
# NONE 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
# END WIZARD EDITION ZONE

LINK_WITH = CD0WIN CD0FRAME \			# ApplicationFrame
			CATApplicationFrame  \		# ApplicationFrame
			CATAssCouMdl \				# Assembly 
			CATMoldInterfaces \			# CATMoldInterfaces
			CATTlgServices \			# CATToolingServices
			CATMldComponentUI \			# CATMoldDesignUI
			DI0PANV2 \					# Dialog
			DI0APPLI DI0STATE \		    # DialogEngine
			CATCGMGeoMath YP00IMPL \	# GeometricObjects
			CATGitInterfaces \			# GSMInterfaces 
			KnowledgeItf \				# KnowledgeInterfaces
			CK0FEAT \					# LiteralFeatures
			MF0STARTUP \				# MechanicalModeler
			CATMathematics \			# Mathematics
			AD0XXBAS \					# ObjectModelerBase
			AC0SPBAS \					# ObjectSpecsModeler
			ProductStructureItf \		# ProductStructureInterfaces
			PRDCommands \				# ProductStructureUI
			AS0STARTUP \				# ProductStructure
			JS0GROUP JS0FM JS0STR \		# System
			JS0SCBAK JS0CORBA NS0S3STR \ # System
			CATViz \					# VisualizationBase
         CATConstraintModeler \
         CATConstraintModelerItf \
         CATMecModInterfaces \
         CATMathStream \
         SketcherItf \						# SketcherInterfaces
         YI00IMPL \
         CATFileMenu \				# CATFileMenu
			 

					


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
