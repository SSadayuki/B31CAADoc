BUILT_OBJECT_TYPE = RUNTIME DATA
BUILD = NO

OS = aix_a64
BUILD = YES
#if (defined MK_IBMVAVER) && (MK_IBMVAVER == 12)
RTV_ROOT_SRCPATH = CNext.specifics_$(MkmkOS_Buildtime)_XLC_12
#else
RTV_ROOT_SRCPATH = CNext.specifics_$(MkmkOS_Buildtime)_XLC_16
#endif
