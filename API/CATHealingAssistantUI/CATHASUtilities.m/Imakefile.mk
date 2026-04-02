# COPYRIGHT DASSAULT SYSTEMES 2002
#======================================================================
# Imakefile for module CATHASUtilities.m
#======================================================================
#
#  25/05/04 : mlh; creation
#  02/12/2005 : mlh ; report menage R201
#  03/11/2006 : mlh ; R18 suppression CATConstraintModeler, CATConstraintModelerItf
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = 
# END WIZARD EDITION ZONE

LINK_WITH = \
            AC0SPBAS                \  # ObjectSpecsModeler
            CATGitInterfaces        \  # GSMInterfaces 
            CATHASItf               \  # CATHealingAssistantInterfaces
 			CATInteractiveInterfaces\
 			CATMecModInterfaces		\
            CATVisualization        \  # Visualization
            CATViz					\
            JS0STR                  \  # System
            MF0STARTUP              \  # MechanicalModeler

# System dependant variables
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
