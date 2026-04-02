BUILT_OBJECT_TYPE=NONE 
 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = 
# END WIZARD EDITION ZONE


LINK_WITH = $(WIZARD_LINK_MODULES) \
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
	ON0FRAME CD0STWIN CATCafAutostart \		#CATIAApplicationFrame
	CATLiteralFeatures \		#LiteralFeatures
	YN000M2D \			#Mathematics
	CATLiteralsEditor \		#LiteralsEditor


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
