#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = CATAsdJointItfUUID \
					CATAnalysisInterfacesUUID \
					CATAnalysisConnectionUUID \
					SystemUUID \ 
					CATVisUUID \ 
					CATMatInterfacesUUID
#else
LINK_WITH_FOR_IID = CATAsdJointItfUUID \
				    CATAnalysisConnectionUUID \
					SystemUUID \ 
					CATMatInterfacesUUID
#endif
# 
# MODULE for Analysis datas in Material library
# 
#---------------------------------------
BUILT_OBJECT_TYPE = SHARED LIBRARY
INCLUDED_MODULES = CATCACModel \
				   CATCACInterfaces \
				   CATCACToolkit

#---------------------------------------
#
OS = COMMON

LINK_WITH= $(LINK_WITH_FOR_IID) JS0STR JS03TRA JS0LIB0 \
	 JS0ERROR \
	 ListImpl \
	 NS0S3STR \
	 CO0LSTPV CO0RCINT \
	 ON0GREXT ON0MAIN \
	 CATObjectModelerBase \
	 CATObjectSpecsModeler \
	 CATAnalysisInterface\
	 CATProductStructure1\
	 CATGeometricObjects \
	 CATGeometricOperators \
	 CATMathematics \
	 CATVisualization \
	 CATMecModInterfaces \
	 CATMechanicalModeler \
	 CATTopologicalObjects \
	 CATAmtModel \
	 CATMatModel \
	 CATMatInterfaces \
	 #JS0FM \
	 CATGitInterfaces \
	 CATAnalysisToolkit \
	 
#---------------------------------------
#

#
OS = AIX
SYS_INCPATH =
SYS_LIBPATH =
SYS_LIBS =
 
#
#
OS = HP-UX
SYS_INCPATH =
SYS_LIBPATH = 
SYS_LIBS =

#
#
OS = IRIX 
SYS_INCPATH =
SYS_LIBPATH =
SYS_LIBS =
 
#
#
OS = SunOS 
SYS_INCPATH =
SYS_LIBPATH =
SYS_LIBS =

#
#
OS = Windows_NT 


