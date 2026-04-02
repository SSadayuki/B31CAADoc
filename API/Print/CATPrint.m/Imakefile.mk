#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATIAApplicationFrameTstUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# Print
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  JS0GROUP JS0FM CATVisualization CATViz DI0PANV2 CATMathematics YN000FUN CATMMediaAudio CATMMediaBase CATMMediaImage CATMMediaCapture CATMMediaImageDialog CATPrtBase HRV HLRProject HLRModele V4SysMEM CATDlgStandard 

INCLUDED_MODULES = PG0GROUP PG0BASE PG0DLG

ALIASES_ON_IMPORT = CATPrint CATPrt

OS = AIX

OS = HP-UX

OS = IRIX

OS = SunOS

OS = Windows_NT
#SYS_LIBS = gdiplus.lib

# Added by AVX to introduce /Wp64 option to determine 64 bit level warnings - 30Jun03
OS = intel_a64
#LOCAL_CCFLAGS = /Wp64  
#LOCAL_CFLAGS = /Wp64 

