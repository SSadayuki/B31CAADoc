# 08/06/06 : MMO : Ajout du module CATFrFSmoothing pour le lissage (MAZDA)
# 03/09/09 : MWE ajout de CATFrFFilletStyle avec TessAPI a partir de la R20 (avalanche)
# 17/09/12 : JSX : Utilisation de LINK_WITH_COMMON et INCLUDED_MODULES_COMMON
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#


LINK_WITH_COMMON = \
            JS0GROUP \
            CATMathematics \
            CATMathStream \
            CATGeometricObjects \
			CATGMGeometricInterfaces \
            CATCGMGeoMath \
            CATAdvancedMathematics \
            CATGeometricOperators \
            CATTopologicalObjects \
            CATFreeFormOperatorsFFit


INCLUDED_MODULES_COMMON = FrFAdvancedObjects FrFAdvancedOpeCrv FrFAdvancedOpeSur Extrude \
                          FrFAdvancedOpeUtil FrFFitting FrFObjects \
                          FrFOpeCrv FrFOpeSur FrFOpeUtil PowerFrFOperators FrFEquation FrFApprox \
                          CATFrFNetSurface CATFrFSmoothing FreeFormOpeItf 


#if defined CATIAV5R24 || defined CATIAR215

INCLUDED_MODULES = \
$(INCLUDED_MODULES_COMMON) \
  CATFrFFilletStyle Replay_FreeFormOperators Data_FreeFormOperators

LINK_WITH = \
         $(LINK_WITH_COMMON) \
         CATGMModelInterfaces \
         CATGMOperatorsInterfaces \
         TessAPI
#if defined CATIAV5R24
ALIASES_ON_IMPORT=CATFreeFormOperators CATGMModelInterfaces CATGMOperatorsInterfaces
#endif
#elif defined CATIAV5R20 || defined CATIAR208

INCLUDED_MODULES = \
$(INCLUDED_MODULES_COMMON) \
  CATFrFFilletStyle Replay_FreeFormOperators Data_FreeFormOperators

LINK_WITH = \
         $(LINK_WITH_COMMON) \
         CATGMModelInterfaces \
         CATGMOperatorsInterfaces \
         TessAPI \

ALIASES_ON_IMPORT=CATFreeFormOperators CATGMModelInterfaces CATGMOperatorsInterfaces

#else
INCLUDED_MODULES = \
             $(INCLUDED_MODULES_COMMON) \
             FrFGeodesic

LINK_WITH = \ 
      $(LINK_WITH_COMMON)
#endif

COMDYN=

OS = AIX
SYS_INCPATH =
SYS_LIBS =  -lxlf -lxlf90 -lxlfpad
SYS_LIBPATH =

OS = HP-UX
SYS_INCPATH =
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90
#endif                
SYS_LIBPATH =

OS = hpux_b64 
SYS_INCPATH =
#if os hpux_a
SYS_LIBS = -lf
#else
SYS_LIBS= -lF90 -lcps 
#endif                
SYS_LIBPATH =

OS = IRIX
SYS_INCPATH =
SYS_LIBS = -lftn
SYS_LIBPATH =
# +++ PR64
LOCAL_LDFLAGS=-LD_LAYOUT:multigot=on:mgot_threshold=0xe000
# +++ PR64

OS = SunOS
SYS_INCPATH =
SYS_LIBS = -lF77 -lM77
SYS_LIBPATH =
#
OS = Windows_NT
LOCAL_FFLAGS= /I $(LOCIPATH)
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#
