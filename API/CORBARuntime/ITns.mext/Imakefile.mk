#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
BUILD=NO
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33

OS=hpux_b
BUILD=YES

OS=intel_a
BUILD=YES
#if (defined MK_MSCVER) && (MK_MSCVER >= 1900) && defined (MK_ORBIXCPP33)
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/VC14
#else
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33
#endif

OS=win_b64
BUILD=YES
#if (defined MK_MSCVER) && (MK_MSCVER >= 1900) && defined (MK_ORBIXCPP33)
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/VC14
#else
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33
#endif

OS=aix_a
BUILD=YES
LIBRARY_NAME=ITns.so

OS=aix_a64
#if (defined MK_IBMVAVER) && (MK_IBMVAVER == 16) && defined (MK_ORBIXCPP33)
LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/XLC16
#endif
BUILD=YES
LIBRARY_NAME=ITns.so
