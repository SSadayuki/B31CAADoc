#
#   Imakefile.mk
#   Copyright (C) DELMIA Corp., 2004
#
BUILT_OBJECT_TYPE   = SHARED LIBRARY

COMMON_LINK_WITH    = JS0GROUP                  \ # System
                      JS0FM                     \ # System
                      CATVisualization          \ # Visualization
                      CATViz                    \ # VisualizationBase
                      AS0STARTUP                \ # ProductStructure
                      CATDialogEngine           \ # DialogEngine
                      CATObjectModelerBase      \ # ObjectModelerBase
                      CD0WIN                    \ # ApplicationFrame
                      CATNavigatorItf           \ # NavigatorInterfaces


LINK_WITH           = $(COMMON_LINK_WITH)

INCLUDED_MODULES    =

#
# Define the build options for the current module.
#
OS      = Windows_NT
BUILD   = YES

OS      = IRIX
BUILD   = YES

OS      = SunOS
BUILD   = YES

OS      = AIX
BUILD   = YES

OS      = HP-UX
BUILD   = YES

OS      = win_a
BUILD   = NO
