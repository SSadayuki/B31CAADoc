#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
MechanicalCommandsUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# CATUdfInterfaces
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)  ApplicationFrame  \
			CATInteractiveInterfaces CATFileMenu \
            DI0PANV2 DI0STATE \
            JS0GROUP JS0FM \
            ObjectModeler \
            SpecsModeler \
            VE0GROUP  \
            Mathematics CATLiteralFeatures InfPubIDL CATViz CATMathStream 

INCLUDED_MODULES = CATMcoInterfaces

ALIASES_ON_IMPORT=CATUdfInterfaces CATMechanicalCommands CATInteractiveInterfaces CATMmrReplace
