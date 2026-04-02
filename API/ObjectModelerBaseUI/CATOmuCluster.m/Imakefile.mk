#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

OS = COMMON

LINK_WITH = JS0GROUP                 \ # CATBaseUnknown & co
            CATOmiClusterItf         \ # cluster interfaces
            CATOmuItf                \ # OMB UI interfaces
            CATOmbCluster            \ # OMB cluster implementation
            VE0MDL			 \ # Visu implementation
            CATViz			 \ # Visu interfaces 
            CATInteractiveInterfaces \ # CATIFmuUnloadFilter itf
            CATIAApplicationFrame    \ # CATINavigateObjectModify itf
			CATOmbTom				 \ # TOMComponentId services
			AC0SPBAS				 \ # OSM services

	

