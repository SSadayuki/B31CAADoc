#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
InfInterfacesUUID \
NavigatorInterfacesUUID \
ProductStructureInterfacesUUID \
ProductStructureUUID \
SimulationInterfacesUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = CATDMUController CATDMUGroup

LINK_WITH=$(LINK_WITH_FOR_IID)            \
			JS0FM                         \
			JS0ZLIB                       \
            AD0XXBAS                      \
			CD0FRAME                      \
			CD0AUTO CATInfInterfaces      \ # for CATIASelectionImpl
			DI0PANV2                      \
            VE0BASE                       \
            CATViz                        \
			YN000MFL                      \
			AC0SPBAS                      \
			DI0STATE                      \
			ON0FRAME                      \
			ON0GRAPH                      \
			AS0STARTUP                    \
            CATProductStructureInterfaces \
			SimulationItf                 \
            CATNavigatorItf               \
			CATSimulationBase             \
			O20COLLI                      \
			CATDynClash                   \
            CATPrsRep                     \
            CATVisHCG                     \
            CATMecModInterfaces           \
			JS0STDLIB                     \
			CATGraphicProperties          \
			OSMInterfacesItf              \
            SpaceAnalysisItf              \
			CATMeasureGeometryInterfaces  \
			CATVoxelServices              \
			CATNavigator2Itf              \
			CATMathStream                 \
			CATDMUPersistency             \
            ProcessInterfaces             \ # for CATINavigateObjectPPR
            TECHNLNK                      \ # for CATTechnoRootExt
			CATSimVoxelServices		      \ # for CATSimVoxelOperators
			CATLightXml                   \ # pour 3DXML
			CAT3DXmlInterfaces            \ # pour 3DXML
			CAT3DXmlLightBaseServices	  \ # pour 3DXML
			CAT3DXmlBaseServices		  \ # pour 3DXML
			CATBinaryXml				  \ # pour 3DXML
			CATFeatObjects                \ # pour 3DXML
			XMLParserItf     \
			AS0STARTUP      
			
OS = AIX
SYS_LIBS = -lXt -lX11

OS = HP-UX
SYS_LIBS = -lXt -lX11

OS = IRIX
SYS_LIBS = -lXt -lX11 

OS = SunOS
SYS_LIBS = -lXt -lX11

