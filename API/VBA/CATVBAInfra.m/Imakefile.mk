
# -JBX 3.2012 VBA7 Migration 
# # This module is a 32_bit Windows Dll used for integration of VBA in both
# # CATIA 32-bit (in-process integration) and CATIA 64-bit (out-process integration
# # with the 32-bit CATVBAHostingApplication executable)
# This module is a Windows Dll used for both in-process integration of VBA in both
# CATIA 32-bit and CATIA 64-bit 

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = VBAUUID

OS = intel_a
LOCAL_CCFLAGS = /GX -D_ATL_APARTMENT_THREADED

OS = win_b
LOCAL_CCFLAGS = /GX -D_ATL_APARTMENT_THREADED

OS = win_a
LOCAL_CCFLAGS = /GX -D_ATL_APARTMENT_THREADED

#ifdef CATIAV5R24
# New options
OS = win_b64
LOCAL_CCFLAGS = /GX -D_ATL_APARTMENT_THREADED
#else
# Old options
OS = win_b64
BUILD = NO
#endif

OS = SunOS
BUILD = NO

OS = AIX
BUILD = NO

OS = HP-UX
BUILD = NO

OS = IRIX
BUILD = NO

OS = Linux
BUILD = NO
