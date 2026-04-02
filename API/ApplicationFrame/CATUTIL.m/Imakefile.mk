#
# LOAD MODULE
#

BUILT_OBJECT_TYPE=LOAD MODULE

PROGRAM_NAME=CATUTIL

LINK_WITH = JS0FM JS0STR  DI0PANV2 CD0FRAME BatchMonitor \
            CATBatchUtils CATBatCliMonitor CATBatProtocol \
            CATSysCommunication LicensingFR AC0XXLNK

DESCRIPTION = "V5 Batch Management"

# Pour que la lib Xm soit chargée en premier
OS = SunOS
SYS_LIBS = -lXm

OS = Windows_NT
# BUILD=NO
MKMFC_DEPENDENCY = yes
LOCAL_LDFLAGS = $(SUB_WIN)

