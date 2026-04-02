# COPYRIGHT DASSAULT SYSTEMES 2009
#======================================================================
# Imakefile for module CATMldUITechResUI.m
#======================================================================
#
# 02/02/2009 ysn: R19: Creation par copie
#======================================================================
#
# NONE 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH = AC0SPBAS \					# ObjectSpecsModeler
			AD0XXBAS \					# ObjectModelerBase
			AS0STARTUP \
			CATApplicationFrame  \		# ApplicationFrame
			CATGitInterfaces \
            CATInteractiveInterfaces \   #InteractiveInterfaces
            CATMechanicalModeler \			
            CATMecModInterfaces \       # MechModInterfaces
            CATMldTechnoResultItf  \    #CATMoldTechnoResultInterfaces
			CATMoldInterfaces \			# CATMoldInterfaces
            CATMathematics       \      # Mathematics
            CATTerTechnoResultItf \     #CATTechnoResultInterfaces
            CATTerTechnoResultInterfacesUUID \ #CATTechnoResultInterfaces
            CATTlgServices        \      #CATToolingServices
            CATTopologicalObjects  \    #NewTopologicalObjects
			CATVisualization \			# Visualization AJOUT LCH
			CATViz \					# VisualizationBase
			CD0FRAME \			# ApplicationFrame
			CD0WIN \
            CK0FEAT \							# LiteralFeatures AJOUT LCH
			DI0APPLI DI0STATE \		    # DialogEngine
			DI0PANV2 \					# Dialog
            DraftingItfCPP \
			JS0GROUP JS0FM JS0STR \		# System
			JS0SCBAK JS0CORBA NS0S3STR \ # System
            KnowledgeItf           \    # KnowledgeInterfaces
            MecModItfCPP \              # MechModInterfaces
            PartItf \
			YP00IMPL 
            
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
