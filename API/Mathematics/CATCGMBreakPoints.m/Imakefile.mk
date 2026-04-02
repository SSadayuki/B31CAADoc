#
BUILT_OBJECT_TYPE = NONE
#
OS = Windows_NT
#if os win_b64
### A VOIR AVEC ABI !!! ###
### OPTIMIZATION_CPP = /GL /Ox
LOCAL_CCFLAGS    = /D_NOPRECOMPIL
### LOCAL_LDFLAGS    = /LTCG
#else
### A VOIR AVEC EB !!! mode debug obligatoire pour efficience breakpoints ###
OPTIMIZATION_CPP = /Od
#endif
#
