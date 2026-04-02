# COPYRIGHT DASSAULT SYSTEMES 2004
# 
#Quickreview : 19:02:06 VSE6 HSR modules added for product simplification implementation
#======================================================================
#
# Fw : CATDECServicesAlgo
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH =                            \
            CATApplicationFrame        \
            CATCGMGeoMath              \
            CATConstraintModeler       \
            CATConstraintModelerItf    \
            CATDialogEngine            \
            CATFileMenu                \
            CATGeometricObjects        \
            CATIAApplicationFrame      \
            CATInteractiveInterfaces   \
            CATLifDictionary           \
            CATMathematics             \
            CATMathematics             \
            CATMathStream              \
            CATMcoInterfaces           \
            CATMecModInterfaces        \
            CATMechanicalModeler       \
            CATObjectModelerBase       \
            CATObjectSpecsModeler      \
            CATProductStructure1       \
            CATSketcherInterfaces      \
            CATTopologicalObjects      \
            CATTPSItf                  \
            CATTPSUUID                 \
            CATUdfInterfaces           \
            CATVisualization           \
            CATViz                     \
            DI0PANV2                   \
            JS0FM                      \
            JS0GROUP                   \
            JS0GROUP                   \
            KnowledgeItf               \
            PartItf                    \
            CATGitInterfaces           \
            CATMmrReplace              \ # Pour corriger les WARNING de mkmk
            CATMechanicalCommands      \ # Pour corriger les WARNING de mkmk
            CATMcoModel                \ # Pour corriger les WARNING de mkmk
			HSR                        \ # HLRBase
			HRV                        \ # HLRBase
	        PolyVisuProjectionOper     \ # PolyhedralVisuOperators


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
