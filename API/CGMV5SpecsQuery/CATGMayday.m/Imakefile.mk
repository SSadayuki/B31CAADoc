#   ppp 10/2009, solve afx link errors (VC9, win64)
MKMFC_DEPENDENCY=yes

BUILT_OBJECT_TYPE=LOAD MODULE

LINK_WITH = JS0GROUP JS0FM CATObjectModelerBase \
            CATMathematics  CATMathStream \
            CATGMModelInterfaces CATGeometricObjects \
           DI0PANV2 CATVisualization  CATTechTools

OS = AIX

OS = IRIX

OS = HP-UX

OS = SunOS

OS = Windows_NT

LOCAL_LDFLAGS=$(SUB_WIN)
