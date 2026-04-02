# COPYRIGHT DASSAULT SYSTEMES 2002
#======================================================================
# Imakefile for module CATHealingAssistantServices.m
#======================================================================
#  Creatin : jfi / mlh
#  09/12/2002 : JFI ; Mise a jour suivant DDR
#  27/03/2003 : mlh ; ajout CATSurfacicUIResources
#  02/12/2005 : mlh ; report menage R201
#  03/11/2006 : mlh ; R18 suppression CATConstraintModeler, CATConstraintModelerItf, CATConstraintModelerUI
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = 
# END WIZARD EDITION ZONE

INCLUDED_MODULES =      CATHealingServices CATAnalyseGeomServices

LINK_WITH =                            \
            AC0SPBAS                   \  # ObjectSpecsModeler
            AD0XXBAS                   \  # ObjectModelerBase
            CATCGMGeoMath			   \  
            CATGitInterfaces           \  # GSMInterfaces
            CATGmoUtilities            \  # GSMModel
            CATHASItf                  \  # CATHealingAssistantInterfaces
            CATLiteralFeatures         \  # LiteralFeatures
            CATMathematics             \  # Mathematics
            CATMathStream              \  # Mathematics
            CATTlgServices             \  # CATTlgServices
            CATTopologicalObjects      \  # NewTopologicalObjects
            CATTopologicalOperators    \  # TopologicalOperators
            CATVisualization           \  # Visualization
            CATViz                     \  # VisualizationBase
            CD0WIN                     \  # ApplicationFrame
            DI0PANV2                   \  # Dialog
            JS0CORBA                   \  # System
            JS0GROUP                   \  # System
            JS0SCBAK                   \  # System
            KnowledgeItf               \  # KnowledgeInterfaces : Module [KnowledgeItf.m], which is define as an alias, was automatically added in LINK_WITH.
            MecModItfCPP               \  # MecModInterfaces
            MF0STARTUP                 \  # MechanicalModeler
            PrtEnv                     \  # MechanicalModelerUI
            YI00IMPL                   \  # NewTopologicalObjects
            YN000MFL                   \  # Mathematics
            YP00IMPL                   \  # GeometricObjects
            YN000FUN                   \
            Y30UIUTI                   \

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
