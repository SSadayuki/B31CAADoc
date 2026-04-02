#
# LOAD MODULE
# Ce module est déclaré LOAD MODULE, ce qui signifie que cela sera un exécutable. 
# Le compilateur créera un "main" avec tous les sources contenus dans le module
#


BUILT_OBJECT_TYPE=LOAD MODULE
PROGRAM_NAME=CATOptionsMgt

LINK_WITH = JS0FM JS0STR CATDialogEngine DI0PANV2 CD0FRAME \
			CATObjectModelerBase OM0EDPRO CATAutoItf \
			CATAfrLicensing

# Pour que la lib Xm soit chargée en premier
OS = SunOS
SYS_LIBS = -lXm

OS = Windows_NT
# BUILD=NO
MKMFC_DEPENDENCY = yes
LOCAL_LDFLAGS = $(SUB_WIN)

