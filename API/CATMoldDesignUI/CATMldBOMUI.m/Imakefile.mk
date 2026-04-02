# COPYRIGHT DASSAULT SYSTEMES 2009
#======================================================================
# Imakefile for module CATMldBOMUI.m
#======================================================================
#
#  01/10/2009 : lch; Creation
#======================================================================
#
# NONE 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
# END WIZARD EDITION ZONE

LINK_WITH = AS0STARTUP \					# ProductStructure
			CD0WIN CD0FRAME \				# ApplicationFrame
			CATApplicationFrame  \			# ApplicationFrame
			CATMldNotif \
			CATMoldInterfaces \				# CATMoldInterfaces
			CATMldServicesUI \				# CATMldServicesUI
			CK0FEAT \						# LiteralFeatures
			DI0PANV2 \						# Dialog
			DI0APPLI DI0STATE \				# DialogEngine
			AD0XXBAS \						# ObjectModelerBase
			AC0SPBAS \						# ObjectSpecsModeler
			JS0GROUP JS0FM JS0STR \			# System
			JS0SCBAK JS0CORBA NS0S3STR \	# System
			YP00IMPL \						# 
			CATFileMenu\
			CATViz \						# VisualizationBase
            MecModItfCPP \					# MechModInterfaces
            KnowledgeItf           \		# KnowledgeInterfaces
            CATTopologicalObjects  \		# NewTopologicalObjects
            CATTlgServices        \			# CATToolingServices
            CATInteractiveInterfaces \		# InteractiveInterfaces
            CATMechanicalModeler \
			CATVisualization \				# Visualization
			CATViz \						# VisualizationBase
			ProductStructureItf \			# ProductStructureInterfaces
            PartItf
            
			 

					


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

