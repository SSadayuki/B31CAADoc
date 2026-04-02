# COPYRIGHT DASSAULT SYSTEMES 2004
#======================================================================
#
# SHARED LIBRARY : CATDataExchControlAlgo
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = CATDECProductToPartAlgo \
					CATRemoveIPGeneralAlgo

LINK_WITH=                                   \
            CATApplicationFrame              \
            CATCGMGeoMath                    \
            CATConstraintModeler             \
            CATConstraintModelerItf          \
            CATDECProductToPartCAA           \
            CATDECServicesAlgo               \
            CATGeometricObjects              \
            CATGitInterfaces                 \
            CATIAApplicationFrame            \
            CATInteractiveInterfaces         \
            CATLifDictionary                 \
            CATMathematics                   \
            CATMathStream                    \
            CATMcoInterfaces                 \
            CATMcoModel                      \ # Pour corriger les WARNING de mkmk
            CATMechanicalCommands            \ # Pour corriger les WARNING de mkmk
            CATMechanicalModeler             \
            CATMecModInterfaces              \
			CATMecModLiveUseItf			     \ # CATMecModLiveUseItf            CATMecModLiveUseItf
			CATMmlBRepModel					 \ # FW MechanicalModelerLive pour CATMmlDefaultVisProperties
            CATMmrReplace                    \ # Pour corriger les WARNING de mkmk
            CATObjectModelerBase             \
            CATObjectSpecsModeler            \
            CATProductStructure1             \
            CATProductStructureInterfaces    \  #  ProductStructureInterfaces 
            CATSketcherInterfaces            \
            CATSurfResMecMod                 \
            CATTerTechnoResultInterfacesUUID \
            CATTerTechnoResultItf            \
            CATTopologicalObjects            \
            CATTPSItf                        \
            CATTPSUUID                       \
            CATUdfInterfaces                 \
            CATVisualization                 \
            CATViz                           \
            DECCAInterfaces                  \
            DI0PANV2                         \
            DraftingItfCPP                   \
			GN0GRAPH						 \ # FW GenericNaming pour CATBrpDefaultGraphicProperties
            JS0FILE                          \
            JS0FM                            \
            JS0GROUP                         \
            KnowledgeItf                     \ # Module [KnowledgeItf.m], which is define as an alias, was automatically added in LINK_WITH.
            PartItf                          \
            YI00IMPL                         \
            CATSkmWireframe                  \
			#CATMatInterfaces				 \
			CATDataExchControlIntf			 \
			MecModLiveItf					 \
			Infra2DItfCPP					 \




# CATTTRSInterfaces      

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
