# COPYRIGHT DASSAULT SYSTEMES 2007
#======================================================================
# Imakefile for module CATAnalyzeTechResUI.m
#======================================================================
#
#  10/04/2003 : fdm; Creation
#  17/12/2007 : lch; Add CATTerTechnoResult*
#  18/01/2008 : lch; Add YP00IMPL*
#======================================================================
#
# NONE 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
# END WIZARD EDITION ZONE

LINK_WITH = CD0WIN CD0FRAME \			# ApplicationFrame
			CATApplicationFrame  \		# ApplicationFrame
			CATMoldInterfaces \			# CATMoldInterfaces
			DI0PANV2 \					# Dialog
			DI0APPLI DI0STATE \		    # DialogEngine
			AD0XXBAS \					# ObjectModelerBase
			AC0SPBAS \					# ObjectSpecsModeler
			JS0GROUP JS0FM JS0STR \		# System
			JS0SCBAK JS0CORBA NS0S3STR \ # System
			YP00IMPL \					# 
			CATViz \					# VisualizationBase
            CATMecModInterfaces \       # MechModInterfaces
            MecModItfCPP \              # MechModInterfaces
            CATMldTechnoResultItf  \    #CATMoldTechnoResultInterfaces
            CATMathematics       \      # Mathematics
            KnowledgeItf           \    # KnowledgeInterfaces
            CATTopologicalObjects  \    #NewTopologicalObjects
            CATTlgServices        \      #CATToolingServices
            CATInteractiveInterfaces \   #InteractiveInterfaces
            CATTerTechnoResultItf \     #CATTechnoResultInterfaces
            CATTerTechnoResultInterfacesUUID \ #CATTechnoResultInterfaces
            CATMechanicalModeler \
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
