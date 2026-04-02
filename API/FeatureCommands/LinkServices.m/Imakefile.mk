#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= NONE


INCLUDED_MODULES = EditLinks \
		   Insert

LINK_WITH = ObjectModeler SpecsModeler  \
			ApplicationFrame\
			CATFileMenu\
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
			VE0MDL  \
			ON0GREXT ON0MAIN DI0PANV2  \
			CD0WIN	 \
			YN000M2D\
			CAPPFRM\
			DI0STATE
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


