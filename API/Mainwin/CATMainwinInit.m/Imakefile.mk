#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

OS = solaris_a
LINK_WITH = advapi32 coolmisc ntrtl rpcrt4 ole32 oleaut32 mw32

OS = aix_a
LINK_WITH = advapi32 coolmisc ntrtl rpcrt4 ole32 oleaut32 mw32 msvcrt kernel32 gdiuser32 uuid
LOCAL_LDFLAGS=-brtl 
LOCAL_CFLAGS=-DVISUAL_MAINWIN_5
LOCAL_CCFLAGS=-DVISUAL_MAINWIN_5
# With Visual Mainwin 5, we cannot deliver this shared lib built with mkmk since
# we have to deploy it in order to remove the prerequisite on the Mainwin license server
# See file src/HowToDeploy.txt for documentation on how to deploy this shared lib
BUILD = NO

OS = aix_a64
LINK_WITH = olepro32 ole2ui comdlg32 shell32 shlwapi oleaut32 ole32 rpcrt4 advapi32 uuid msvcrt gdiuser32 advapi32 kernel32
LOCAL_LDFLAGS=-brtl -bnortllib
LOCAL_CFLAGS=-DVISUAL_MAINWIN_5
LOCAL_CCFLAGS=-DVISUAL_MAINWIN_5
# With Visual Mainwin 5, we cannot deliver this shared lib built with mkmk since
# we have to deploy it in order to remove the prerequisite on the Mainwin license server
# See file src/HowToDeploy.txt for documentation on how to deploy this shared lib
BUILD = NO

OS = HP-UX
LINK_WITH = olepro32 ole2ui comdlg32 shell32 shlwapi oleaut32 ole32 rpcrt4 advapi32 uuid msvcrt gdiuser32 advapi32 kernel32 
LOCAL_CFLAGS=-DVISUAL_MAINWIN_5
LOCAL_CCFLAGS=-DVISUAL_MAINWIN_5
# With Visual Mainwin 5, we cannot deliver this shared lib built with mkmk since
# we have to deploy it in order to remove the prerequisite on the Mainwin license server
# See file src/HowToDeploy.txt for documentation on how to deploy this shared lib
BUILD = NO

OS = irix_a
LINK_WITH = advapi32 coolmisc ntrtl rpcrt4 ole32 oleaut32 mw32

OS = intel_a
BUILD = NO

OS = win_b
BUILD = NO

OS = win_b64
BUILD = NO

OS = intel_a64
BUILD = NO

OS = win_a
BUILD = NO

OS = linux_a
LINK_WITH = advapi32 coolmisc ntrtl rpcrt4 ole32 oleaut32 mw32

OS = irix_a64
BUILD = NO

OS = hpux_b64
BUILD = NO

OS = linux_a64
BUILD = NO
