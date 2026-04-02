# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module CATCuiViewController
#======================================================================
# CREATED  4 Aug 1999 BY jgn
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=NONE

LINK_WITH = CATCclContainer \		#ComponentsCatalogs
			ObjectModeler \ 		#ObjectModelerBase
			SpecsModeler \			#ObjectSpecsModeler
			ApplicationFrame \		#ApplicationFrame
			JS0GROUP JS0FM \		#System
			CATGraph \			#Graph
			VE0MDL \			#Visualization
			AC0CATPL \			#ObjectModelerCATIA
			DI0PANV2 \			#Dialog
			CD0WIN CD0FRAME CD0SCCP \ 	#ApplicationFrame(CATApplicationFrame)
			DI0STATE DI0GRAF DI0APPLI \	#DialogEngine(CATDialogEngine)
			ON0FRAME CD0STWIN \		#CATIAApplicationFrame
			YN000MFL \  #Mathematics
			CATLiteralFeatures \	#LiteralFeatures
			CATPrint           \    #Print
			AC0ITEMS  #FileMenu


#
#
OS = AIX
 
#
#
OS = HP-UX

#
#
OS = IRIX 
 
#
#
OS = SunOS 

#
#
OS = Windows_NT 
