#
BUILT_OBJECT_TYPE = NONE
#

#
OS = Windows_NT
#if os win_b64
### modifications                M1H 01/04/20  livraison V5/V6 NLD22/05/20
### puis desactivation  (demande IK8 02/07/20) livraison V5/V6 NLD02/07/20
### #if defined(MK_MSCVER) && (MK_MSCVER >= 1924)
### CPP_EXCEPT= 
### #endif
#
### A VOIR AVEC ABI !!! ###
### OPTIMIZATION_CPP = /GL /Ox
LOCAL_CCFLAGS    = /D_NOPRECOMPIL
### LOCAL_LDFLAGS    = /LTCG
#else
OPTIMIZATION_CPP = /O2
#endif
#
