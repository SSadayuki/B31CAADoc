BUILT_OBJECT_TYPE=SHARED LIBRARY
BUILD=NO

SYS_LIBS=netapi32.lib wsock32.lib comsuppw.lib oleaut32.lib ole32.lib Wbemuuid.lib

NT_LUM = i4clnt_st_mt i4nsi i4net i4cmn i4rpci i4ipcc rpgrl i4dce32
LINK_WITH = $(NT_LUM)
#if (defined MK_MSCVER) && (MK_MSCVER >= 1400)
LOCAL_LDFLAGS = /NODEFAULTLIB:msvcirt.lib /NODEFAULTLIB:libcmt.lib 
#endif

#
OS = win_b64
CXX_EXCEPTION =
LOCAL_LDFLAGS = /NODEFAULTLIB:msvcirt.lib /NODEFAULTLIB:libcmt.lib 
BUILD=NO

#
OS = AIX
BUILD=NO

#
OS = HP-UX
BUILD=NO

#
OS = IRIX
BUILD=NO

#
OS = SunOS
BUILD=NO

#
OS = alpha_a
BUILD=NO
