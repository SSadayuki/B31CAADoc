#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
BUILD=NO

#ifdef MK_ORBIXCPP33
OS=intel_a
#if (defined MK_MSCVER) && (MK_MSCVER >= 1900)
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/VC14
#elif (defined MK_MSCVER) && (MK_MSCVER >= 1700)
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/VC11
#endif
BUILD=YES

OS=win_b64
#if (defined MK_MSCVER) && (MK_MSCVER >= 1900)
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/VC14
#elif (defined MK_MSCVER) && (MK_MSCVER >= 1700)
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/VC11
#else
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33
#endif
BUILD=YES

#else
#endif
