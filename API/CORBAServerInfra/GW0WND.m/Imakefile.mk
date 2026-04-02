#
#
#  Demon de gestion des multiserver X ( Sun )
#  ------------------------------------------
#   Permet de gerer plusieurs cartes graphiques et donc plusieurs
#  server X sur la meme machine.
#   Le lancement de ce demon associe a la presence de plusieurs cartes
#  graphique permet le lancement de plusieurs centaines de serveurs
#  sur la meme machine.
#

#
BUILT_OBJECT_TYPE = LOAD MODULE
#

LINK_WITH = 


OS = AIX
BUILD = NO

OS = HP-UX
BUILD = NO


OS = IRIX
BUILD = NO

OS = SunOS
LOCAL_CCFLAGS = -D_SUNOS_SOURCE
CXX_EXCEPTION = 
SYS_LIBS = -Bdynamic -lGL -lGLU -lX11 -lnsl -lsocket -lC -lw
#SYS_LIBS = -Bdynamic -lGL -lGLw -lGLU -lX11 -lnsl -lsocket -lC -lw 
#SYS_LIBS = -Bdynamic -lGL -lGLw -lGLU -lX11 -lnsl -lsocket -lC -lC_mtstubs -lw -Bstatic
SH_SYS_LIBS = $(SYS_LIBS)

OS = intel_a
BUILD = NO

OS = win_b
BUILD = NO

OS = win_b64
BUILD = NO

OS = win_a
BUILD = NO

OS = alpha_a
BUILD = NO







