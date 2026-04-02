BUILT_OBJECT_TYPE=LOAD MODULE

#ifdef MK_ORBIXCPP33

# delivered through an CNext.specifics_hpux
OS=aix_a
PROGRAM_NAME=liborbix.3.3.va50.so

OS=aix_a64
#if (defined MK_IBMVAVER) && (MK_IBMVAVER == 16)
#LOCAL_SRCPATH=$(MkmkOS_Buildtime)/Orbix33/XLC16
#PROGRAM_NAME=liborbix.3.3.xl161.so
PROGRAM_NAME=liborbix.3.3.va60.so
#else
PROGRAM_NAME=liborbix.3.3.va60.so
#endif

OS=hpux_b
PROGRAM_NAME=liborbix.3.3.aCC.1

OS=solaris_a
PROGRAM_NAME=liborbix.3.3.forte8.so.1

OS=intel_a
BUILD=NO

OS=win_b64
BUILD=NO

#else
BUILD=NO
#endif

