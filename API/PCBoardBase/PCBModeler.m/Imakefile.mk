#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATVisUUID \
LiteralFeaturesUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
PCBoardBaseUUID \
ProductStructureUUID \
SketcherInterfacesUUID
#else
LINK_WITH_FOR_IID =
#endif
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= CATAdvancedTopologicalOpe \ # Added by CPT on Sept 3 2009 for CGM rearchitecture
$(LINK_WITH_FOR_IID)      JS0SCBAK JS0CORBA JS0STR JS03TRA JS0ERROR JS0DSPA \
                AD0XXBAS AC0XXLNK JS0CTYP \
                NS0S3STR\
                JS0DSPA \
                CK0FEAT \
                CO0LSTPV CO0RCINT\
                SpecsModeler AS0STARTUP \
                CATInfInterfaces CATProductStructureInterfaces \
				CATLifDictionary \
				CATPartInterfaces \
                PartItf MF0STARTUP SketcherItf MecModItfCPP \
                CATMathematics MF0GEOM VE0MDL \
                CATGitInterfaces CATSketcherInterfaces  \
                PCBServices YI00IMPL CATGeometricObjects  \
		        PRTUTILITY CATGmoIntegration \
	            CATPCBInterfaces PCBItf CD0WIN PCBSettings CD0SHOW CATGraphicProperties \
				PCBServices PCBoard BOHYBOPELight PrimitivesLight 

#
OS = AIX

# 
OS = HP-UX

#
OS = IRIX

#
OS = SunOS
SYS_INCPATH = -L/usr/dt/include -L/usr/openwin/include
SYS_LIBS = -lXm -lXt -lXmu -lX11 -lF77
SH_SYS_LIBS = $(SYS_LIBS)
SYS_LIBPATH =-L/usr/openwin/lib
SH_SYS_LIBPATH = $(SYS_LIBPATH)
#
OS = Windows_NT

