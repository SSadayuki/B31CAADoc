BUILT_OBJECT_TYPE=NONE 
 
LINK_WITH = \
	CATCclContainer CATCuiViewController \	#ComponentsCatalogs
	CP0SPEC ObjectModeler \ 		#ObjectModelerBase
	SpecsModeler \			#ObjectSpecsModeler
	ApplicationFrame \		#ApplicationFrame
	JS0GROUP JS0FM \		#System
	CATGraph \			#Graph
	VE0MDL \			#Visualization
	AC0CATPL \			#ObjectModelerCATIA
	InfItf \			#InfInterfaces
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
