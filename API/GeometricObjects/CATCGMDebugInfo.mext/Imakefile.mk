#
BUILT_OBJECT_TYPE = SHARED LIBRARY
#

BUILD=NO

OS=intel_a
BUILD=YES
#if (defined MK_MSCVER) && (MK_MSCVER == 1700)
  LOCAL_SRCPATH = intel_a/VC11
#elif (defined MK_MSCVER) && (MK_MSCVER >= 1900)
  LOCAL_SRCPATH = intel_a/VC14
#endif

OS=win_b64
BUILD=YES
#if (defined MK_MSCVER) && (MK_MSCVER == 1700)
  LOCAL_SRCPATH = win_b64/VC11
#elif (defined MK_MSCVER) && (MK_MSCVER >= 1900)
  LOCAL_SRCPATH = win_b64/VC14
#endif

OS=aix_a64
BUILD=YES
#if (defined MK_IBMVAVER) && (MK_IBMVAVER == 16)
  LOCAL_SRCPATH = aix_a64/V16
#else
  LOCAL_SRCPATH = aix_a64/V12
#endif

OS=aix_a
BUILD=YES

OS=linux_a64
BUILD=YES

OS=macos_a64
BUILD=YES
