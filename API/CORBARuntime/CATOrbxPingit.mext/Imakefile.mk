BUILT_OBJECT_TYPE=LOAD MODULE
PROGRAM_NAME=pingit
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33

OS=intel_a
#if (defined MK_MSCVER) && (MK_MSCVER >= 1900)
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/VC14
#elif (defined MK_MSCVER) && (MK_MSCVER >= 1700)
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/VC11
#endif

OS=win_b64
#if (defined MK_MSCVER) && (MK_MSCVER >= 1900)
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/VC14
#elif (defined MK_MSCVER) && (MK_MSCVER >= 1700)
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/VC11
#endif

OS=aix_a64
#if (defined MK_IBMVAVER) && (MK_IBMVAVER == 16)
#LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/XLC16
#endif
