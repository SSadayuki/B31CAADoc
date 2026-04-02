# 
# BIG MODULE OF CATV4System
# 
#---------------------------------------
BUILT_OBJECT_TYPE = NONE
#---------------------------------------
#
#---------------------------------------
#INCLUDED_MODULES = V4SysB V4SysENV  V4SysLMCALL V4SysMEM V4SysUTIL
INCLUDED_MODULES = V4SysB V4SysANL V4SysENV V4SysFILE V4SysLMCALL V4SysMEM V4SysUTIL
#---------------------------------------
COMDYN_MODULE = V4SysCOMD
#
IMPACT_ON_IMPORT = YES
#
#---------------------------------------
OS = COMMON
#---------------------------------------
SYS_LIBPATH = 
LINK_WITH = JS0LIB0

#---------------------------------------
OS = AIX
#---------------------------------------
SYS_LIBS = -lxlf -lxlf90 -lxlfpad
LOCAL_CFLAGS = -D_AIX_SOURCE

#---------------------------------------
OS = IRIX
#---------------------------------------
SYS_LIBS = -lftn
LINK_WITH = $(COMDYN_MODULE) JS0LIB0

#---------------------------------------
OS = HP-UX
#---------------------------------------
SYS_LIBS = -lf

#---------------------------------------
OS = SunOS
#---------------------------------------
SYS_LIBS = -lF77

#---------------------------------------
OS = Windows_NT
#---------------------------------------
LOCAL_CCFLAGS = /D_CATNoWarningPromotion_  
LOCAL_CFLAGS = /D_CATNoWarningPromotion_ 

LOCAL_LDFLAGS = /EXPORT:abend \
/EXPORT:abexit____no_exp_ \
/EXPORT:crcchn \
/EXPORT:crccnv \
/EXPORT:crccop \
/EXPORT:crcdeg____no_exp_ \
/EXPORT:crcent \
/EXPORT:crcflt \
/EXPORT:crcind \
/EXPORT:crcinv \
/EXPORT:crcmac \
/EXPORT:crcomp \
/EXPORT:crcpou____no_exp_ \
/EXPORT:crcsup \
/EXPORT:crctas \
/EXPORT:crie____no_exp_ \
/EXPORT:cript____no_exp_ \
/EXPORT:crkgeo \
/EXPORT:crksup \
/EXPORT:dat2000 \
/EXPORT:dater \
/EXPORT:dater0____no_exp_ \
/EXPORT:datget \
/EXPORT:dcrypt____no_exp_ \
/EXPORT:errnoh \
/EXPORT:etatpil \
/EXPORT:extvs \
/EXPORT:bcnv \
/EXPORT:flaecr \
/EXPORT:flalec \
/EXPORT:geajdtf____no_exp_ \
/EXPORT:geajltf____no_exp_ \
/EXPORT:geanecf____no_exp_ \
/EXPORT:geanerf____no_exp_ \
/EXPORT:gecalnf____no_exp_ \
/EXPORT:gecevdf____no_exp_ \
/EXPORT:gechdtf____no_exp_ \
/EXPORT:gechltf____no_exp_ \
/EXPORT:gecrcmf____no_exp_ \
/EXPORT:gecrdif \
/EXPORT:gecrdmf____no_exp_ \
/EXPORT:gecrdof \
/EXPORT:gecrdsf____no_exp_ \
/EXPORT:gecremf____no_exp_ \
/EXPORT:gecrerf \
/EXPORT:gecretf \
/EXPORT:gecridf____no_exp_ \
/EXPORT:gecrldf____no_exp_ \
/EXPORT:gecrplf____no_exp_ \
/EXPORT:gedecef____no_exp_ \
/EXPORT:gededtf____no_exp_ \
/EXPORT:gedeerf \
/EXPORT:gedeldf____no_exp_ \
/EXPORT:gedellf____no_exp_ \
/EXPORT:gedeltf____no_exp_ \
/EXPORT:geecdtf____no_exp_ \
/EXPORT:gefncef____no_exp_ \
/EXPORT:gefnllf____no_exp_ \
/EXPORT:gefnltf____no_exp_ \
/EXPORT:gefnplf \
/EXPORT:geinplf____no_exp_ \
/EXPORT:gellvdf____no_exp_ \
/EXPORT:geltvdf____no_exp_ \
/EXPORT:gemjdof \
/EXPORT:gemjdtf \
/EXPORT:gemjerf \
/EXPORT:gemjldf____no_exp_ \
/EXPORT:gemjltf____no_exp_ \
/EXPORT:gemjrgf \
/EXPORT:gepiler \
/EXPORT:geplvdf \
/EXPORT:gerecmf____no_exp_ \
/EXPORT:gereeef____no_exp_ \
/EXPORT:gereenf____no_exp_ \
/EXPORT:gereerf \
/EXPORT:gereidf \
/EXPORT:gerergf \
/EXPORT:gesztyf____no_exp_ \
/EXPORT:getyldf____no_exp_ \
/EXPORT:getyltf____no_exp_ \
/EXPORT:gevetyf____no_exp_ \
/EXPORT:i2abs \
/EXPORT:iaddr \
/EXPORT:ideca1 \
/EXPORT:ideca2____no_exp_ \
/EXPORT:ideca4 \
/EXPORT:ideca8 \
/EXPORT:imnidt \
/EXPORT:incal \
/EXPORT:incal2____no_exp_ \
/EXPORT:indec \
/EXPORT:intajo____no_exp_ \
/EXPORT:intaut \
/EXPORT:intsup____no_exp_ \
/EXPORT:invbi2 \
/EXPORT:invtab \
/EXPORT:kictri \
/EXPORT:kjdata \
/EXPORT:mntver____no_exp_ \
/EXPORT:multur \
/EXPORT:pentree____no_exp_ \
/EXPORT:randu \
/EXPORT:raztr8 \
/EXPORT:sincal____no_exp_ \
/EXPORT:sorchn \
/EXPORT:sori2 \
/EXPORT:sori4 \
/EXPORT:sorr8 \
/EXPORT:suri4 \
/EXPORT:tassin \
/EXPORT:temini \
/EXPORT:temps \
/EXPORT:tramin \
/EXPORT:writez  \
/EXPORT:giuclo \
/EXPORT:giuope \
/EXPORT:giutrs \
/EXPORT:lmcall \
/EXPORT:lmcalc \
/EXPORT:lmdel \
/EXPORT:alpatt \
/EXPORT:depatt \
/EXPORT:meminf \
/EXPORT:altes  \
/EXPORT:altver \
/EXPORT:altlis \
/EXPORT:dates  \
/EXPORT:detes \
/EXPORT:accpil \
/EXPORT:depile \
/EXPORT:empile \
/EXPORT:finpil \
/EXPORT:inipil \
/EXPORT:infpil \
/EXPORT:lecpil \
/EXPORT:modpil \
/EXPORT:vidpil \
/EXPORT:envfre \
/EXPORT:envget \
/EXPORT:envinq 
