# ----------------------------------------------------------------
# Arrangement Work bench - shared by PSL, SSR and LND workbenches
#
# WARNINGS: We must keep this module as "light" as possible
# VSO 8/99
# ----------------------------------------------------------------

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH= CD0FRAME JS0CORBA AD0XXBAS DI0PANV2 CK0FEAT JS0FM AC0SPBAS JS0SCBAK ArrUIInterfaces \
		   CATArrangementInterfacesUUID CATPrsWksPRDWorkshop \
           CATAssWkbAssembly JS0CATLM \
		   CATProductStructureInterfaces AS0STARTUP CATViz CATEsuUtil ArrArrangementInterfaces ArrUtility \
		   CATArrangementItfCPP

#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_IID=CATArrangementUIUUID
#else
LINK_WITH_IID=
#endif

# ---------------------------------------------------------------- 
# JUSTIFICATION:
# ----------------------------------------------------------------
# CD0FRAME : CATCommandHeader 
# JSOCOBRA : CATBaseUnknown_var for CATArrLicenseHeader
# AD0XXBAS : CATLISTV_CATBaseUnknown for CATArrComboHeader
# DI0PANV2 : CATDlgCombo for CATArrComboHeader
# CK0FEAT  : CATICkeMagnitude and CATICkeUnit for CATArrComboHeader
# JSOFM    : CATCommand for CATArrComboHeader
# AC0SPBAS : CATISpecObject for CATArrComboHeader
# JS0SCBAK : CATNotification for CATArrSnapModeNotification
# ArrUIInterfaces
#          : CATIDimMode_var for CATArrDimModeOptHeader
# CATArrangementInterfacesUUID:  CATArrManipulationModeOptHeader
# JS0CATLM : ArrGenDesignHeaders.h to check for FW avaliability
# ArrArrangementInterfaces : CATIArrVisuData
# ----------------------------------------------------------------

OS = COMMON
