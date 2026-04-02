BUILT_OBJECT_TYPE = ARCHIVE
DELIVERABLE = NO
BUILD = NO

OS = intel_a
BUILD = YES
#if   (defined MK_MSCVER) && (MK_MSCVER >= 1900)
LOCAL_SRCPATH=intel_a/vc14.0
#else
LOCAL_SRCPATH=intel_a
#endif

OS = win_b
BUILD = YES

OS = win_b64
BUILD = YES
#if   (defined MK_MSCVER) && (MK_MSCVER >= 1900)
LOCAL_SRCPATH=win_b64/vc14.0
#else
LOCAL_SRCPATH=win_b64
#endif

OS = intel_a64
BUILD = YES
