#
BUILT_OBJECT_TYPE = NONE

CXX_NOPERMISSIVE=YES

#
################
OS = COMMON
################
#
LINK_WITH = 

LOCAL_CCFLAGS=$(MKMK_DEBUG:+"-DPRINTSETUP_DEBUG")

#
OS = Windows_NT

LOCAL_POST_CCFLAGS=/EHsc /std:c++17 /DNOMINMAX 

OS = Linux
# CPT on 2020/11/12: to prevent to link with unresolved symbols
# set LOCAL_2NDLDFLAGS only if ( MKMK_GCC_SANITIZER does not exist or is empty )
LOCAL_2NDLDFLAGS=$(MKMK_GCC_SANITIZER:%-"-Wl,-z,defs ")

OS = Android
LOCAL_POST_CCFLAGS=-std=c++17

OS = iOS
LOCAL_POST_CCFLAGS=-std=c++17 -fexceptions
