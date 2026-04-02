#
BUILT_OBJECT_TYPE=ARCHIVE
#
DELIVERABLE=NO
BUILD=NO
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33

OS=intel_a
BUILD=YES
#if (defined MK_MSCVER) && (MK_MSCVER >= 1900) && defined (MK_ORBIXCPP33)
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/VC14
#else
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33
#endif

OS=win_b
BUILD=YES

OS=win_a
BUILD=YES

OS=win_b64
BUILD=YES
#if (defined MK_MSCVER) && (MK_MSCVER >= 1900) && defined (MK_ORBIXCPP33)
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/VC14
#else
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33
#endif
