#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= NONE

LINK_WITH = KS0LATE KS0SIMPL   \
		CO0LSTPV CO0LSTST CO0HDICO CO0HTAB NS0S3STR JS0GROUP 

LOCAL_CCFLAGS= -D__EXTERN_C__  -DYYERROR_VERBOSE
LOCAL_BYFLAGS = -lv 
LOCAL_BYFLAGS = -p ssd
LOCAL_LFLAGS=-Cfe
# '-Cf' flex option added by JNI to prevent the flex-generated scanner from using REJECT, so we have proper input buffer resizing
# when a single token is larger than the input buffer. IR A0572919.


################
OS =AIX 
################
LOCAL_LDFLAGS = -brtl
