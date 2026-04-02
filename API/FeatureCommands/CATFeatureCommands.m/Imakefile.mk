#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
FeatureCommandsUUID \
FileMenuUUID \
ObjectModelerBaseUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

 
INCLUDED_MODULES = LinkServices CATFecEditLinks CATFecServices\
		   Insert CATFecWksDeskWorkshop Desk CATFecMigrLinks

LINK_WITH=$(LINK_WITH_FOR_IID)  ObjectModeler SpecsModeler  \
		ApplicationFrame\
         CATFileMenu CATFmuLinks \
		 CATInteractiveInterfaces CATFecFeatPropEdit\
			CO0LSTPV \
			CO0LSTST \
			CO0RCINT \
			JS03TRA  \
			JS0CORBA \
			JS0ERROR \
			JS0FM    \
			JS0SCBAK \
			JS0SETT  \
			JS0LIB0  \
			JS0STR   \
			NS0S3STR \
	      	JS0INF \
			JS0FILE \
			VE0MDL CATViz  \
			ON0GRAPH ON0GREXT ON0MAIN DI0PANV2  \
			CD0WIN	 \
			YN000M2D CATMathStream \
			CAPPFRM\
			DI0STATE AC0SPBAS CATClnBase DataAdmin \
			KnowledgeItf CK0PARAM CATOmbDocAttributes \
			CATOmiClusterItf
#

SH_LINK_WITH= $(LINK_WITH)

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
SYS_LIBS = OleDlg.lib 


