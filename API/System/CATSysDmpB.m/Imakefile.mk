#
# LOAD MODULE
#

BUILT_OBJECT_TYPE=LOAD MODULE

LINK_WITH =  CATSysProxy JS0FM JS0GROUP


BUILD=NO

##/CD0FRAME BatchMonitor \
##            //CATBatchUtils CATBatCliMonitor CATBatProtocol \
##            CATSysCommunication LicensingFR

DESCRIPTION = "V5 Batch Management"

# Pour que la lib Xm soit chargée en premier
OS = SunOS
SYS_LIBS = -lXm

OS = Windows_NT
BUILD=YES
LOCAL_LDFLAGS = $(SUB_CON)

